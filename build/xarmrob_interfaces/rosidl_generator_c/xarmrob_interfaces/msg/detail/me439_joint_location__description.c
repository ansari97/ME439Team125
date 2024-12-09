// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

#include "xarmrob_interfaces/msg/detail/me439_joint_location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__msg__ME439JointLocation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xf8, 0x19, 0x77, 0x67, 0x95, 0x8d, 0x10,
      0x20, 0xfa, 0x48, 0xb1, 0x8d, 0x33, 0x33, 0x67,
      0x22, 0x71, 0xc0, 0xba, 0x1d, 0xb3, 0x14, 0x87,
      0x0c, 0xd4, 0x7f, 0x35, 0xb4, 0xaf, 0xb0, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char xarmrob_interfaces__msg__ME439JointLocation__TYPE_NAME[] = "xarmrob_interfaces/msg/ME439JointLocation";

// Define type names, field names, and default values
static char xarmrob_interfaces__msg__ME439JointLocation__FIELD_NAME__x[] = "x";
static char xarmrob_interfaces__msg__ME439JointLocation__FIELD_NAME__y[] = "y";
static char xarmrob_interfaces__msg__ME439JointLocation__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field xarmrob_interfaces__msg__ME439JointLocation__FIELDS[] = {
  {
    {xarmrob_interfaces__msg__ME439JointLocation__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__msg__ME439JointLocation__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarmrob_interfaces__msg__ME439JointLocation__FIELD_NAME__z, 1, 1},
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
xarmrob_interfaces__msg__ME439JointLocation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarmrob_interfaces__msg__ME439JointLocation__TYPE_NAME, 41, 41},
      {xarmrob_interfaces__msg__ME439JointLocation__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] x\n"
  "float32[] y\n"
  "float32[] z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__msg__ME439JointLocation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarmrob_interfaces__msg__ME439JointLocation__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__msg__ME439JointLocation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarmrob_interfaces__msg__ME439JointLocation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
