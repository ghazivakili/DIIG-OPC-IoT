#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "cassandradriver.h"

int main(int argc, char* argv[]) {
  CassCluster* cluster = NULL;
  CassSession* session = cass_session_new();
  CassUuidGen* uuid_gen = cass_uuid_gen_new();
  CassUuid uuid;
  char* hosts = "127.0.0.1";

  //const char* items[] = { "1", "2", "3", "4", "6","7","8",NULL};
  const int32_t items[] = { 1, 2, 3, 4, 5,6,7,8};

  if (argc > 1) {
    hosts = argv[1];
  }
  cluster = create_cluster(hosts);

  if (connect_session(session, cluster) != CASS_OK) {
    cass_cluster_free(cluster);
    cass_session_free(session);
    return -1;
  }


  create_db_cass(session);

  cass_uuid_gen_time(uuid_gen, &uuid);
  insert_into_collections(session, 115 , uuid, items);
  select_from_collections(session, uuid);

  cass_cluster_free(cluster);
  cass_session_free(session);

  return 0;
}
