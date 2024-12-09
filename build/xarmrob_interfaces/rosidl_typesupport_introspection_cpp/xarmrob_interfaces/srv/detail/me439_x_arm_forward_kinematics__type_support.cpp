// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xarmrob_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ME439XArmForwardKinematics_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request(_init);
}

void ME439XArmForwardKinematics_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request *>(message_memory);
  typed_message->~ME439XArmForwardKinematics_Request();
}

size_t size_function__ME439XArmForwardKinematics_Request__joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439XArmForwardKinematics_Request__joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439XArmForwardKinematics_Request__joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439XArmForwardKinematics_Request__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439XArmForwardKinematics_Request__joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439XArmForwardKinematics_Request__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439XArmForwardKinematics_Request__joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ME439XArmForwardKinematics_Request__joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ME439XArmForwardKinematics_Request_message_member_array[1] = {
  {
    "joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request, joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439XArmForwardKinematics_Request__joint_angles,  // size() function pointer
    get_const_function__ME439XArmForwardKinematics_Request__joint_angles,  // get_const(index) function pointer
    get_function__ME439XArmForwardKinematics_Request__joint_angles,  // get(index) function pointer
    fetch_function__ME439XArmForwardKinematics_Request__joint_angles,  // fetch(index, &value) function pointer
    assign_function__ME439XArmForwardKinematics_Request__joint_angles,  // assign(index, value) function pointer
    resize_function__ME439XArmForwardKinematics_Request__joint_angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ME439XArmForwardKinematics_Request_message_members = {
  "xarmrob_interfaces::srv",  // message namespace
  "ME439XArmForwardKinematics_Request",  // message name
  1,  // number of fields
  sizeof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request),
  false,  // has_any_key_member_
  ME439XArmForwardKinematics_Request_message_member_array,  // message members
  ME439XArmForwardKinematics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ME439XArmForwardKinematics_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ME439XArmForwardKinematics_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439XArmForwardKinematics_Request_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>()
{
  return &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xarmrob_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ME439XArmForwardKinematics_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response(_init);
}

void ME439XArmForwardKinematics_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response *>(message_memory);
  typed_message->~ME439XArmForwardKinematics_Response();
}

size_t size_function__ME439XArmForwardKinematics_Response__joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439XArmForwardKinematics_Response__joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439XArmForwardKinematics_Response__joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439XArmForwardKinematics_Response__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439XArmForwardKinematics_Response__joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439XArmForwardKinematics_Response__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439XArmForwardKinematics_Response__joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ME439XArmForwardKinematics_Response__joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ME439XArmForwardKinematics_Response__endpoint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439XArmForwardKinematics_Response__endpoint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439XArmForwardKinematics_Response__endpoint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439XArmForwardKinematics_Response__endpoint(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439XArmForwardKinematics_Response__endpoint(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439XArmForwardKinematics_Response__endpoint(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439XArmForwardKinematics_Response__endpoint(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ME439XArmForwardKinematics_Response__endpoint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ME439XArmForwardKinematics_Response_message_member_array[3] = {
  {
    "joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response, joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439XArmForwardKinematics_Response__joint_angles,  // size() function pointer
    get_const_function__ME439XArmForwardKinematics_Response__joint_angles,  // get_const(index) function pointer
    get_function__ME439XArmForwardKinematics_Response__joint_angles,  // get(index) function pointer
    fetch_function__ME439XArmForwardKinematics_Response__joint_angles,  // fetch(index, &value) function pointer
    assign_function__ME439XArmForwardKinematics_Response__joint_angles,  // assign(index, value) function pointer
    resize_function__ME439XArmForwardKinematics_Response__joint_angles  // resize(index) function pointer
  },
  {
    "endpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response, endpoint),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439XArmForwardKinematics_Response__endpoint,  // size() function pointer
    get_const_function__ME439XArmForwardKinematics_Response__endpoint,  // get_const(index) function pointer
    get_function__ME439XArmForwardKinematics_Response__endpoint,  // get(index) function pointer
    fetch_function__ME439XArmForwardKinematics_Response__endpoint,  // fetch(index, &value) function pointer
    assign_function__ME439XArmForwardKinematics_Response__endpoint,  // assign(index, value) function pointer
    resize_function__ME439XArmForwardKinematics_Response__endpoint  // resize(index) function pointer
  },
  {
    "modified",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response, modified),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ME439XArmForwardKinematics_Response_message_members = {
  "xarmrob_interfaces::srv",  // message namespace
  "ME439XArmForwardKinematics_Response",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response),
  false,  // has_any_key_member_
  ME439XArmForwardKinematics_Response_message_member_array,  // message members
  ME439XArmForwardKinematics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ME439XArmForwardKinematics_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ME439XArmForwardKinematics_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439XArmForwardKinematics_Response_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>()
{
  return &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xarmrob_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ME439XArmForwardKinematics_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event(_init);
}

void ME439XArmForwardKinematics_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event *>(message_memory);
  typed_message->~ME439XArmForwardKinematics_Event();
}

size_t size_function__ME439XArmForwardKinematics_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439XArmForwardKinematics_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439XArmForwardKinematics_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439XArmForwardKinematics_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request *>(
    get_const_function__ME439XArmForwardKinematics_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request *>(untyped_value);
  value = item;
}

void assign_function__ME439XArmForwardKinematics_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request *>(
    get_function__ME439XArmForwardKinematics_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request *>(untyped_value);
  item = value;
}

void resize_function__ME439XArmForwardKinematics_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ME439XArmForwardKinematics_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439XArmForwardKinematics_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439XArmForwardKinematics_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439XArmForwardKinematics_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response *>(
    get_const_function__ME439XArmForwardKinematics_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response *>(untyped_value);
  value = item;
}

void assign_function__ME439XArmForwardKinematics_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response *>(
    get_function__ME439XArmForwardKinematics_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response *>(untyped_value);
  item = value;
}

void resize_function__ME439XArmForwardKinematics_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ME439XArmForwardKinematics_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439XArmForwardKinematics_Event__request,  // size() function pointer
    get_const_function__ME439XArmForwardKinematics_Event__request,  // get_const(index) function pointer
    get_function__ME439XArmForwardKinematics_Event__request,  // get(index) function pointer
    fetch_function__ME439XArmForwardKinematics_Event__request,  // fetch(index, &value) function pointer
    assign_function__ME439XArmForwardKinematics_Event__request,  // assign(index, value) function pointer
    resize_function__ME439XArmForwardKinematics_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439XArmForwardKinematics_Event__response,  // size() function pointer
    get_const_function__ME439XArmForwardKinematics_Event__response,  // get_const(index) function pointer
    get_function__ME439XArmForwardKinematics_Event__response,  // get(index) function pointer
    fetch_function__ME439XArmForwardKinematics_Event__response,  // fetch(index, &value) function pointer
    assign_function__ME439XArmForwardKinematics_Event__response,  // assign(index, value) function pointer
    resize_function__ME439XArmForwardKinematics_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ME439XArmForwardKinematics_Event_message_members = {
  "xarmrob_interfaces::srv",  // message namespace
  "ME439XArmForwardKinematics_Event",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event),
  false,  // has_any_key_member_
  ME439XArmForwardKinematics_Event_message_member_array,  // message members
  ME439XArmForwardKinematics_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ME439XArmForwardKinematics_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ME439XArmForwardKinematics_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439XArmForwardKinematics_Event_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>()
{
  return &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace xarmrob_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ME439XArmForwardKinematics_service_members = {
  "xarmrob_interfaces::srv",  // service namespace
  "ME439XArmForwardKinematics",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ME439XArmForwardKinematics_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439XArmForwardKinematics_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<xarmrob_interfaces::srv::ME439XArmForwardKinematics>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<xarmrob_interfaces::srv::ME439XArmForwardKinematics>,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::xarmrob_interfaces::srv::rosidl_typesupport_introspection_cpp::ME439XArmForwardKinematics_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, srv, ME439XArmForwardKinematics)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<xarmrob_interfaces::srv::ME439XArmForwardKinematics>();
}

#ifdef __cplusplus
}
#endif
