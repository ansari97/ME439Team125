// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_point_xyz.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__TRAITS_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarmrob_interfaces/msg/detail/me439_point_xyz__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xarmrob_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ME439PointXYZ & msg,
  std::ostream & out)
{
  out << "{";
  // member: xyz
  {
    if (msg.xyz.size() == 0) {
      out << "xyz: []";
    } else {
      out << "xyz: [";
      size_t pending_items = msg.xyz.size();
      for (auto item : msg.xyz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439PointXYZ & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xyz.size() == 0) {
      out << "xyz: []\n";
    } else {
      out << "xyz:\n";
      for (auto item : msg.xyz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439PointXYZ & msg, bool use_flow_style = false)
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
  const xarmrob_interfaces::msg::ME439PointXYZ & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::msg::ME439PointXYZ & msg)
{
  return xarmrob_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::msg::ME439PointXYZ>()
{
  return "xarmrob_interfaces::msg::ME439PointXYZ";
}

template<>
inline const char * name<xarmrob_interfaces::msg::ME439PointXYZ>()
{
  return "xarmrob_interfaces/msg/ME439PointXYZ";
}

template<>
struct has_fixed_size<xarmrob_interfaces::msg::ME439PointXYZ>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xarmrob_interfaces::msg::ME439PointXYZ>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xarmrob_interfaces::msg::ME439PointXYZ>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__TRAITS_HPP_
