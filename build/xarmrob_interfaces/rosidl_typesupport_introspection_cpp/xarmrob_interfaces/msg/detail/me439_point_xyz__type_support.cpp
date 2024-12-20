// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__functions.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__struct.hpp"
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

void ME439PointXYZ_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xarmrob_interfaces::msg::ME439PointXYZ(_init);
}

void ME439PointXYZ_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xarmrob_interfaces::msg::ME439PointXYZ *>(message_memory);
  typed_message->~ME439PointXYZ();
}

size_t size_function__ME439PointXYZ__xyz(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ME439PointXYZ__xyz(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ME439PointXYZ__xyz(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ME439PointXYZ__xyz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ME439PointXYZ__xyz(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ME439PointXYZ__xyz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ME439PointXYZ__xyz(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ME439PointXYZ_message_member_array[1] = {
  {
    "xyz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xarmrob_interfaces::msg::ME439PointXYZ, xyz),  // bytes offset in struct
    nullptr,  // default value
    size_function__ME439PointXYZ__xyz,  // size() function pointer
    get_const_function__ME439PointXYZ__xyz,  // get_const(index) function pointer
    get_function__ME439PointXYZ__xyz,  // get(index) function pointer
    fetch_function__ME439PointXYZ__xyz,  // fetch(index, &value) function pointer
    assign_function__ME439PointXYZ__xyz,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ME439PointXYZ_message_members = {
  "xarmrob_interfaces::msg",  // message namespace
  "ME439PointXYZ",  // message name
  1,  // number of fields
  sizeof(xarmrob_interfaces::msg::ME439PointXYZ),
  false,  // has_any_key_member_
  ME439PointXYZ_message_member_array,  // message members
  ME439PointXYZ_init_function,  // function to initialize message memory (memory has to be allocated)
  ME439PointXYZ_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ME439PointXYZ_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ME439PointXYZ_message_members,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_hash,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_description,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xarmrob_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarmrob_interfaces::msg::ME439PointXYZ>()
{
  return &::xarmrob_interfaces::msg::rosidl_typesupport_introspection_cpp::ME439PointXYZ_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarmrob_interfaces, msg, ME439PointXYZ)() {
  return &::xarmrob_interfaces::msg::rosidl_typesupport_introspection_cpp::ME439PointXYZ_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
