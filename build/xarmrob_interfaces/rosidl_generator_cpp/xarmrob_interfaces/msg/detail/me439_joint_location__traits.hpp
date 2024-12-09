// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_joint_location.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__TRAITS_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarmrob_interfaces/msg/detail/me439_joint_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xarmrob_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ME439JointLocation & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z
  {
    if (msg.z.size() == 0) {
      out << "z: []";
    } else {
      out << "z: [";
      size_t pending_items = msg.z.size();
      for (auto item : msg.z) {
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
  const ME439JointLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
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

inline std::string to_yaml(const ME439JointLocation & msg, bool use_flow_style = false)
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
  const xarmrob_interfaces::msg::ME439JointLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::msg::ME439JointLocation & msg)
{
  return xarmrob_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::msg::ME439JointLocation>()
{
  return "xarmrob_interfaces::msg::ME439JointLocation";
}

template<>
inline const char * name<xarmrob_interfaces::msg::ME439JointLocation>()
{
  return "xarmrob_interfaces/msg/ME439JointLocation";
}

template<>
struct has_fixed_size<xarmrob_interfaces::msg::ME439JointLocation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarmrob_interfaces::msg::ME439JointLocation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xarmrob_interfaces::msg::ME439JointLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__TRAITS_HPP_
