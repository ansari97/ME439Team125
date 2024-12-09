// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_gripper_command.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__TRAITS_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace xarmrob_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ME439GripperCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439GripperCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::msg::ME439GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::msg::ME439GripperCommand & msg)
{
  return xarmrob_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::msg::ME439GripperCommand>()
{
  return "xarmrob_interfaces::msg::ME439GripperCommand";
}

template<>
inline const char * name<xarmrob_interfaces::msg::ME439GripperCommand>()
{
  return "xarmrob_interfaces/msg/ME439GripperCommand";
}

template<>
struct has_fixed_size<xarmrob_interfaces::msg::ME439GripperCommand>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<xarmrob_interfaces::msg::ME439GripperCommand>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<xarmrob_interfaces::msg::ME439GripperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__TRAITS_HPP_
