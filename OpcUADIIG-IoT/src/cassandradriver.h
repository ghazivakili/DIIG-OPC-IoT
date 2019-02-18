

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "cassandra.h"

#ifndef CASSANDRADRIVER
#define CASSANDRADRIVER





void print_error(CassFuture* future) {
  const char* message;
  size_t message_length;
  cass_future_error_message(future, &message, &message_length);
  fprintf(stderr, "Error: %.*s\n", (int)message_length, message);
}

CassCluster* create_cluster(const char* hosts) {
  CassCluster* cluster = cass_cluster_new();
  cass_cluster_set_contact_points(cluster, hosts);
  return cluster;
}

CassError connect_session(CassSession* session, const CassCluster* cluster) {
  CassError rc = CASS_OK;
  CassFuture* future = cass_session_connect(session, cluster);

  cass_future_wait(future);
  rc = cass_future_error_code(future);
  if (rc != CASS_OK) {
    print_error(future);
  }
  cass_future_free(future);

  return rc;
}

CassError execute_query(CassSession* session, const char* query) {
  CassError rc = CASS_OK;
  CassFuture* future = NULL;
  CassStatement* statement = cass_statement_new(query, 0);

  future = cass_session_execute(session, statement);
  cass_future_wait(future);

  rc = cass_future_error_code(future);
  if (rc != CASS_OK) {
    print_error(future);
  }

  cass_future_free(future);
  cass_statement_free(statement);

  return rc;
}

CassError insert_into_collections(CassSession* session, int node_id, CassUuid timeid, const int32_t items[]) {
  CassError rc = CASS_OK;
  CassStatement* statement = NULL;
  CassFuture* future = NULL;
  CassCollection* collection = NULL;
  const char** item = NULL;
  const char* query = "INSERT INTO opcua.collections (id, node_id, items) VALUES (? ,?, ?);";
  //const char* query = "INSERT INTO opc.collections (node_id, ts, data_1,data_2,data_3,data_4,data_5,data_6,data_7,data_8,event_binary,event_json) VALUES (?,?,?,?,?,?,?,?,?,?,?,?)";

  statement = cass_statement_new(query, 3);

  cass_statement_bind_uuid(statement, 0, timeid);
  cass_statement_bind_int64(statement, 1, node_id);


  collection = cass_collection_new(CASS_COLLECTION_TYPE_SET, 2);
/*  for (item = items; *item; item++) {
    cass_collection_append_string(collection, *item);
    //printf("-%s\n", *item);
  }*/

  for (int i=2; i<10; i++) {
    cass_collection_append_int64(collection, items[i]);
    //printf("-%d\n", items[i]);
  }
  //cass_statement_bind_int64(statement, 3, 1548258419);
  cass_statement_bind_collection(statement, 2, collection);
  cass_collection_free(collection);

  future = cass_session_execute(session, statement);
  cass_future_wait(future);

  rc = cass_future_error_code(future);
  if (rc != CASS_OK) {
    printf("KO\n");
    print_error(future);
  }

  cass_future_free(future);
  cass_statement_free(statement);

  return rc;
}


CassError select_from_collections(CassSession* session, CassUuid timeid) {
  CassError rc = CASS_OK;
  CassStatement* statement = NULL;
  CassFuture* future = NULL;
  const char* query = "SELECT items FROM opcua.collections WHERE id = ?";

  statement = cass_statement_new(query, 1);

  cass_statement_bind_uuid(statement, 0, timeid);

  future = cass_session_execute(session, statement);
  cass_future_wait(future);

  rc = cass_future_error_code(future);
  if (rc != CASS_OK) {
    print_error(future);
  } else {
    const CassResult* result = cass_future_get_result(future);
    CassIterator* iterator = cass_iterator_from_result(result);

    if (cass_iterator_next(iterator)) {
      const CassValue* value = NULL;
      const CassRow* row = cass_iterator_get_row(iterator);
      CassIterator* items_iterator = NULL;

      value = cass_row_get_column(row, 0);
      items_iterator = cass_iterator_from_collection(value);
      while (cass_iterator_next(items_iterator)) {
        const char* item;
        size_t item_length;
        cass_value_get_string(cass_iterator_get_value(items_iterator), &item, &item_length);
        printf("item: %.*s\n", (int)item_length, item);
      }
      cass_iterator_free(items_iterator);
    }

    cass_result_free(result);
    cass_iterator_free(iterator);
  }

  cass_future_free(future);
  cass_statement_free(statement);

  return rc;
}


void create_db_cass(CassSession* session) {
  execute_query(session,
                "CREATE KEYSPACE IF NOT EXISTS opcua WITH replication = { \
                           'class': 'SimpleStrategy', 'replication_factor': '1' };");

  execute_query(session,
                "CREATE TABLE IF NOT EXISTS opcua.collections (   id UUID, \
                                                    ts bigint, \
                                                    node_id bigint, \
                                                    items set<bigint>, \
                                                    PRIMARY KEY (id ,node_id))");
}

#endif
