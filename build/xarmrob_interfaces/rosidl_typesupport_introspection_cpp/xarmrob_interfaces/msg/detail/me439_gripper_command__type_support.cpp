// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__functions.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xarmrob_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ME439GripperCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xarmrob_interfaces::msg::ME439GripperCommand(_init);
}

void ME439GripperCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xarmrob_interfaces::msg::ME439GripperCommand *>(message_memory);
  typed_message->~ME439GripperCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ME439GripperCommand_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439GripperCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439GripperCommand, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439GripperCommand, enable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ME439GripperCommand_message_members = {
  "xarmrob_interfaces::msg",  // message namespace
  "ME439GripperCommand",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces::msg::ME439GripperCommand),
  false,  // has_any_key_member_
  ME439GripperCommand_message_member_array,  // message members
  ME439GripperCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ME439GripperCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ME439GripperCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439GripperCommand_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_hash,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_description,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarmrob_interfaces::msg::ME439GripperCommand>()
{
  return &::xarmrob_interfaces::msg::rosidl_typesupport_introspection_cpp::ME439GripperCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, msg, ME439GripperCommand)() {
  return &::xarmrob_interfaces::msg::rosidl_typesupport_introspection_cpp::ME439GripperCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
