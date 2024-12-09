// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarmrob_interfaces/msg/detail/me439_joint_location__rosidl_typesupport_introspection_c.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarmrob_interfaces/msg/detail/me439_joint_location__functions.h"
#include "xarmrob_interfaces/msg/detail/me439_joint_location__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarmrob_interfaces__msg__ME439JointLocation__init(message_memory);
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_fini_function(void * message_memory)
{
  xarmrob_interfaces__msg__ME439JointLocation__fini(message_memory);
}

size_t xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__size_function__ME439JointLocation__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__fetch_function__ME439JointLocation__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__assign_function__ME439JointLocation__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__resize_function__ME439JointLocation__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__size_function__ME439JointLocation__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__fetch_function__ME439JointLocation__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__assign_function__ME439JointLocation__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__resize_function__ME439JointLocation__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__size_function__ME439JointLocation__z(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__fetch_function__ME439JointLocation__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__assign_function__ME439JointLocation__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__resize_function__ME439JointLocation__z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439JointLocation, x),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__size_function__ME439JointLocation__x,  // size() function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__x,  // get_const(index) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__x,  // get(index) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__fetch_function__ME439JointLocation__x,  // fetch(index, &value) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__assign_function__ME439JointLocation__x,  // assign(index, value) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__resize_function__ME439JointLocation__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439JointLocation, y),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__size_function__ME439JointLocation__y,  // size() function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__y,  // get_const(index) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__y,  // get(index) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__fetch_function__ME439JointLocation__y,  // fetch(index, &value) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__assign_function__ME439JointLocation__y,  // assign(index, value) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__resize_function__ME439JointLocation__y  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439JointLocation, z),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__size_function__ME439JointLocation__z,  // size() function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_const_function__ME439JointLocation__z,  // get_const(index) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__get_function__ME439JointLocation__z,  // get(index) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__fetch_function__ME439JointLocation__z,  // fetch(index, &value) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__assign_function__ME439JointLocation__z,  // assign(index, value) function pointer
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__resize_function__ME439JointLocation__z  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_members = {
  "xarmrob_interfaces__msg",  // message namespace
  "ME439JointLocation",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces__msg__ME439JointLocation),
  false,  // has_any_key_member_
  xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_member_array,  // message members
  xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_init_function,  // function to initialize message memory (memory has to be allocated)
  xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_type_support_handle = {
  0,
  &xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439JointLocation__get_type_hash,
  &xarmrob_interfaces__msg__ME439JointLocation__get_type_description,
  &xarmrob_interfaces__msg__ME439JointLocation__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, msg, ME439JointLocation)() {
  if (!xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarmrob_interfaces__msg__ME439JointLocation__rosidl_typesupport_introspection_c__ME439JointLocation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
