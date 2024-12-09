// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace xarmrob_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
cdr_serialize(
  const xarmrob_interfaces::msg::ME439PointXYZ & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces::msg::ME439PointXYZ & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
get_serialized_size(
  const xarmrob_interfaces::msg::ME439PointXYZ & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
max_serialized_size_ME439PointXYZ(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
cdr_serialize_key(
  const xarmrob_interfaces::msg::ME439PointXYZ & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
get_serialized_size_key(
  const xarmrob_interfaces::msg::ME439PointXYZ & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
max_serialized_size_key_ME439PointXYZ(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarmrob_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarmrob_interfaces, msg, ME439PointXYZ)();

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
