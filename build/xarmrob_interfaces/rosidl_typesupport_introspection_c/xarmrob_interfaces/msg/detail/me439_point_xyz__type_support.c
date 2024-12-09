// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__rosidl_typesupport_introspection_c.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__functions.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarmrob_interfaces__msg__ME439PointXYZ__init(message_memory);
}

void xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_fini_function(void * message_memory)
{
  xarmrob_interfaces__msg__ME439PointXYZ__fini(message_memory);
}

size_t xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__size_function__ME439PointXYZ__xyz(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__get_const_function__ME439PointXYZ__xyz(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__get_function__ME439PointXYZ__xyz(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__fetch_function__ME439PointXYZ__xyz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__get_const_function__ME439PointXYZ__xyz(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__assign_function__ME439PointXYZ__xyz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__get_function__ME439PointXYZ__xyz(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_member_array[1] = {
  {
    "xyz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439PointXYZ, xyz),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__size_function__ME439PointXYZ__xyz,  // size() function pointer
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__get_const_function__ME439PointXYZ__xyz,  // get_const(index) function pointer
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__get_function__ME439PointXYZ__xyz,  // get(index) function pointer
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__fetch_function__ME439PointXYZ__xyz,  // fetch(index, &value) function pointer
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__assign_function__ME439PointXYZ__xyz,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_members = {
  "xarmrob_interfaces__msg",  // message namespace
  "ME439PointXYZ",  // message name
  1,  // number of fields
  sizeof(xarmrob_interfaces__msg__ME439PointXYZ),
  false,  // has_any_key_member_
  xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_member_array,  // message members
  xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_init_function,  // function to initialize message memory (memory has to be allocated)
  xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_type_support_handle = {
  0,
  &xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_hash,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_description,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, msg, ME439PointXYZ)() {
  if (!xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarmrob_interfaces__msg__ME439PointXYZ__rosidl_typesupport_introspection_c__ME439PointXYZ_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
