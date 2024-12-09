// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

#include "xarmrob_interfaces/msg/detail/me439_point_xyz__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__msg__ME439PointXYZ__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x45, 0x41, 0xa2, 0xf2, 0x2d, 0x86, 0x70,
      0xbf, 0x90, 0x78, 0xef, 0x1c, 0x38, 0x0f, 0x59,
      0xe6, 0x2b, 0x8c, 0xcb, 0x2a, 0x94, 0xff, 0xa5,
      0x21, 0xd1, 0xa8, 0xcc, 0x77, 0xdb, 0xad, 0x3d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char xarmrob_interfaces__msg__ME439PointXYZ__TYPE_NAME[] = "xarmrob_interfaces/msg/ME439PointXYZ";

// Define type names, field names, and default values
static char xarmrob_interfaces__msg__ME439PointXYZ__FIELD_NAME__xyz[] = "xyz";

static rosidl_runtime_c__type_description__Field xarmrob_interfaces__msg__ME439PointXYZ__FIELDS[] = {
  {
    {xarmrob_interfaces__msg__ME439PointXYZ__FIELD_NAME__xyz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__msg__ME439PointXYZ__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarmrob_interfaces__msg__ME439PointXYZ__TYPE_NAME, 36, 36},
      {xarmrob_interfaces__msg__ME439PointXYZ__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[3] xyz";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__msg__ME439PointXYZ__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarmrob_interfaces__msg__ME439PointXYZ__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__msg__ME439PointXYZ__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarmrob_interfaces__msg__ME439PointXYZ__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
