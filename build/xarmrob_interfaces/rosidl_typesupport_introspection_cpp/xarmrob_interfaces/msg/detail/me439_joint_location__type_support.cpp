// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xarmrob_interfaces/msg/detail/me439_joint_location__functions.h"
#include "xarmrob_interfaces/msg/detail/me439_joint_location__struct.hpp"
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

void ME439JointLocation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xarmrob_interfaces::msg::ME439JointLocation(_init);
}

void ME439JointLocation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xarmrob_interfaces::msg::ME439JointLocation *>(message_memory);
  typed_message->~ME439JointLocation();
}

size_t size_function__ME439JointLocation__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439JointLocation__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439JointLocation__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439JointLocation__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439JointLocation__x(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439JointLocation__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439JointLocation__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ME439JointLocation__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ME439JointLocation__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439JointLocation__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439JointLocation__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439JointLocation__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439JointLocation__y(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439JointLocation__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439JointLocation__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ME439JointLocation__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ME439JointLocation__z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ME439JointLocation__z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439JointLocation__z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439JointLocation__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439JointLocation__z(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439JointLocation__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439JointLocation__z(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ME439JointLocation__z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ME439JointLocation_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439JointLocation, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439JointLocation__x,  // size() function pointer
    get_const_function__ME439JointLocation__x,  // get_const(index) function pointer
    get_function__ME439JointLocation__x,  // get(index) function pointer
    fetch_function__ME439JointLocation__x,  // fetch(index, &value) function pointer
    assign_function__ME439JointLocation__x,  // assign(index, value) function pointer
    resize_function__ME439JointLocation__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439JointLocation, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439JointLocation__y,  // size() function pointer
    get_const_function__ME439JointLocation__y,  // get_const(index) function pointer
    get_function__ME439JointLocation__y,  // get(index) function pointer
    fetch_function__ME439JointLocation__y,  // fetch(index, &value) function pointer
    assign_function__ME439JointLocation__y,  // assign(index, value) function pointer
    resize_function__ME439JointLocation__y  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439JointLocation, z),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439JointLocation__z,  // size() function pointer
    get_const_function__ME439JointLocation__z,  // get_const(index) function pointer
    get_function__ME439JointLocation__z,  // get(index) function pointer
    fetch_function__ME439JointLocation__z,  // fetch(index, &value) function pointer
    assign_function__ME439JointLocation__z,  // assign(index, value) function pointer
    resize_function__ME439JointLocation__z  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ME439JointLocation_message_members = {
  "xarmrob_interfaces::msg",  // message namespace
  "ME439JointLocation",  // message name
  3,  // number of fields
  sizeof(xarmrob_interfaces::msg::ME439JointLocation),
  false,  // has_any_key_member_
  ME439JointLocation_message_member_array,  // message members
  ME439JointLocation_init_function,  // function to initialize message memory (memory has to be allocated)
  ME439JointLocation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ME439JointLocation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439JointLocation_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439JointLocation__get_type_hash,
  &xarmrob_interfaces__msg__ME439JointLocation__get_type_description,
  &xarmrob_interfaces__msg__ME439JointLocation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarmrob_interfaces::msg::ME439JointLocation>()
{
  return &::xarmrob_interfaces::msg::rosidl_typesupport_introspection_cpp::ME439JointLocation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, msg, ME439JointLocation)() {
  return &::xarmrob_interfaces::msg::rosidl_typesupport_introspection_cpp::ME439JointLocation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
