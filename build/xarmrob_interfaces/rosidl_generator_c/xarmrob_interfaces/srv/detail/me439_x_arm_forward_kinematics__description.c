// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x53, 0x37, 0x27, 0x6b, 0xf2, 0x9b, 0x24,
      0x78, 0x91, 0xdf, 0x19, 0xcc, 0xe3, 0x1a, 0x53,
      0x30, 0x74, 0xca, 0x10, 0xe9, 0x08, 0x1e, 0x86,
      0xf2, 0xae, 0xc1, 0x44, 0xff, 0x6a, 0xa6, 0x32,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xc8, 0xb0, 0x25, 0xba, 0xef, 0x18, 0xb2,
      0x35, 0x8b, 0xda, 0xf7, 0x04, 0x87, 0x74, 0x94,
      0xee, 0x80, 0x4e, 0x11, 0x03, 0x5b, 0x89, 0xe3,
      0x37, 0x8d, 0x1b, 0x6d, 0x99, 0xc3, 0xc4, 0xe1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xcb, 0x0c, 0x6f, 0x0a, 0xf4, 0x1c, 0xfe,
      0x74, 0x10, 0x59, 0x13, 0x8f, 0x12, 0xd7, 0x3d,
      0x39, 0x9b, 0x2d, 0x37, 0x6b, 0x90, 0x2b, 0x1c,
      0x18, 0x4c, 0x00, 0x37, 0x43, 0x08, 0x59, 0xfc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xe8, 0x8c, 0x75, 0x09, 0x0b, 0x7f, 0xbe,
      0xc5, 0x3c, 0xe2, 0xff, 0xe1, 0x62, 0x0e, 0x47,
      0x44, 0x8a, 0x93, 0xa5, 0x7a, 0xe4, 0xeb, 0xc5,
      0xa8, 0x47, 0xdf, 0xad, 0x36, 0xab, 0x2e, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char xarmrob_interfaces__srv__ME439XArmForwardKinematics__TYPE_NAME[] = "xarmrob_interfaces/srv/ME439XArmForwardKinematics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__TYPE_NAME[] = "xarmrob_interfaces/srv/ME439XArmForwardKinematics_Event";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME[] = "xarmrob_interfaces/srv/ME439XArmForwardKinematics_Request";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME[] = "xarmrob_interfaces/srv/ME439XArmForwardKinematics_Response";

// Define type names, field names, and default values
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELD_NAME__request_message[] = "request_message";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELD_NAME__response_message[] = "response_message";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELDS[] = {
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription xarmrob_interfaces__srv__ME439XArmForwardKinematics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics__TYPE_NAME, 49, 49},
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics__FIELDS, 3, 3},
    },
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__FIELD_NAME__joint_angles[] = "joint_angles";

static rosidl_runtime_c__type_description__Field xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__FIELDS[] = {
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__FIELD_NAME__joint_angles, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME, 57, 57},
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELD_NAME__joint_angles[] = "joint_angles";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELD_NAME__endpoint[] = "endpoint";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELD_NAME__modified[] = "modified";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__DEFAULT_VALUE__modified[] = "False";

static rosidl_runtime_c__type_description__Field xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELDS[] = {
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELD_NAME__joint_angles, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELD_NAME__endpoint, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELD_NAME__modified, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__DEFAULT_VALUE__modified, 5, 5},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME, 58, 58},
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELD_NAME__info[] = "info";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELD_NAME__request[] = "request";
static char xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELDS[] = {
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__TYPE_NAME, 55, 55},
      {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__FIELDS, 3, 3},
    },
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is a Service Request that holds data to describe the desired joint angles (radians)\n"
  "float32[] joint_angles\n"
  "\n"
  "---\n"
  "# This is a Service Response that holds data to describe the nearest viable joint state (radians), predicted endpoint, and whether it was modified from the request. \n"
  "\n"
  "float32[] joint_angles\n"
  "float32[] endpoint\n"
  "bool modified 0\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics__TYPE_NAME, 49, 49},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 345, 345},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__TYPE_NAME, 58, 58},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_individual_type_description_source(NULL);
    sources[4] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_individual_type_description_source(NULL);
    sources[5] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_individual_type_description_source(NULL);
    sources[4] = *xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
