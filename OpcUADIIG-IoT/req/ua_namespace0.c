/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ua_namespace0.h"


/* Structure - ns=0;i=22 */

static UA_StatusCode function_ua_namespace0_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Structure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is any type of structure that can be described with a data encoding.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Structure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 22)
);
}

/* Enumeration - ns=0;i=29 */

static UA_StatusCode function_ua_namespace0_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Enumeration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an enumerated DataType.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Enumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 29)
);
}

/* ByteString - ns=0;i=15 */

static UA_StatusCode function_ua_namespace0_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ByteString");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a sequence of bytes.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ByteString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 15)
);
}

/* StatusCode - ns=0;i=19 */

static UA_StatusCode function_ua_namespace0_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StatusCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a code representing the outcome of an operation by a Server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 19),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "StatusCode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 19)
);
}

/* XmlElement - ns=0;i=16 */

static UA_StatusCode function_ua_namespace0_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XmlElement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an XML element.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 16),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "XmlElement"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 16)
);
}

/* EnumValueType - ns=0;i=7594 */

static UA_StatusCode function_ua_namespace0_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A mapping between a value of an enumerated type and a name and description.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 7594),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "EnumValueType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7594)
);
}

/* DateTime - ns=0;i=13 */

static UA_StatusCode function_ua_namespace0_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DateTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a Gregorian calender date and time.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 13),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DateTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 13)
);
}

/* HasHistoricalConfiguration - ns=0;i=56 */

static UA_StatusCode function_ua_namespace0_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "HistoricalConfigurationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasHistoricalConfiguration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to the historical configuration for a data variable.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 56),
UA_NODEID_NUMERIC(ns[0], 44),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasHistoricalConfiguration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 56)
);
}

/* ToState - ns=0;i=52 */

static UA_StatusCode function_ua_namespace0_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "FromTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "ToState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to the state after a transition.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 52),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ToState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 52)
);
}

/* ServerState - ns=0;i=852 */

static UA_StatusCode function_ua_namespace0_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 852),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 852)
);
}

/* DataValue - ns=0;i=23 */

static UA_StatusCode function_ua_namespace0_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a structure containing a value, a status code and timestamps.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 23),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataValue"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 23)
);
}

/* Boolean - ns=0;i=1 */

static UA_StatusCode function_ua_namespace0_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Boolean");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is either TRUE or FALSE.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 1),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Boolean"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 1)
);
}

/* QualifiedName - ns=0;i=20 */

static UA_StatusCode function_ua_namespace0_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QualifiedName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a name qualified by a namespace.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 20),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "QualifiedName"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 20)
);
}

/* SignedSoftwareCertificate - ns=0;i=344 */

static UA_StatusCode function_ua_namespace0_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignedSoftwareCertificate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A software certificate with a digital signature.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 344),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "SignedSoftwareCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 344)
);
}

/* Guid - ns=0;i=14 */

static UA_StatusCode function_ua_namespace0_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Guid");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a 128-bit globally unique identifier.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 14),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Guid"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 14)
);
}

/* ServerStatusDataType - ns=0;i=862 */

static UA_StatusCode function_ua_namespace0_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 862),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerStatusDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 862)
);
}

/* HasCause - ns=0;i=53 */

static UA_StatusCode function_ua_namespace0_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeCausedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasCause");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to a method that can cause a transition to occur.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 53),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasCause"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 53)
);
}

/* ServerDiagnosticsSummaryDataType - ns=0;i=859 */

static UA_StatusCode function_ua_namespace0_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 859),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 859)
);
}

/* DiagnosticInfo - ns=0;i=25 */

static UA_StatusCode function_ua_namespace0_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DiagnosticInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a structure containing diagnostics associated with a StatusCode.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 25),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DiagnosticInfo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 25)
);
}

/* BuildInfo - ns=0;i=338 */

static UA_StatusCode function_ua_namespace0_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 338),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 338)
);
}

/* LocalizedText - ns=0;i=21 */

static UA_StatusCode function_ua_namespace0_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocalizedText");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is human readable Unicode text with a locale identifier.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 21),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "LocalizedText"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 21)
);
}

/* ExpandedNodeId - ns=0;i=18 */

static UA_StatusCode function_ua_namespace0_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExpandedNodeId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an absolute identifier for a node.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 18),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ExpandedNodeId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 18)
);
}

/* UtcTime - ns=0;i=294 */

static UA_StatusCode function_ua_namespace0_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UtcTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A date/time value specified in Universal Coordinated Time (UTC).");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 294),
UA_NODEID_NUMERIC(ns[0], 13),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UtcTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 294)
);
}

/* Argument - ns=0;i=296 */

static UA_StatusCode function_ua_namespace0_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An argument for a method.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 296),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Argument"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 296)
);
}

/* NodeId - ns=0;i=17 */

static UA_StatusCode function_ua_namespace0_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an identifier for a node within a Server address space.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 17),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "NodeId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17)
);
}

/* String - ns=0;i=12 */

static UA_StatusCode function_ua_namespace0_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "String");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a sequence of printable Unicode characters.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "String"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12)
);
}

/* Number - ns=0;i=26 */

static UA_StatusCode function_ua_namespace0_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that can have any numeric DataType.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Number"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 26)
);
}

/* HasEffect - ns=0;i=54 */

static UA_StatusCode function_ua_namespace0_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeEffectedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasEffect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to an event that may be raised when a transition occurs.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 54),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasEffect"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 54)
);
}

/* FromState - ns=0;i=51 */

static UA_StatusCode function_ua_namespace0_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ToTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "FromState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to the state before a transition.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 51),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "FromState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 51)
);
}

/* Image - ns=0;i=30 */

static UA_StatusCode function_ua_namespace0_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Image");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an image encoded as a string of bytes.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 30),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Image"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 30)
);
}

/* RedundancySupport - ns=0;i=851 */

static UA_StatusCode function_ua_namespace0_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 851),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 851)
);
}

/* NamingRuleType - ns=0;i=120 */

static UA_StatusCode function_ua_namespace0_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRuleType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that specifies the significance of the BrowseName for an instance declaration.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 120),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "NamingRuleType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 120)
);
}

/* LocaleId - ns=0;i=295 */

static UA_StatusCode function_ua_namespace0_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An identifier for a user locale.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 295),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "LocaleId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 295)
);
}

/* Float - ns=0;i=10 */

static UA_StatusCode function_ua_namespace0_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Float");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an IEEE 754-1985 single precision floating point number.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 10),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Float"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 10)
);
}

/* Decimal - ns=0;i=50 */

static UA_StatusCode function_ua_namespace0_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Decimal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes an arbitrary precision decimal value.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 50),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Decimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 50)
);
}

/* Integer - ns=0;i=27 */

static UA_StatusCode function_ua_namespace0_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Integer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that can have any integer DataType.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Integer"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 27)
);
}

/* Double - ns=0;i=11 */

static UA_StatusCode function_ua_namespace0_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Double");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an IEEE 754-1985 double precision floating point number.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 11),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Double"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11)
);
}

/* Int64 - ns=0;i=8 */

static UA_StatusCode function_ua_namespace0_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int64");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between −9,223,372,036,854,775,808 and 9,223,372,036,854,775,807.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 8),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Int64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8)
);
}

/* SByte - ns=0;i=2 */

static UA_StatusCode function_ua_namespace0_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SByte");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between -128 and 127.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 2),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "SByte"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2)
);
}

/* UInteger - ns=0;i=28 */

static UA_StatusCode function_ua_namespace0_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UInteger");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that can have any unsigned integer DataType.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInteger"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 28)
);
}

/* UInt64 - ns=0;i=9 */

static UA_StatusCode function_ua_namespace0_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt64");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between 0 and 18,446,744,073,709,551,615.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 9),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInt64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 9)
);
}

/* Int32 - ns=0;i=6 */

static UA_StatusCode function_ua_namespace0_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int32");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between −2,147,483,648  and 2,147,483,647.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 6),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Int32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 6)
);
}

/* Byte - ns=0;i=3 */

static UA_StatusCode function_ua_namespace0_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Byte");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between 0 and 255.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 3),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Byte"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3)
);
}

/* UInt32 - ns=0;i=7 */

static UA_StatusCode function_ua_namespace0_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt32");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between 0 and 4,294,967,295.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 7),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInt32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7)
);
}

/* Int16 - ns=0;i=4 */

static UA_StatusCode function_ua_namespace0_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int16");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between −32,768 and 32,767.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 4),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Int16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 4)
);
}

/* Duration - ns=0;i=290 */

static UA_StatusCode function_ua_namespace0_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A period of time measured in milliseconds.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 290),
UA_NODEID_NUMERIC(ns[0], 11),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Duration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 290)
);
}

/* UInt16 - ns=0;i=5 */

static UA_StatusCode function_ua_namespace0_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt16");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an integer between 0 and 65535.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 5),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInt16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 5)
);
}

/* DataTypeDescriptionType - ns=0;i=69 */

static UA_StatusCode function_ua_namespace0_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDescriptionType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for variable that represents the description of a data type encoding.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 69),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeDescriptionType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 69)
);
}

/* HistoryServerCapabilitiesType - ns=0;i=2330 */

static UA_StatusCode function_ua_namespace0_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryServerCapabilitiesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2330),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HistoryServerCapabilitiesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2330)
);
}

/* BuildInfoType - ns=0;i=3051 */

static UA_StatusCode function_ua_namespace0_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfoType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BuildInfoType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3051)
);
}

/* ServerType - ns=0;i=2004 */

static UA_StatusCode function_ua_namespace0_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Specifies the current status and capabilities of the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2004)
);
}

/* ServerCapabilitiesType - ns=0;i=2013 */

static UA_StatusCode function_ua_namespace0_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilitiesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the capabilities supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2013),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilitiesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2013)
);
}

/* Default XML - ns=0;i=3063 */

static UA_StatusCode function_ua_namespace0_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The default XML encoding for a data type.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3063),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3063)
);
}

/* ServerDiagnosticsSummaryType - ns=0;i=2150 */

static UA_StatusCode function_ua_namespace0_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2150)
);
}

/* SessionTimeoutCount - ns=0;i=2156 */

static UA_StatusCode function_ua_namespace0_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2156_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2156_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2156_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2156),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2156)
);
}

/* DataTypeDictionaryType - ns=0;i=72 */

static UA_StatusCode function_ua_namespace0_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDictionaryType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for variable that represents the collection of data type decriptions.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 72),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeDictionaryType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 72)
);
}

/* CumulatedSessionCount - ns=0;i=2153 */

static UA_StatusCode function_ua_namespace0_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2153_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2153_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2153_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2153),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2153)
);
}

/* Server - ns=0;i=2253 */

static UA_StatusCode function_ua_namespace0_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Server");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "Server"),
UA_NODEID_NUMERIC(ns[0], 2004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2253)
);
}

/* ServerRedundancyType - ns=0;i=2034 */

static UA_StatusCode function_ua_namespace0_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A base type for an object that describe how a server supports redundancy.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2034),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancyType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2034)
);
}

/* OperationLimitsType - ns=0;i=11564 */

static UA_StatusCode function_ua_namespace0_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimitsType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifies the operation limits imposed by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 61),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "OperationLimitsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11564)
);
}

/* SecurityRejectedRequestsCount - ns=0;i=2162 */

static UA_StatusCode function_ua_namespace0_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2162_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2162_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2162_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2162),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2162)
);
}

/* PublishingIntervalCount - ns=0;i=2159 */

static UA_StatusCode function_ua_namespace0_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2159_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2159_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2159_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2159),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2159)
);
}

/* Default Binary - ns=0;i=3062 */

static UA_StatusCode function_ua_namespace0_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The default binary encoding for a data type.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3062),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3062)
);
}

/* ServerStatusType - ns=0;i=2138 */

static UA_StatusCode function_ua_namespace0_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerStatusType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2138)
);
}

/* CumulatedSubscriptionCount - ns=0;i=2161 */

static UA_StatusCode function_ua_namespace0_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2161_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2161_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2161_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2161),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2161)
);
}

/* ServerStatus - ns=0;i=2256 */

static UA_StatusCode function_ua_namespace0_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862);
UA_STACKARRAY(UA_ServerStatusDataType, variablenode_ns_0_i_2256_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2256_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2256_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The current status of the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerStatus"),
UA_NODEID_NUMERIC(ns[0], 2138),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2256)
);
}

/* ModellingRuleType - ns=0;i=77 */

static UA_StatusCode function_ua_namespace0_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRuleType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for an object that describes how an instance declaration is used when a type is instantiated.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 77),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ModellingRuleType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 77)
);
}

/* ServerRedundancy - ns=0;i=2296 */

static UA_StatusCode function_ua_namespace0_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancy");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the redundancy capabilities of the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2296),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancy"),
UA_NODEID_NUMERIC(ns[0], 2034),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2296)
);
}

/* StartTime - ns=0;i=2257 */

static UA_StatusCode function_ua_namespace0_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
UA_STACKARRAY(UA_UtcTime, variablenode_ns_0_i_2257_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2257_variant_DataContents, &UA_TYPES[UA_TYPES_UTCTIME]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2257_variant_DataContents, &UA_TYPES[UA_TYPES_UTCTIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2257),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2257)
);
}

/* Mandatory - ns=0;i=78 */

static UA_StatusCode function_ua_namespace0_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mandatory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Specifies that an instance with the attributes and references of the instance declaration must appear when a type is instantiated.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 78),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Mandatory"),
UA_NODEID_NUMERIC(ns[0], 77),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2159), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2153), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2162), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2161), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2156), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 78)
);
}

/* SessionAbortCount - ns=0;i=2157 */

static UA_StatusCode function_ua_namespace0_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2157_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2157_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2157_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2157),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2157), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2157)
);
}

/* CurrentSessionCount - ns=0;i=2152 */

static UA_StatusCode function_ua_namespace0_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2152_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2152_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2152_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2152),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2152), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2152)
);
}

/* RejectedRequestsCount - ns=0;i=2163 */

static UA_StatusCode function_ua_namespace0_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2163_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2163_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2163_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2163),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2163), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2163)
);
}

/* PropertyType - ns=0;i=68 */

static UA_StatusCode function_ua_namespace0_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "PropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for variable that represents a property of another node.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 68),
UA_NODEID_NUMERIC(ns[0], 62),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "PropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 68)
);
}

/* State - ns=0;i=2259 */

static UA_StatusCode function_ua_namespace0_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852);
UA_STACKARRAY(UA_ServerState, variablenode_ns_0_i_2259_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2259_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2259_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATE]);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2259),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "State"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2259)
);
}

/* RejectedSessionCount - ns=0;i=2155 */

static UA_StatusCode function_ua_namespace0_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2155_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2155_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2155_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2155),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2155), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2155)
);
}

/* RedundancySupport - ns=0;i=3709 */

static UA_StatusCode function_ua_namespace0_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851);
UA_STACKARRAY(UA_RedundancySupport, variablenode_ns_0_i_3709_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_3709_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_3709_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Indicates what style of redundancy is supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3709),
UA_NODEID_NUMERIC(ns[0], 2296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3709)
);
}

/* GetMonitoredItems - ns=0;i=11492 */

static UA_StatusCode function_ua_namespace0_77_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetMonitoredItems");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11492),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "GetMonitoredItems"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace0_77_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11492)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* MaxNodesPerNodeManagement - ns=0;i=11573 */

static UA_StatusCode function_ua_namespace0_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11573_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11573_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11573_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single AddNodes, AddReferences, DeleteNodes or DeleteReferences request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11573),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11573)
);
}

/* SecurityRejectedSessionCount - ns=0;i=2154 */

static UA_StatusCode function_ua_namespace0_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2154_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2154_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2154_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2154),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2154), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2154)
);
}

/* OutputArguments - ns=0;i=11494 */

static UA_StatusCode function_ua_namespace0_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);

struct {
  UA_String Name;
  UA_NodeId DataType;
  UA_Int32 ValueRank;
  UA_Int32 ArrayDimensionsSize;
  UA_UInt32 *ArrayDimensions;
  UA_LocalizedText Description;
} variablenode_ns_0_i_11494_Argument_0_0_struct;
variablenode_ns_0_i_11494_Argument_0_0_struct.Name = UA_STRING("ServerHandles");
variablenode_ns_0_i_11494_Argument_0_0_struct.DataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_0_i_11494_Argument_0_0_struct.ValueRank = (UA_Int32) 1;
variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensionsSize = 1;
variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions = (UA_UInt32*) UA_malloc(sizeof(UA_UInt32));
variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions[0]  = (UA_UInt32) 0;
variablenode_ns_0_i_11494_Argument_0_0_struct.Description = UA_LOCALIZEDTEXT("", "");
UA_ExtensionObject *variablenode_ns_0_i_11494_Argument_0_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_11494_Argument_0_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_11494_Argument_0_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 298);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body, 32000);
UA_Byte *posvariablenode_ns_0_i_11494_Argument_0_0 = variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_11494_Argument_0_0 = &variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data[32000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.Name, &UA_TYPES[UA_TYPES_STRING], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.DataType, &UA_TYPES[UA_TYPES_NODEID], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.ValueRank, &UA_TYPES[UA_TYPES_INT32], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions[0], &UA_TYPES[UA_TYPES_UINT32], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
}
size_t variablenode_ns_0_i_11494_Argument_0_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_11494_Argument_0_0-variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data);
variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.length = variablenode_ns_0_i_11494_Argument_0_0_encOffset;
UA_Byte *variablenode_ns_0_i_11494_Argument_0_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_11494_Argument_0_0_encOffset);
memcpy(variablenode_ns_0_i_11494_Argument_0_0_newBody, variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data, variablenode_ns_0_i_11494_Argument_0_0_encOffset);
UA_Byte *variablenode_ns_0_i_11494_Argument_0_0_oldBody = variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data;
variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data = variablenode_ns_0_i_11494_Argument_0_0_newBody;
UA_free(variablenode_ns_0_i_11494_Argument_0_0_oldBody);


struct {
  UA_String Name;
  UA_NodeId DataType;
  UA_Int32 ValueRank;
  UA_Int32 ArrayDimensionsSize;
  UA_UInt32 *ArrayDimensions;
  UA_LocalizedText Description;
} variablenode_ns_0_i_11494_Argument_1_0_struct;
variablenode_ns_0_i_11494_Argument_1_0_struct.Name = UA_STRING("ClientHandles");
variablenode_ns_0_i_11494_Argument_1_0_struct.DataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_0_i_11494_Argument_1_0_struct.ValueRank = (UA_Int32) 1;
variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensionsSize = 1;
variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions = (UA_UInt32*) UA_malloc(sizeof(UA_UInt32));
variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions[0]  = (UA_UInt32) 0;
variablenode_ns_0_i_11494_Argument_1_0_struct.Description = UA_LOCALIZEDTEXT("", "");
UA_ExtensionObject *variablenode_ns_0_i_11494_Argument_1_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_11494_Argument_1_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_11494_Argument_1_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 298);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body, 32000);
UA_Byte *posvariablenode_ns_0_i_11494_Argument_1_0 = variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_11494_Argument_1_0 = &variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data[32000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.Name, &UA_TYPES[UA_TYPES_STRING], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.DataType, &UA_TYPES[UA_TYPES_NODEID], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.ValueRank, &UA_TYPES[UA_TYPES_INT32], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions[0], &UA_TYPES[UA_TYPES_UINT32], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
}
size_t variablenode_ns_0_i_11494_Argument_1_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_11494_Argument_1_0-variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data);
variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.length = variablenode_ns_0_i_11494_Argument_1_0_encOffset;
UA_Byte *variablenode_ns_0_i_11494_Argument_1_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_11494_Argument_1_0_encOffset);
memcpy(variablenode_ns_0_i_11494_Argument_1_0_newBody, variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data, variablenode_ns_0_i_11494_Argument_1_0_encOffset);
UA_Byte *variablenode_ns_0_i_11494_Argument_1_0_oldBody = variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data;
variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data = variablenode_ns_0_i_11494_Argument_1_0_newBody;
UA_free(variablenode_ns_0_i_11494_Argument_1_0_oldBody);

UA_ExtensionObject variablenode_ns_0_i_11494_variant_DataContents[2];
variablenode_ns_0_i_11494_variant_DataContents[0] = *variablenode_ns_0_i_11494_Argument_0_0;
variablenode_ns_0_i_11494_variant_DataContents[1] = *variablenode_ns_0_i_11494_Argument_1_0;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11494_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11494),
UA_NODEID_NUMERIC(ns[0], 11492),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);

UA_free(variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions);
UA_ExtensionObject_delete(variablenode_ns_0_i_11494_Argument_0_0);

UA_free(variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions);
UA_ExtensionObject_delete(variablenode_ns_0_i_11494_Argument_1_0);
return retVal;
}

static UA_StatusCode function_ua_namespace0_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11494)
);
}

/* CurrentSubscriptionCount - ns=0;i=2160 */

static UA_StatusCode function_ua_namespace0_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2160_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2160_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2160_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2160),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2160), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2160)
);
}

/* DataTypeSystemType - ns=0;i=75 */

static UA_StatusCode function_ua_namespace0_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeSystemType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 75),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeSystemType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 75)
);
}

/* NamingRule - ns=0;i=111 */

static UA_StatusCode function_ua_namespace0_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120);
UA_Int32 *variablenode_ns_0_i_111_variant_DataContents =  UA_Int32_new();
*variablenode_ns_0_i_111_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_111_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Specified the significances of the BrowseName when a type is instantiated.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 111),
UA_NODEID_NUMERIC(ns[0], 77),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_111_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 111), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 111)
);
}

/* ServerDiagnosticsType - ns=0;i=2020 */

static UA_StatusCode function_ua_namespace0_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The diagnostics information for a server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2020),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2020)
);
}

/* MaxNodesPerMethodCall - ns=0;i=11569 */

static UA_StatusCode function_ua_namespace0_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11569_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11569_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11569_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Call request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11569),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11569)
);
}

/* VendorServerInfoType - ns=0;i=2033 */

static UA_StatusCode function_ua_namespace0_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfoType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A base type for vendor specific server information.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2033),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfoType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2033)
);
}

/* ShutdownReason - ns=0;i=2993 */

static UA_StatusCode function_ua_namespace0_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_STACKARRAY(UA_LocalizedText, variablenode_ns_0_i_2993_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2993_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2993_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShutdownReason");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2993),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ShutdownReason"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2993)
);
}

/* DataTypeEncodingType - ns=0;i=76 */

static UA_StatusCode function_ua_namespace0_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeEncodingType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 76),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeEncodingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 76)
);
}

/* ServerViewCount - ns=0;i=2151 */

static UA_StatusCode function_ua_namespace0_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2151_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2151_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2151_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2151),
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2151), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2151)
);
}

/* MaxNodesPerRegisterNodes - ns=0;i=11571 */

static UA_StatusCode function_ua_namespace0_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11571_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11571_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11571_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single RegisterNodes request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11571),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11571)
);
}

/* NamingRule - ns=0;i=112 */

static UA_StatusCode function_ua_namespace0_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120);
UA_Int32 *variablenode_ns_0_i_112_variant_DataContents =  UA_Int32_new();
*variablenode_ns_0_i_112_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_112_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Specified the significances of the BrowseName when a type is instantiated.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 112),
UA_NODEID_NUMERIC(ns[0], 78),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_112_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace0_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 112)
);
}

/* MaxNodesPerWrite - ns=0;i=11567 */

static UA_StatusCode function_ua_namespace0_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11567_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11567_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11567_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Write request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11567),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11567)
);
}

/* Default Binary - ns=0;i=298 */

static UA_StatusCode function_ua_namespace0_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 298),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 298), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[0], 296), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 298)
);
}

/* Auditing - ns=0;i=2994 */

static UA_StatusCode function_ua_namespace0_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_2994_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2994_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2994_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Auditing");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A flag indicating whether the server is currently generating audit events.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2994),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Auditing"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2994)
);
}

/* OPC Binary - ns=0;i=93 */

static UA_StatusCode function_ua_namespace0_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPC Binary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A type system which uses OPC binary schema to describe the encoding of data types.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 90),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "OPC Binary"),
UA_NODEID_NUMERIC(ns[0], 75),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 93)
);
}

/* OperationLimits - ns=0;i=11551 */

static UA_StatusCode function_ua_namespace0_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Defines the limits supported by the server for different operations.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11551),
UA_NODEID_NUMERIC(ns[0], 2013),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11551)
);
}

/* DataTypeVersion - ns=0;i=104 */

static UA_StatusCode function_ua_namespace0_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_104_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_104_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_104_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The version number for the data type description.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 104),
UA_NODEID_NUMERIC(ns[0], 69),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 104)
);
}

/* BuildInfo - ns=0;i=2260 */

static UA_StatusCode function_ua_namespace0_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338);
UA_STACKARRAY(UA_BuildInfo, variablenode_ns_0_i_2260_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2260_variant_DataContents, &UA_TYPES[UA_TYPES_BUILDINFO]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2260_variant_DataContents, &UA_TYPES[UA_TYPES_BUILDINFO]);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NUMERIC(ns[0], 3051),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2260)
);
}

/* ServerCapabilities - ns=0;i=2268 */

static UA_StatusCode function_ua_namespace0_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilities");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes capabilities supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilities"),
UA_NODEID_NUMERIC(ns[0], 2013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2268)
);
}

/* CurrentTime - ns=0;i=2258 */

static UA_StatusCode function_ua_namespace0_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
UA_STACKARRAY(UA_UtcTime, variablenode_ns_0_i_2258_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2258_variant_DataContents, &UA_TYPES[UA_TYPES_UTCTIME]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2258_variant_DataContents, &UA_TYPES[UA_TYPES_UTCTIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2258),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2258)
);
}

/* MaxNodesPerRead - ns=0;i=11565 */

static UA_StatusCode function_ua_namespace0_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11565_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11565_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11565_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Read request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11565),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11565)
);
}

/* NamespaceArray - ns=0;i=2255 */

static UA_StatusCode function_ua_namespace0_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_Variant_setArray(&attr.value, NULL, (UA_Int32) 0, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceArray");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The list of namespace URIs used by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2255),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_ua_namespace0_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2255)
);
}

/* NamespaceUri - ns=0;i=107 */

static UA_StatusCode function_ua_namespace0_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_107_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 107),
UA_NODEID_NUMERIC(ns[0], 72),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 107)
);
}

/* SecondsTillShutdown - ns=0;i=2992 */

static UA_StatusCode function_ua_namespace0_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2992_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2992_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2992_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecondsTillShutdown");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2992),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SecondsTillShutdown"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2992)
);
}

/* ProductName - ns=0;i=2261 */

static UA_StatusCode function_ua_namespace0_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_2261_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2261_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2261_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2261),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2261)
);
}

/* BuildNumber - ns=0;i=2265 */

static UA_StatusCode function_ua_namespace0_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_2265_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2265),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2265)
);
}

/* InputArguments - ns=0;i=11493 */

static UA_StatusCode function_ua_namespace0_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);

struct {
  UA_String Name;
  UA_NodeId DataType;
  UA_Int32 ValueRank;
  UA_Int32 ArrayDimensionsSize;
  UA_UInt32 *ArrayDimensions;
  UA_LocalizedText Description;
} variablenode_ns_0_i_11493_Argument_0_0_struct;
variablenode_ns_0_i_11493_Argument_0_0_struct.Name = UA_STRING("SubscriptionId");
variablenode_ns_0_i_11493_Argument_0_0_struct.DataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_0_i_11493_Argument_0_0_struct.ValueRank = (UA_Int32) -1;
variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensionsSize = 1;
variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions = (UA_UInt32*) UA_malloc(sizeof(UA_UInt32));
variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions[0]  = (UA_UInt32) 0;
variablenode_ns_0_i_11493_Argument_0_0_struct.Description = UA_LOCALIZEDTEXT("", "");
UA_ExtensionObject *variablenode_ns_0_i_11493_Argument_0_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_11493_Argument_0_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_11493_Argument_0_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 298);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body, 32000);
UA_Byte *posvariablenode_ns_0_i_11493_Argument_0_0 = variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_11493_Argument_0_0 = &variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data[32000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.Name, &UA_TYPES[UA_TYPES_STRING], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.DataType, &UA_TYPES[UA_TYPES_NODEID], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.ValueRank, &UA_TYPES[UA_TYPES_INT32], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions[0], &UA_TYPES[UA_TYPES_UINT32], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
}
size_t variablenode_ns_0_i_11493_Argument_0_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_11493_Argument_0_0-variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data);
variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.length = variablenode_ns_0_i_11493_Argument_0_0_encOffset;
UA_Byte *variablenode_ns_0_i_11493_Argument_0_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_11493_Argument_0_0_encOffset);
memcpy(variablenode_ns_0_i_11493_Argument_0_0_newBody, variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data, variablenode_ns_0_i_11493_Argument_0_0_encOffset);
UA_Byte *variablenode_ns_0_i_11493_Argument_0_0_oldBody = variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data;
variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data = variablenode_ns_0_i_11493_Argument_0_0_newBody;
UA_free(variablenode_ns_0_i_11493_Argument_0_0_oldBody);

UA_ExtensionObject variablenode_ns_0_i_11493_variant_DataContents[1];
variablenode_ns_0_i_11493_variant_DataContents[0] = *variablenode_ns_0_i_11493_Argument_0_0;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11493_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11493),
UA_NODEID_NUMERIC(ns[0], 11492),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);

UA_free(variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions);
UA_ExtensionObject_delete(variablenode_ns_0_i_11493_Argument_0_0);
return retVal;
}

static UA_StatusCode function_ua_namespace0_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11493)
);
}

/* ServiceLevel - ns=0;i=2267 */

static UA_StatusCode function_ua_namespace0_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_STACKARRAY(UA_Byte, variablenode_ns_0_i_2267_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2267_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2267_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceLevel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A value indicating the level of service the server can provide. 255 indicates the best.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2267),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServiceLevel"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2267)
);
}

/* ServerDiagnostics - ns=0;i=2274 */

static UA_StatusCode function_ua_namespace0_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnostics");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reports diagnostics about the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnostics"),
UA_NODEID_NUMERIC(ns[0], 2020),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2274)
);
}

/* MaxNodesPerBrowse - ns=0;i=11570 */

static UA_StatusCode function_ua_namespace0_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11570_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11570_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11570_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Browse request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11570),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11570)
);
}

/* DictionaryFragment - ns=0;i=105 */

static UA_StatusCode function_ua_namespace0_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_STACKARRAY(UA_ByteString, variablenode_ns_0_i_105_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A fragment of a data type dictionary that defines the data type.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 105),
UA_NODEID_NUMERIC(ns[0], 69),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DictionaryFragment"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 105)
);
}

/* EnumStrings - ns=0;i=7611 */

static UA_StatusCode function_ua_namespace0_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_0_i_7611_variant_DataContents[6];
variablenode_ns_0_i_7611_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "None");
variablenode_ns_0_i_7611_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Cold");
variablenode_ns_0_i_7611_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Warm");
variablenode_ns_0_i_7611_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "Hot");
variablenode_ns_0_i_7611_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "Transparent");
variablenode_ns_0_i_7611_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "HotAndMirrored");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_7611_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7611),
UA_NODEID_NUMERIC(ns[0], 851),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7611), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7611)
);
}

/* LocaleIdArray - ns=0;i=2271 */

static UA_StatusCode function_ua_namespace0_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295);
UA_Variant_setArray(&attr.value, NULL, (UA_Int32) 0, &UA_TYPES[UA_TYPES_LOCALEID]);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIdArray");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of locales supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2271),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "LocaleIdArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_ua_namespace0_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2271)
);
}

/* EnumValues - ns=0;i=12169 */

static UA_StatusCode function_ua_namespace0_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594);

struct {
  UA_Int64 Value;
  UA_LocalizedText DisplayName;
  UA_LocalizedText Description;
} variablenode_ns_0_i_12169_EnumValueType_0_0_struct;
variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Value = (UA_Int64) 1;
variablenode_ns_0_i_12169_EnumValueType_0_0_struct.DisplayName = UA_LOCALIZEDTEXT("", "Mandatory");
variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Description = UA_LOCALIZEDTEXT("", "The BrowseName must appear in all instances of the type.");
UA_ExtensionObject *variablenode_ns_0_i_12169_EnumValueType_0_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_12169_EnumValueType_0_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 8251);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body, 32000);
UA_Byte *posvariablenode_ns_0_i_12169_EnumValueType_0_0 = variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_12169_EnumValueType_0_0 = &variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data[32000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Value, &UA_TYPES[UA_TYPES_INT64], &posvariablenode_ns_0_i_12169_EnumValueType_0_0, &endvariablenode_ns_0_i_12169_EnumValueType_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_0_0_struct.DisplayName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_0_0, &endvariablenode_ns_0_i_12169_EnumValueType_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_0_0, &endvariablenode_ns_0_i_12169_EnumValueType_0_0, NULL, NULL);
}
size_t variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_12169_EnumValueType_0_0-variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data);
variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.length = variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset;
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_0_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset);
memcpy(variablenode_ns_0_i_12169_EnumValueType_0_0_newBody, variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data, variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset);
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_0_0_oldBody = variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data;
variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data = variablenode_ns_0_i_12169_EnumValueType_0_0_newBody;
UA_free(variablenode_ns_0_i_12169_EnumValueType_0_0_oldBody);


struct {
  UA_Int64 Value;
  UA_LocalizedText DisplayName;
  UA_LocalizedText Description;
} variablenode_ns_0_i_12169_EnumValueType_1_0_struct;
variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Value = (UA_Int64) 2;
variablenode_ns_0_i_12169_EnumValueType_1_0_struct.DisplayName = UA_LOCALIZEDTEXT("", "Optional");
variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Description = UA_LOCALIZEDTEXT("", "The BrowseName may appear in an instance of the type.");
UA_ExtensionObject *variablenode_ns_0_i_12169_EnumValueType_1_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_12169_EnumValueType_1_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 8251);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body, 32000);
UA_Byte *posvariablenode_ns_0_i_12169_EnumValueType_1_0 = variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_12169_EnumValueType_1_0 = &variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data[32000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Value, &UA_TYPES[UA_TYPES_INT64], &posvariablenode_ns_0_i_12169_EnumValueType_1_0, &endvariablenode_ns_0_i_12169_EnumValueType_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_1_0_struct.DisplayName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_1_0, &endvariablenode_ns_0_i_12169_EnumValueType_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_1_0, &endvariablenode_ns_0_i_12169_EnumValueType_1_0, NULL, NULL);
}
size_t variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_12169_EnumValueType_1_0-variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data);
variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.length = variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset;
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_1_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset);
memcpy(variablenode_ns_0_i_12169_EnumValueType_1_0_newBody, variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data, variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset);
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_1_0_oldBody = variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data;
variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data = variablenode_ns_0_i_12169_EnumValueType_1_0_newBody;
UA_free(variablenode_ns_0_i_12169_EnumValueType_1_0_oldBody);


struct {
  UA_Int64 Value;
  UA_LocalizedText DisplayName;
  UA_LocalizedText Description;
} variablenode_ns_0_i_12169_EnumValueType_2_0_struct;
variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Value = (UA_Int64) 3;
variablenode_ns_0_i_12169_EnumValueType_2_0_struct.DisplayName = UA_LOCALIZEDTEXT("", "Constraint");
variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Description = UA_LOCALIZEDTEXT("", "The modelling rule defines a constraint and the BrowseName is not used in an instance of the type.");
UA_ExtensionObject *variablenode_ns_0_i_12169_EnumValueType_2_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_12169_EnumValueType_2_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 8251);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body, 32000);
UA_Byte *posvariablenode_ns_0_i_12169_EnumValueType_2_0 = variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_12169_EnumValueType_2_0 = &variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data[32000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Value, &UA_TYPES[UA_TYPES_INT64], &posvariablenode_ns_0_i_12169_EnumValueType_2_0, &endvariablenode_ns_0_i_12169_EnumValueType_2_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_2_0_struct.DisplayName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_2_0, &endvariablenode_ns_0_i_12169_EnumValueType_2_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_2_0, &endvariablenode_ns_0_i_12169_EnumValueType_2_0, NULL, NULL);
}
size_t variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_12169_EnumValueType_2_0-variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data);
variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.length = variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset;
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_2_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset);
memcpy(variablenode_ns_0_i_12169_EnumValueType_2_0_newBody, variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data, variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset);
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_2_0_oldBody = variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data;
variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data = variablenode_ns_0_i_12169_EnumValueType_2_0_newBody;
UA_free(variablenode_ns_0_i_12169_EnumValueType_2_0_oldBody);

UA_ExtensionObject variablenode_ns_0_i_12169_variant_DataContents[3];
variablenode_ns_0_i_12169_variant_DataContents[0] = *variablenode_ns_0_i_12169_EnumValueType_0_0;
variablenode_ns_0_i_12169_variant_DataContents[1] = *variablenode_ns_0_i_12169_EnumValueType_1_0;
variablenode_ns_0_i_12169_variant_DataContents[2] = *variablenode_ns_0_i_12169_EnumValueType_2_0;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12169_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 12169),
UA_NODEID_NUMERIC(ns[0], 120),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);

UA_ExtensionObject_delete(variablenode_ns_0_i_12169_EnumValueType_0_0);

UA_ExtensionObject_delete(variablenode_ns_0_i_12169_EnumValueType_1_0);

UA_ExtensionObject_delete(variablenode_ns_0_i_12169_EnumValueType_2_0);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 12169), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12169)
);
}

/* Optional - ns=0;i=80 */

static UA_StatusCode function_ua_namespace0_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Optional");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Specifies that an instance with the attributes and references of the instance declaration may appear when a type is instantiated.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 80),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Optional"),
UA_NODEID_NUMERIC(ns[0], 77),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 104), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 105), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 107), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11567), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11565), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11551), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11569), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11573), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11570), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11571), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 80)
);
}

/* VendorServerInfo - ns=0;i=2011 */

static UA_StatusCode function_ua_namespace0_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Server information provided by the vendor.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2011),
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),
UA_NODEID_NUMERIC(ns[0], 2033),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2011), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2011)
);
}

/* ServerArray - ns=0;i=2254 */

static UA_StatusCode function_ua_namespace0_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_Variant_setArray(&attr.value, NULL, (UA_Int32) 0, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerArray");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The list of server URIs used by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2254),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServerArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_ua_namespace0_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2254)
);
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11572 */

static UA_StatusCode function_ua_namespace0_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11572_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11572_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11572_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single TranslateBrowsePathsToNodeIds request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11572),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11572), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11572)
);
}

/* MaxMonitoredItemsPerCall - ns=0;i=11574 */

static UA_StatusCode function_ua_namespace0_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11574_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11574_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11574_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single MonitoredItem related request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11574),
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11574), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11574)
);
}

/* DataTypeVersion - ns=0;i=106 */

static UA_StatusCode function_ua_namespace0_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_106_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_106_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_106_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The version number for the data type dictionary.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 106),
UA_NODEID_NUMERIC(ns[0], 72),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 106), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 106)
);
}

/* RedundancySupport - ns=0;i=2035 */

static UA_StatusCode function_ua_namespace0_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851);
UA_STACKARRAY(UA_RedundancySupport, variablenode_ns_0_i_2035_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2035_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2035_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Indicates what style of redundancy is supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2035),
UA_NODEID_NUMERIC(ns[0], 2034),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2035), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace0_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2035)
);
}

/* Opc.Ua - ns=0;i=7617 */

static UA_StatusCode function_ua_namespace0_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_0_i_7617_variant_DataContents =  UA_ByteString_new();
*variablenode_ns_0_i_7617_variant_DataContents = UA_BYTESTRING_NULL;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7617_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7617),
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Opc.Ua"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_ByteString_delete(variablenode_ns_0_i_7617_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace0_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7617)
);
}

/* ProductUri - ns=0;i=2262 */

static UA_StatusCode function_ua_namespace0_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_2262_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2262),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductUri"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2262)
);
}

/* MaxQueryContinuationPoints - ns=0;i=2736 */

static UA_StatusCode function_ua_namespace0_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_0_i_2736_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2736_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2736_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxQueryContinuationPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of continuation points for Query operations per session.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2736),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxQueryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2736)
);
}

/* VendorServerInfo - ns=0;i=2295 */

static UA_StatusCode function_ua_namespace0_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Server information provided by the vendor.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2295),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),
UA_NODEID_NUMERIC(ns[0], 2033),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2295)
);
}

/* SoftwareCertificates - ns=0;i=3704 */

static UA_StatusCode function_ua_namespace0_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 344);
UA_Variant_setArray(&attr.value, NULL, (UA_Int32) 0, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareCertificates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The software certificates owned by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3704),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "SoftwareCertificates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_ua_namespace0_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3704)
);
}

/* MinSupportedSampleRate - ns=0;i=2272 */

static UA_StatusCode function_ua_namespace0_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290);
UA_STACKARRAY(UA_Duration, variablenode_ns_0_i_2272_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2272_variant_DataContents, &UA_TYPES[UA_TYPES_DURATION]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2272_variant_DataContents, &UA_TYPES[UA_TYPES_DURATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "MinSupportedSampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The minimum sampling interval supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2272),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MinSupportedSampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2272)
);
}

/* BuildDate - ns=0;i=2266 */

static UA_StatusCode function_ua_namespace0_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
UA_STACKARRAY(UA_UtcTime, variablenode_ns_0_i_2266_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2266_variant_DataContents, &UA_TYPES[UA_TYPES_UTCTIME]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2266_variant_DataContents, &UA_TYPES[UA_TYPES_UTCTIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2266),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2266)
);
}

/* Default Binary - ns=0;i=8251 */

static UA_StatusCode function_ua_namespace0_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 8251),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 8251), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7594), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8251)
);
}

/* ManufacturerName - ns=0;i=2263 */

static UA_StatusCode function_ua_namespace0_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_2263_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2263_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2263_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2263),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2263)
);
}

/* MaxBrowseContinuationPoints - ns=0;i=2735 */

static UA_StatusCode function_ua_namespace0_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_0_i_2735_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2735_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2735_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxBrowseContinuationPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of continuation points for Browse operations per session.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2735),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxBrowseContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2735)
);
}

/* AggregateFunctions - ns=0;i=2997 */

static UA_StatusCode function_ua_namespace0_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AggregateFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A folder for the real time aggregates supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2997),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "AggregateFunctions"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2997)
);
}

/* MaxHistoryContinuationPoints - ns=0;i=2737 */

static UA_StatusCode function_ua_namespace0_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_0_i_2737_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2737_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2737_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxHistoryContinuationPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of continuation points for ReadHistory operations per session.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2737),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxHistoryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2737)
);
}

/* ModellingRules - ns=0;i=2996 */

static UA_StatusCode function_ua_namespace0_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRules");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A folder for the modelling rules supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2996),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ModellingRules"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2996)
);
}

/* ServerProfileArray - ns=0;i=2269 */

static UA_StatusCode function_ua_namespace0_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_Variant_setArray(&attr.value, NULL, (UA_Int32) 0, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerProfileArray");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of profiles supported by the server.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2269),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServerProfileArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_ua_namespace0_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2269)
);
}

/* ServerDiagnosticsSummary - ns=0;i=2275 */

static UA_StatusCode function_ua_namespace0_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859);
UA_STACKARRAY(UA_ServerDiagnosticsSummaryDataType, variablenode_ns_0_i_2275_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2275_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2275_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A summary of server level diagnostics.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummary"),
UA_NODEID_NUMERIC(ns[0], 2150),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2275)
);
}

/* SoftwareVersion - ns=0;i=2264 */

static UA_StatusCode function_ua_namespace0_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_0_i_2264_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2264_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2264_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2264),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2264)
);
}

/* HistoryServerCapabilities - ns=0;i=11192 */

static UA_StatusCode function_ua_namespace0_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryServerCapabilities");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "HistoryServerCapabilities"),
UA_NODEID_NUMERIC(ns[0], 2330),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11192)
);
}

/* OperationLimits - ns=0;i=11704 */

static UA_StatusCode function_ua_namespace0_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Defines the limits supported by the server for different operations.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11704)
);
}

/* UpdateEventCapability - ns=0;i=11283 */

static UA_StatusCode function_ua_namespace0_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11283_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11283_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11283_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateEventCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11283),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "UpdateEventCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11283)
);
}

/* MaxNodesPerBrowse - ns=0;i=11710 */

static UA_StatusCode function_ua_namespace0_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11710_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11710_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11710_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Browse request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11710),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11710)
);
}

/* Argument - ns=0;i=7650 */

static UA_StatusCode function_ua_namespace0_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_7650_variant_DataContents =  UA_String_new();
*variablenode_ns_0_i_7650_variant_DataContents = UA_STRING_ALLOC("Argument");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7650_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7650),
UA_NODEID_NUMERIC(ns[0], 7617),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Argument"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7650_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7650), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[0], 298), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7650)
);
}

/* CumulatedSubscriptionCount - ns=0;i=2286 */

static UA_StatusCode function_ua_namespace0_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2286_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2286_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2286_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2286),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2286)
);
}

/* RejectedRequestsCount - ns=0;i=2288 */

static UA_StatusCode function_ua_namespace0_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2288_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2288_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2288_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2288),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2288)
);
}

/* DeleteEventCapability - ns=0;i=11502 */

static UA_StatusCode function_ua_namespace0_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11502_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11502_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11502_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteEventCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11502),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DeleteEventCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11502)
);
}

/* NamingRule - ns=0;i=113 */

static UA_StatusCode function_ua_namespace0_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120);
UA_Int32 *variablenode_ns_0_i_113_variant_DataContents =  UA_Int32_new();
*variablenode_ns_0_i_113_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_113_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Specified the significances of the BrowseName when a type is instantiated.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 113),
UA_NODEID_NUMERIC(ns[0], 80),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_113_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace0_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 113)
);
}

/* EnabledFlag - ns=0;i=2294 */

static UA_StatusCode function_ua_namespace0_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_2294_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2294_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2294_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnabledFlag");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "If TRUE the diagnostics collection is enabled.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2294),
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EnabledFlag"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2294)
);
}

/* PublishingIntervalCount - ns=0;i=2284 */

static UA_StatusCode function_ua_namespace0_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2284_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2284_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2284_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2284),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2284)
);
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11712 */

static UA_StatusCode function_ua_namespace0_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11712_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11712_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11712_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single TranslateBrowsePathsToNodeIds request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11712),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11712)
);
}

/* DeleteAtTimeCapability - ns=0;i=11200 */

static UA_StatusCode function_ua_namespace0_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11200_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11200_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11200_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteAtTimeCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11200),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DeleteAtTimeCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11200)
);
}

/* MaxNodesPerNodeManagement - ns=0;i=11713 */

static UA_StatusCode function_ua_namespace0_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11713_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11713_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11713_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single AddNodes, AddReferences, DeleteNodes or DeleteReferences request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11713),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11713)
);
}

/* SessionTimeoutCount - ns=0;i=2281 */

static UA_StatusCode function_ua_namespace0_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2281_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2281_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2281_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2281),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2281)
);
}

/* ReplaceEventCapability - ns=0;i=11282 */

static UA_StatusCode function_ua_namespace0_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11282_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11282_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11282_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ReplaceEventCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11282),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ReplaceEventCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11282)
);
}

/* EnumValueType - ns=0;i=7656 */

static UA_StatusCode function_ua_namespace0_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_7656_variant_DataContents =  UA_String_new();
*variablenode_ns_0_i_7656_variant_DataContents = UA_STRING_ALLOC("EnumValueType");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7656_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7656),
UA_NODEID_NUMERIC(ns[0], 7617),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "EnumValueType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7656_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7656), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8251), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7656)
);
}

/* ReplaceDataCapability - ns=0;i=11197 */

static UA_StatusCode function_ua_namespace0_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11197_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11197_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11197_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ReplaceDataCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11197),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ReplaceDataCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11197)
);
}

/* InsertDataCapability - ns=0;i=11196 */

static UA_StatusCode function_ua_namespace0_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11196_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11196_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11196_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InsertDataCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11196),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InsertDataCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11196)
);
}

/* CurrentSessionCount - ns=0;i=2277 */

static UA_StatusCode function_ua_namespace0_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2277_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2277_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2277_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2277),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2277)
);
}

/* MaxReturnDataValues - ns=0;i=11273 */

static UA_StatusCode function_ua_namespace0_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11273_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11273_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11273_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxReturnDataValues");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11273),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxReturnDataValues"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11273)
);
}

/* UpdateDataCapability - ns=0;i=11198 */

static UA_StatusCode function_ua_namespace0_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11198_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11198_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11198_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateDataCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11198),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "UpdateDataCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11198)
);
}

/* MaxNodesPerRegisterNodes - ns=0;i=11711 */

static UA_StatusCode function_ua_namespace0_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11711_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11711_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11711_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single RegisterNodes request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11711),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11711)
);
}

/* AccessHistoryDataCapability - ns=0;i=11193 */

static UA_StatusCode function_ua_namespace0_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11193_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11193_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11193_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AccessHistoryDataCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11193),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AccessHistoryDataCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11193)
);
}

/* MaxNodesPerRead - ns=0;i=11705 */

static UA_StatusCode function_ua_namespace0_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11705_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Read request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11705),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11705)
);
}

/* MaxNodesPerMethodCall - ns=0;i=11709 */

static UA_StatusCode function_ua_namespace0_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11709_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11709_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11709_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Call request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11709),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11709)
);
}

/* InsertAnnotationCapability - ns=0;i=11275 */

static UA_StatusCode function_ua_namespace0_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11275_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11275_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11275_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InsertAnnotationCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11275),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InsertAnnotationCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11275)
);
}

/* MaxMonitoredItemsPerCall - ns=0;i=11714 */

static UA_StatusCode function_ua_namespace0_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11714_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11714_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11714_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single MonitoredItem related request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11714),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11714)
);
}

/* SecurityRejectedRequestsCount - ns=0;i=2287 */

static UA_StatusCode function_ua_namespace0_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2287_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2287_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2287_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2287),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2287)
);
}

/* DeleteRawCapability - ns=0;i=11199 */

static UA_StatusCode function_ua_namespace0_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11199_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11199_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11199_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteRawCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11199),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DeleteRawCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11199)
);
}

/* CurrentSubscriptionCount - ns=0;i=2285 */

static UA_StatusCode function_ua_namespace0_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2285_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2285_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2285_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2285),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2285)
);
}

/* InsertEventCapability - ns=0;i=11281 */

static UA_StatusCode function_ua_namespace0_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11281_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11281_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11281_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InsertEventCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11281),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InsertEventCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11281)
);
}

/* AggregateFunctions - ns=0;i=11201 */

static UA_StatusCode function_ua_namespace0_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AggregateFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11201),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "AggregateFunctions"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11201)
);
}

/* SessionAbortCount - ns=0;i=2282 */

static UA_StatusCode function_ua_namespace0_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2282_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2282_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2282_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2282),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2282)
);
}

/* RejectedSessionCount - ns=0;i=3705 */

static UA_StatusCode function_ua_namespace0_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_3705_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_3705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_3705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3705),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3705)
);
}

/* CumulatedSessionCount - ns=0;i=2278 */

static UA_StatusCode function_ua_namespace0_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2278_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2278_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2278_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2278),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2278)
);
}

/* SecurityRejectedSessionCount - ns=0;i=2279 */

static UA_StatusCode function_ua_namespace0_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2279_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2279_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2279_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2279),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2279)
);
}

/* MaxReturnEventValues - ns=0;i=11274 */

static UA_StatusCode function_ua_namespace0_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11274_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11274_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11274_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxReturnEventValues");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11274),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxReturnEventValues"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11274)
);
}

/* ServerViewCount - ns=0;i=2276 */

static UA_StatusCode function_ua_namespace0_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_2276_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_2276_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2276_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2276),
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2276)
);
}

/* AccessHistoryEventsCapability - ns=0;i=11242 */

static UA_StatusCode function_ua_namespace0_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_0_i_11242_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11242_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11242_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AccessHistoryEventsCapability");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11242),
UA_NODEID_NUMERIC(ns[0], 11192),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AccessHistoryEventsCapability"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11242)
);
}

/* MaxNodesPerWrite - ns=0;i=11707 */

static UA_StatusCode function_ua_namespace0_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11707_variant_DataContents, 1);
UA_init(variablenode_ns_0_i_11707_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11707_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Write request.");
#endif
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11707),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11707)
);
}

UA_StatusCode ua_namespace0(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[1];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
retVal |= function_ua_namespace0_0_begin(server, ns);
retVal |= function_ua_namespace0_1_begin(server, ns);
retVal |= function_ua_namespace0_2_begin(server, ns);
retVal |= function_ua_namespace0_3_begin(server, ns);
retVal |= function_ua_namespace0_4_begin(server, ns);
retVal |= function_ua_namespace0_5_begin(server, ns);
retVal |= function_ua_namespace0_6_begin(server, ns);
retVal |= function_ua_namespace0_7_begin(server, ns);
retVal |= function_ua_namespace0_8_begin(server, ns);
retVal |= function_ua_namespace0_9_begin(server, ns);
retVal |= function_ua_namespace0_10_begin(server, ns);
retVal |= function_ua_namespace0_11_begin(server, ns);
retVal |= function_ua_namespace0_12_begin(server, ns);
retVal |= function_ua_namespace0_13_begin(server, ns);
retVal |= function_ua_namespace0_14_begin(server, ns);
retVal |= function_ua_namespace0_15_begin(server, ns);
retVal |= function_ua_namespace0_16_begin(server, ns);
retVal |= function_ua_namespace0_17_begin(server, ns);
retVal |= function_ua_namespace0_18_begin(server, ns);
retVal |= function_ua_namespace0_19_begin(server, ns);
retVal |= function_ua_namespace0_20_begin(server, ns);
retVal |= function_ua_namespace0_21_begin(server, ns);
retVal |= function_ua_namespace0_22_begin(server, ns);
retVal |= function_ua_namespace0_23_begin(server, ns);
retVal |= function_ua_namespace0_24_begin(server, ns);
retVal |= function_ua_namespace0_25_begin(server, ns);
retVal |= function_ua_namespace0_26_begin(server, ns);
retVal |= function_ua_namespace0_27_begin(server, ns);
retVal |= function_ua_namespace0_28_begin(server, ns);
retVal |= function_ua_namespace0_29_begin(server, ns);
retVal |= function_ua_namespace0_30_begin(server, ns);
retVal |= function_ua_namespace0_31_begin(server, ns);
retVal |= function_ua_namespace0_32_begin(server, ns);
retVal |= function_ua_namespace0_33_begin(server, ns);
retVal |= function_ua_namespace0_34_begin(server, ns);
retVal |= function_ua_namespace0_35_begin(server, ns);
retVal |= function_ua_namespace0_36_begin(server, ns);
retVal |= function_ua_namespace0_37_begin(server, ns);
retVal |= function_ua_namespace0_38_begin(server, ns);
retVal |= function_ua_namespace0_39_begin(server, ns);
retVal |= function_ua_namespace0_40_begin(server, ns);
retVal |= function_ua_namespace0_41_begin(server, ns);
retVal |= function_ua_namespace0_42_begin(server, ns);
retVal |= function_ua_namespace0_43_begin(server, ns);
retVal |= function_ua_namespace0_44_begin(server, ns);
retVal |= function_ua_namespace0_45_begin(server, ns);
retVal |= function_ua_namespace0_46_begin(server, ns);
retVal |= function_ua_namespace0_47_begin(server, ns);
retVal |= function_ua_namespace0_48_begin(server, ns);
retVal |= function_ua_namespace0_49_begin(server, ns);
retVal |= function_ua_namespace0_50_begin(server, ns);
retVal |= function_ua_namespace0_51_begin(server, ns);
retVal |= function_ua_namespace0_52_begin(server, ns);
retVal |= function_ua_namespace0_53_begin(server, ns);
retVal |= function_ua_namespace0_54_begin(server, ns);
retVal |= function_ua_namespace0_55_begin(server, ns);
retVal |= function_ua_namespace0_56_begin(server, ns);
retVal |= function_ua_namespace0_57_begin(server, ns);
retVal |= function_ua_namespace0_58_begin(server, ns);
retVal |= function_ua_namespace0_59_begin(server, ns);
retVal |= function_ua_namespace0_60_begin(server, ns);
retVal |= function_ua_namespace0_61_begin(server, ns);
retVal |= function_ua_namespace0_62_begin(server, ns);
retVal |= function_ua_namespace0_63_begin(server, ns);
retVal |= function_ua_namespace0_64_begin(server, ns);
retVal |= function_ua_namespace0_65_begin(server, ns);
retVal |= function_ua_namespace0_66_begin(server, ns);
retVal |= function_ua_namespace0_67_begin(server, ns);
retVal |= function_ua_namespace0_68_begin(server, ns);
retVal |= function_ua_namespace0_69_begin(server, ns);
retVal |= function_ua_namespace0_70_begin(server, ns);
retVal |= function_ua_namespace0_71_begin(server, ns);
retVal |= function_ua_namespace0_72_begin(server, ns);
retVal |= function_ua_namespace0_73_begin(server, ns);
retVal |= function_ua_namespace0_74_begin(server, ns);
retVal |= function_ua_namespace0_75_begin(server, ns);
retVal |= function_ua_namespace0_76_begin(server, ns);
retVal |= function_ua_namespace0_77_begin(server, ns);
retVal |= function_ua_namespace0_78_begin(server, ns);
retVal |= function_ua_namespace0_79_begin(server, ns);
retVal |= function_ua_namespace0_80_begin(server, ns);
retVal |= function_ua_namespace0_81_begin(server, ns);
retVal |= function_ua_namespace0_82_begin(server, ns);
retVal |= function_ua_namespace0_83_begin(server, ns);
retVal |= function_ua_namespace0_84_begin(server, ns);
retVal |= function_ua_namespace0_85_begin(server, ns);
retVal |= function_ua_namespace0_86_begin(server, ns);
retVal |= function_ua_namespace0_87_begin(server, ns);
retVal |= function_ua_namespace0_88_begin(server, ns);
retVal |= function_ua_namespace0_89_begin(server, ns);
retVal |= function_ua_namespace0_90_begin(server, ns);
retVal |= function_ua_namespace0_91_begin(server, ns);
retVal |= function_ua_namespace0_92_begin(server, ns);
retVal |= function_ua_namespace0_93_begin(server, ns);
retVal |= function_ua_namespace0_94_begin(server, ns);
retVal |= function_ua_namespace0_95_begin(server, ns);
retVal |= function_ua_namespace0_96_begin(server, ns);
retVal |= function_ua_namespace0_97_begin(server, ns);
retVal |= function_ua_namespace0_98_begin(server, ns);
retVal |= function_ua_namespace0_99_begin(server, ns);
retVal |= function_ua_namespace0_100_begin(server, ns);
retVal |= function_ua_namespace0_101_begin(server, ns);
retVal |= function_ua_namespace0_102_begin(server, ns);
retVal |= function_ua_namespace0_103_begin(server, ns);
retVal |= function_ua_namespace0_104_begin(server, ns);
retVal |= function_ua_namespace0_105_begin(server, ns);
retVal |= function_ua_namespace0_106_begin(server, ns);
retVal |= function_ua_namespace0_107_begin(server, ns);
retVal |= function_ua_namespace0_108_begin(server, ns);
retVal |= function_ua_namespace0_109_begin(server, ns);
retVal |= function_ua_namespace0_110_begin(server, ns);
retVal |= function_ua_namespace0_111_begin(server, ns);
retVal |= function_ua_namespace0_112_begin(server, ns);
retVal |= function_ua_namespace0_113_begin(server, ns);
retVal |= function_ua_namespace0_114_begin(server, ns);
retVal |= function_ua_namespace0_115_begin(server, ns);
retVal |= function_ua_namespace0_116_begin(server, ns);
retVal |= function_ua_namespace0_117_begin(server, ns);
retVal |= function_ua_namespace0_118_begin(server, ns);
retVal |= function_ua_namespace0_119_begin(server, ns);
retVal |= function_ua_namespace0_120_begin(server, ns);
retVal |= function_ua_namespace0_121_begin(server, ns);
retVal |= function_ua_namespace0_122_begin(server, ns);
retVal |= function_ua_namespace0_123_begin(server, ns);
retVal |= function_ua_namespace0_124_begin(server, ns);
retVal |= function_ua_namespace0_125_begin(server, ns);
retVal |= function_ua_namespace0_126_begin(server, ns);
retVal |= function_ua_namespace0_127_begin(server, ns);
retVal |= function_ua_namespace0_128_begin(server, ns);
retVal |= function_ua_namespace0_129_begin(server, ns);
retVal |= function_ua_namespace0_130_begin(server, ns);
retVal |= function_ua_namespace0_131_begin(server, ns);
retVal |= function_ua_namespace0_132_begin(server, ns);
retVal |= function_ua_namespace0_133_begin(server, ns);
retVal |= function_ua_namespace0_134_begin(server, ns);
retVal |= function_ua_namespace0_135_begin(server, ns);
retVal |= function_ua_namespace0_136_begin(server, ns);
retVal |= function_ua_namespace0_137_begin(server, ns);
retVal |= function_ua_namespace0_138_begin(server, ns);
retVal |= function_ua_namespace0_139_begin(server, ns);
retVal |= function_ua_namespace0_140_begin(server, ns);
retVal |= function_ua_namespace0_141_begin(server, ns);
retVal |= function_ua_namespace0_142_begin(server, ns);
retVal |= function_ua_namespace0_143_begin(server, ns);
retVal |= function_ua_namespace0_144_begin(server, ns);
retVal |= function_ua_namespace0_145_begin(server, ns);
retVal |= function_ua_namespace0_146_begin(server, ns);
retVal |= function_ua_namespace0_147_begin(server, ns);
retVal |= function_ua_namespace0_148_begin(server, ns);
retVal |= function_ua_namespace0_149_begin(server, ns);
retVal |= function_ua_namespace0_150_begin(server, ns);
retVal |= function_ua_namespace0_151_begin(server, ns);
retVal |= function_ua_namespace0_152_begin(server, ns);
retVal |= function_ua_namespace0_153_begin(server, ns);
retVal |= function_ua_namespace0_154_begin(server, ns);
retVal |= function_ua_namespace0_155_begin(server, ns);
retVal |= function_ua_namespace0_156_begin(server, ns);
retVal |= function_ua_namespace0_157_begin(server, ns);
retVal |= function_ua_namespace0_158_begin(server, ns);
retVal |= function_ua_namespace0_159_begin(server, ns);
retVal |= function_ua_namespace0_160_begin(server, ns);
retVal |= function_ua_namespace0_161_begin(server, ns);
retVal |= function_ua_namespace0_162_begin(server, ns);
retVal |= function_ua_namespace0_163_begin(server, ns);
retVal |= function_ua_namespace0_164_begin(server, ns);
retVal |= function_ua_namespace0_165_begin(server, ns);
retVal |= function_ua_namespace0_166_begin(server, ns);
retVal |= function_ua_namespace0_167_begin(server, ns);
retVal |= function_ua_namespace0_168_begin(server, ns);
retVal |= function_ua_namespace0_169_begin(server, ns);
retVal |= function_ua_namespace0_170_begin(server, ns);
retVal |= function_ua_namespace0_171_begin(server, ns);
retVal |= function_ua_namespace0_172_begin(server, ns);
retVal |= function_ua_namespace0_173_begin(server, ns);
retVal |= function_ua_namespace0_174_begin(server, ns);
retVal |= function_ua_namespace0_175_begin(server, ns);
retVal |= function_ua_namespace0_176_begin(server, ns);
retVal |= function_ua_namespace0_177_begin(server, ns);
retVal |= function_ua_namespace0_178_begin(server, ns);
retVal |= function_ua_namespace0_178_finish(server, ns);
retVal |= function_ua_namespace0_177_finish(server, ns);
retVal |= function_ua_namespace0_176_finish(server, ns);
retVal |= function_ua_namespace0_175_finish(server, ns);
retVal |= function_ua_namespace0_174_finish(server, ns);
retVal |= function_ua_namespace0_173_finish(server, ns);
retVal |= function_ua_namespace0_172_finish(server, ns);
retVal |= function_ua_namespace0_171_finish(server, ns);
retVal |= function_ua_namespace0_170_finish(server, ns);
retVal |= function_ua_namespace0_169_finish(server, ns);
retVal |= function_ua_namespace0_168_finish(server, ns);
retVal |= function_ua_namespace0_167_finish(server, ns);
retVal |= function_ua_namespace0_166_finish(server, ns);
retVal |= function_ua_namespace0_165_finish(server, ns);
retVal |= function_ua_namespace0_164_finish(server, ns);
retVal |= function_ua_namespace0_163_finish(server, ns);
retVal |= function_ua_namespace0_162_finish(server, ns);
retVal |= function_ua_namespace0_161_finish(server, ns);
retVal |= function_ua_namespace0_160_finish(server, ns);
retVal |= function_ua_namespace0_159_finish(server, ns);
retVal |= function_ua_namespace0_158_finish(server, ns);
retVal |= function_ua_namespace0_157_finish(server, ns);
retVal |= function_ua_namespace0_156_finish(server, ns);
retVal |= function_ua_namespace0_155_finish(server, ns);
retVal |= function_ua_namespace0_154_finish(server, ns);
retVal |= function_ua_namespace0_153_finish(server, ns);
retVal |= function_ua_namespace0_152_finish(server, ns);
retVal |= function_ua_namespace0_151_finish(server, ns);
retVal |= function_ua_namespace0_150_finish(server, ns);
retVal |= function_ua_namespace0_149_finish(server, ns);
retVal |= function_ua_namespace0_148_finish(server, ns);
retVal |= function_ua_namespace0_147_finish(server, ns);
retVal |= function_ua_namespace0_146_finish(server, ns);
retVal |= function_ua_namespace0_145_finish(server, ns);
retVal |= function_ua_namespace0_144_finish(server, ns);
retVal |= function_ua_namespace0_143_finish(server, ns);
retVal |= function_ua_namespace0_142_finish(server, ns);
retVal |= function_ua_namespace0_141_finish(server, ns);
retVal |= function_ua_namespace0_140_finish(server, ns);
retVal |= function_ua_namespace0_139_finish(server, ns);
retVal |= function_ua_namespace0_138_finish(server, ns);
retVal |= function_ua_namespace0_137_finish(server, ns);
retVal |= function_ua_namespace0_136_finish(server, ns);
retVal |= function_ua_namespace0_135_finish(server, ns);
retVal |= function_ua_namespace0_134_finish(server, ns);
retVal |= function_ua_namespace0_133_finish(server, ns);
retVal |= function_ua_namespace0_132_finish(server, ns);
retVal |= function_ua_namespace0_131_finish(server, ns);
retVal |= function_ua_namespace0_130_finish(server, ns);
retVal |= function_ua_namespace0_129_finish(server, ns);
retVal |= function_ua_namespace0_128_finish(server, ns);
retVal |= function_ua_namespace0_127_finish(server, ns);
retVal |= function_ua_namespace0_126_finish(server, ns);
retVal |= function_ua_namespace0_125_finish(server, ns);
retVal |= function_ua_namespace0_124_finish(server, ns);
retVal |= function_ua_namespace0_123_finish(server, ns);
retVal |= function_ua_namespace0_122_finish(server, ns);
retVal |= function_ua_namespace0_121_finish(server, ns);
retVal |= function_ua_namespace0_120_finish(server, ns);
retVal |= function_ua_namespace0_119_finish(server, ns);
retVal |= function_ua_namespace0_118_finish(server, ns);
retVal |= function_ua_namespace0_117_finish(server, ns);
retVal |= function_ua_namespace0_116_finish(server, ns);
retVal |= function_ua_namespace0_115_finish(server, ns);
retVal |= function_ua_namespace0_114_finish(server, ns);
retVal |= function_ua_namespace0_113_finish(server, ns);
retVal |= function_ua_namespace0_112_finish(server, ns);
retVal |= function_ua_namespace0_111_finish(server, ns);
retVal |= function_ua_namespace0_110_finish(server, ns);
retVal |= function_ua_namespace0_109_finish(server, ns);
retVal |= function_ua_namespace0_108_finish(server, ns);
retVal |= function_ua_namespace0_107_finish(server, ns);
retVal |= function_ua_namespace0_106_finish(server, ns);
retVal |= function_ua_namespace0_105_finish(server, ns);
retVal |= function_ua_namespace0_104_finish(server, ns);
retVal |= function_ua_namespace0_103_finish(server, ns);
retVal |= function_ua_namespace0_102_finish(server, ns);
retVal |= function_ua_namespace0_101_finish(server, ns);
retVal |= function_ua_namespace0_100_finish(server, ns);
retVal |= function_ua_namespace0_99_finish(server, ns);
retVal |= function_ua_namespace0_98_finish(server, ns);
retVal |= function_ua_namespace0_97_finish(server, ns);
retVal |= function_ua_namespace0_96_finish(server, ns);
retVal |= function_ua_namespace0_95_finish(server, ns);
retVal |= function_ua_namespace0_94_finish(server, ns);
retVal |= function_ua_namespace0_93_finish(server, ns);
retVal |= function_ua_namespace0_92_finish(server, ns);
retVal |= function_ua_namespace0_91_finish(server, ns);
retVal |= function_ua_namespace0_90_finish(server, ns);
retVal |= function_ua_namespace0_89_finish(server, ns);
retVal |= function_ua_namespace0_88_finish(server, ns);
retVal |= function_ua_namespace0_87_finish(server, ns);
retVal |= function_ua_namespace0_86_finish(server, ns);
retVal |= function_ua_namespace0_85_finish(server, ns);
retVal |= function_ua_namespace0_84_finish(server, ns);
retVal |= function_ua_namespace0_83_finish(server, ns);
retVal |= function_ua_namespace0_82_finish(server, ns);
retVal |= function_ua_namespace0_81_finish(server, ns);
retVal |= function_ua_namespace0_80_finish(server, ns);
retVal |= function_ua_namespace0_79_finish(server, ns);
retVal |= function_ua_namespace0_78_finish(server, ns);
retVal |= function_ua_namespace0_77_finish(server, ns);
retVal |= function_ua_namespace0_76_finish(server, ns);
retVal |= function_ua_namespace0_75_finish(server, ns);
retVal |= function_ua_namespace0_74_finish(server, ns);
retVal |= function_ua_namespace0_73_finish(server, ns);
retVal |= function_ua_namespace0_72_finish(server, ns);
retVal |= function_ua_namespace0_71_finish(server, ns);
retVal |= function_ua_namespace0_70_finish(server, ns);
retVal |= function_ua_namespace0_69_finish(server, ns);
retVal |= function_ua_namespace0_68_finish(server, ns);
retVal |= function_ua_namespace0_67_finish(server, ns);
retVal |= function_ua_namespace0_66_finish(server, ns);
retVal |= function_ua_namespace0_65_finish(server, ns);
retVal |= function_ua_namespace0_64_finish(server, ns);
retVal |= function_ua_namespace0_63_finish(server, ns);
retVal |= function_ua_namespace0_62_finish(server, ns);
retVal |= function_ua_namespace0_61_finish(server, ns);
retVal |= function_ua_namespace0_60_finish(server, ns);
retVal |= function_ua_namespace0_59_finish(server, ns);
retVal |= function_ua_namespace0_58_finish(server, ns);
retVal |= function_ua_namespace0_57_finish(server, ns);
retVal |= function_ua_namespace0_56_finish(server, ns);
retVal |= function_ua_namespace0_55_finish(server, ns);
retVal |= function_ua_namespace0_54_finish(server, ns);
retVal |= function_ua_namespace0_53_finish(server, ns);
retVal |= function_ua_namespace0_52_finish(server, ns);
retVal |= function_ua_namespace0_51_finish(server, ns);
retVal |= function_ua_namespace0_50_finish(server, ns);
retVal |= function_ua_namespace0_49_finish(server, ns);
retVal |= function_ua_namespace0_48_finish(server, ns);
retVal |= function_ua_namespace0_47_finish(server, ns);
retVal |= function_ua_namespace0_46_finish(server, ns);
retVal |= function_ua_namespace0_45_finish(server, ns);
retVal |= function_ua_namespace0_44_finish(server, ns);
retVal |= function_ua_namespace0_43_finish(server, ns);
retVal |= function_ua_namespace0_42_finish(server, ns);
retVal |= function_ua_namespace0_41_finish(server, ns);
retVal |= function_ua_namespace0_40_finish(server, ns);
retVal |= function_ua_namespace0_39_finish(server, ns);
retVal |= function_ua_namespace0_38_finish(server, ns);
retVal |= function_ua_namespace0_37_finish(server, ns);
retVal |= function_ua_namespace0_36_finish(server, ns);
retVal |= function_ua_namespace0_35_finish(server, ns);
retVal |= function_ua_namespace0_34_finish(server, ns);
retVal |= function_ua_namespace0_33_finish(server, ns);
retVal |= function_ua_namespace0_32_finish(server, ns);
retVal |= function_ua_namespace0_31_finish(server, ns);
retVal |= function_ua_namespace0_30_finish(server, ns);
retVal |= function_ua_namespace0_29_finish(server, ns);
retVal |= function_ua_namespace0_28_finish(server, ns);
retVal |= function_ua_namespace0_27_finish(server, ns);
retVal |= function_ua_namespace0_26_finish(server, ns);
retVal |= function_ua_namespace0_25_finish(server, ns);
retVal |= function_ua_namespace0_24_finish(server, ns);
retVal |= function_ua_namespace0_23_finish(server, ns);
retVal |= function_ua_namespace0_22_finish(server, ns);
retVal |= function_ua_namespace0_21_finish(server, ns);
retVal |= function_ua_namespace0_20_finish(server, ns);
retVal |= function_ua_namespace0_19_finish(server, ns);
retVal |= function_ua_namespace0_18_finish(server, ns);
retVal |= function_ua_namespace0_17_finish(server, ns);
retVal |= function_ua_namespace0_16_finish(server, ns);
retVal |= function_ua_namespace0_15_finish(server, ns);
retVal |= function_ua_namespace0_14_finish(server, ns);
retVal |= function_ua_namespace0_13_finish(server, ns);
retVal |= function_ua_namespace0_12_finish(server, ns);
retVal |= function_ua_namespace0_11_finish(server, ns);
retVal |= function_ua_namespace0_10_finish(server, ns);
retVal |= function_ua_namespace0_9_finish(server, ns);
retVal |= function_ua_namespace0_8_finish(server, ns);
retVal |= function_ua_namespace0_7_finish(server, ns);
retVal |= function_ua_namespace0_6_finish(server, ns);
retVal |= function_ua_namespace0_5_finish(server, ns);
retVal |= function_ua_namespace0_4_finish(server, ns);
retVal |= function_ua_namespace0_3_finish(server, ns);
retVal |= function_ua_namespace0_2_finish(server, ns);
retVal |= function_ua_namespace0_1_finish(server, ns);
retVal |= function_ua_namespace0_0_finish(server, ns);
return retVal;
}
