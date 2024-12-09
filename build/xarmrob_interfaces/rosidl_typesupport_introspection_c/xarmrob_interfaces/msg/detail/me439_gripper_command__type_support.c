// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__rosidl_typesupport_introspection_c.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__functions.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarmrob_interfaces__msg__ME439GripperCommand__init(message_memory);
}

void xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_fini_function(void * message_memory)
{
  xarmrob_interfaces__msg__ME439GripperCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439GripperCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439GripperCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces__msg__ME439GripperCommand, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_members = {
  "xarmrob_interfaces__msg",  // message namespace
  "ME439GripperCommand",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces__msg__ME439GripperCommand),
  false,  // has_any_key_member_
  xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_member_array,  // message members
  xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_type_support_handle = {
  0,
  &xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_hash,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_description,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, msg, ME439GripperCommand)() {
  xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_type_support_handle.typesupport_identifier) {
    xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarmrob_interfaces__msg__ME439GripperCommand__rosidl_typesupport_introspection_c__ME439GripperCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
