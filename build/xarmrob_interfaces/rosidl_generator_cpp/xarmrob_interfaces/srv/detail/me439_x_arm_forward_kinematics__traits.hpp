// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/srv/me439_x_arm_forward_kinematics.hpp"


#ifndef XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__TRAITS_HPP_
#define XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xarmrob_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ME439XArmForwardKinematics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_angles
  {
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []";
    } else {
      out << "joint_angles: [";
      size_t pending_items = msg.joint_angles.size();
      for (auto item : msg.joint_angles) {
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
  const ME439XArmForwardKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []\n";
    } else {
      out << "joint_angles:\n";
      for (auto item : msg.joint_angles) {
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

inline std::string to_yaml(const ME439XArmForwardKinematics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request & msg)
{
  return xarmrob_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>()
{
  return "xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request";
}

template<>
inline const char * name<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>()
{
  return "xarmrob_interfaces/srv/ME439XArmForwardKinematics_Request";
}

template<>
struct has_fixed_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xarmrob_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ME439XArmForwardKinematics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_angles
  {
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []";
    } else {
      out << "joint_angles: [";
      size_t pending_items = msg.joint_angles.size();
      for (auto item : msg.joint_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: endpoint
  {
    if (msg.endpoint.size() == 0) {
      out << "endpoint: []";
    } else {
      out << "endpoint: [";
      size_t pending_items = msg.endpoint.size();
      for (auto item : msg.endpoint) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: modified
  {
    out << "modified: ";
    rosidl_generator_traits::value_to_yaml(msg.modified, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439XArmForwardKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []\n";
    } else {
      out << "joint_angles:\n";
      for (auto item : msg.joint_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.endpoint.size() == 0) {
      out << "endpoint: []\n";
    } else {
      out << "endpoint:\n";
      for (auto item : msg.endpoint) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modified: ";
    rosidl_generator_traits::value_to_yaml(msg.modified, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439XArmForwardKinematics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response & msg)
{
  return xarmrob_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>()
{
  return "xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response";
}

template<>
inline const char * name<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>()
{
  return "xarmrob_interfaces/srv/ME439XArmForwardKinematics_Response";
}

template<>
struct has_fixed_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace xarmrob_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ME439XArmForwardKinematics_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const ME439XArmForwardKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439XArmForwardKinematics_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event & msg)
{
  return xarmrob_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>()
{
  return "xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event";
}

template<>
inline const char * name<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>()
{
  return "xarmrob_interfaces/srv/ME439XArmForwardKinematics_Event";
}

template<>
struct has_fixed_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>::value && has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>::value> {};

template<>
struct is_message<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xarmrob_interfaces::srv::ME439XArmForwardKinematics>()
{
  return "xarmrob_interfaces::srv::ME439XArmForwardKinematics";
}

template<>
inline const char * name<xarmrob_interfaces::srv::ME439XArmForwardKinematics>()
{
  return "xarmrob_interfaces/srv/ME439XArmForwardKinematics";
}

template<>
struct has_fixed_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics>
  : std::integral_constant<
    bool,
    has_fixed_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>::value &&
    has_fixed_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>::value
  >
{
};

template<>
struct has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics>
  : std::integral_constant<
    bool,
    has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>::value &&
    has_bounded_size<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>::value
  >
{
};

template<>
struct is_service<xarmrob_interfaces::srv::ME439XArmForwardKinematics>
  : std::true_type
{
};

template<>
struct is_service_request<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__TRAITS_HPP_
