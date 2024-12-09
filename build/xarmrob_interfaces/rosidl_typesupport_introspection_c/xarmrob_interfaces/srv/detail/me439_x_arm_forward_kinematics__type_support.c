// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.h"


// Include directives for member types
// Member `joint_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__init(message_memory);
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_fini_function(void * message_memory)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(message_memory);
}

size_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Request__joint_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Request__joint_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Request__joint_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Request__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Request__joint_angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Request__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Request__joint_angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Request__joint_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_member_array[1] = {
  {
    "joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request, joint_angles),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Request__joint_angles,  // size() function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Request__joint_angles,  // get_const(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Request__joint_angles,  // get(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Request__joint_angles,  // fetch(index, &value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Request__joint_angles,  // assign(index, value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Request__joint_angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_members = {
  "xarmrob_interfaces__srv",  // message namespace
  "ME439XArmForwardKinematics_Request",  // message name
  1,  // number of fields
  sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request),
  false,  // has_any_key_member_
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_member_array,  // message members
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_type_support_handle = {
  0,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)() {
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.h"


// Include directives for member types
// Member `joint_angles`
// Member `endpoint`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__init(message_memory);
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_fini_function(void * message_memory)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(message_memory);
}

size_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Response__joint_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Response__joint_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Response__joint_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Response__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Response__joint_angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Response__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Response__joint_angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Response__joint_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Response__endpoint(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Response__endpoint(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Response__endpoint(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Response__endpoint(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Response__endpoint(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Response__endpoint(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Response__endpoint(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Response__endpoint(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_member_array[3] = {
  {
    "joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response, joint_angles),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Response__joint_angles,  // size() function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Response__joint_angles,  // get_const(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Response__joint_angles,  // get(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Response__joint_angles,  // fetch(index, &value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Response__joint_angles,  // assign(index, value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Response__joint_angles  // resize(index) function pointer
  },
  {
    "endpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response, endpoint),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Response__endpoint,  // size() function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Response__endpoint,  // get_const(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Response__endpoint,  // get(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Response__endpoint,  // fetch(index, &value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Response__endpoint,  // assign(index, value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Response__endpoint  // resize(index) function pointer
  },
  {
    "modified",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response, modified),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_members = {
  "xarmrob_interfaces__srv",  // message namespace
  "ME439XArmForwardKinematics_Response",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response),
  false,  // has_any_key_member_
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_member_array,  // message members
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle = {
  0,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)() {
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "xarmrob_interfaces/srv/me439_x_arm_forward_kinematics.h"
// Member `request`
// Member `response`
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__init(message_memory);
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_fini_function(void * message_memory)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(message_memory);
}

size_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Event__request(
  const void * untyped_member)
{
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * member =
    (const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Event__request(
  const void * untyped_member, size_t index)
{
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * member =
    (const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Event__request(
  void * untyped_member, size_t index)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * member =
    (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * item =
    ((const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Event__request(untyped_member, index));
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * value =
    (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * item =
    ((xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Event__request(untyped_member, index));
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * value =
    (const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Event__request(
  void * untyped_member, size_t size)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * member =
    (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence *)(untyped_member);
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__fini(member);
  return xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__init(member, size);
}

size_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Event__response(
  const void * untyped_member)
{
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * member =
    (const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Event__response(
  const void * untyped_member, size_t index)
{
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * member =
    (const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Event__response(
  void * untyped_member, size_t index)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * member =
    (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * item =
    ((const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Event__response(untyped_member, index));
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * value =
    (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)(untyped_value);
  *value = *item;
}

void xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * item =
    ((xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Event__response(untyped_member, index));
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * value =
    (const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)(untyped_value);
  *item = *value;
}

bool xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Event__response(
  void * untyped_member, size_t size)
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * member =
    (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence *)(untyped_member);
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__fini(member);
  return xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event, request),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Event__request,  // size() function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Event__request,  // get_const(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Event__request,  // get(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Event__request,  // fetch(index, &value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Event__request,  // assign(index, value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event, response),  // bytes offset in struct
    NULL,  // default value
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__size_function__ME439XArmForwardKinematics_Event__response,  // size() function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__ME439XArmForwardKinematics_Event__response,  // get_const(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__get_function__ME439XArmForwardKinematics_Event__response,  // get(index) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__ME439XArmForwardKinematics_Event__response,  // fetch(index, &value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__assign_function__ME439XArmForwardKinematics_Event__response,  // assign(index, value) function pointer
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__resize_function__ME439XArmForwardKinematics_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_members = {
  "xarmrob_interfaces__srv",  // message namespace
  "ME439XArmForwardKinematics_Event",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event),
  false,  // has_any_key_member_
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_member_array,  // message members
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_type_support_handle = {
  0,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)() {
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)();
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_members = {
  "xarmrob_interfaces__srv",  // service namespace
  "ME439XArmForwardKinematics",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_type_support_handle,
  NULL,  // response message
  // xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle
  NULL  // event_message
  // xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle
};


static rosidl_service_type_support_t xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_type_support_handle = {
  0,
  &xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_members,
  get_service_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Request_message_type_support_handle,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Response_message_type_support_handle,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    srv,
    ME439XArmForwardKinematics
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    srv,
    ME439XArmForwardKinematics
  ),
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics)(void) {
  if (!xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)()->data;
  }

  return &xarmrob_interfaces__srv__detail__me439_x_arm_forward_kinematics__rosidl_typesupport_introspection_c__ME439XArmForwardKinematics_service_type_support_handle;
}
