// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarmrob_interfaces:action/ME439MoveToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/action/me439_move_to_target.hpp"


#ifndef XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__TRAITS_HPP_
#define XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarmrob_interfaces/action/detail/me439_move_to_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_Goal & msg,
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
  const ME439MoveToTarget_Goal & msg,
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

inline std::string to_yaml(const ME439MoveToTarget_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_Goal & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_Goal>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_Goal";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_Goal>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_Goal";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_Result & msg,
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
  const ME439MoveToTarget_Result & msg,
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

inline std::string to_yaml(const ME439MoveToTarget_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_Result & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_Result>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_Result";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_Result>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_Result";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_Feedback & msg,
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
  const ME439MoveToTarget_Feedback & msg,
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

inline std::string to_yaml(const ME439MoveToTarget_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_Feedback & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_Feedback";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_Feedback";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "xarmrob_interfaces/action/detail/me439_move_to_target__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439MoveToTarget_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439MoveToTarget_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_SendGoal_Request";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_Goal>::value> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_Goal>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439MoveToTarget_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439MoveToTarget_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_SendGoal_Response";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_SendGoal_Event & msg,
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
  const ME439MoveToTarget_SendGoal_Event & msg,
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

inline std::string to_yaml(const ME439MoveToTarget_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_SendGoal_Event";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>::value && has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_SendGoal";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_SendGoal";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>::value &&
    has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>::value &&
    has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439MoveToTarget_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439MoveToTarget_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_GetResult_Request";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439MoveToTarget_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439MoveToTarget_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_GetResult_Response";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_Result>::value> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_Result>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_GetResult_Event & msg,
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
  const ME439MoveToTarget_GetResult_Event & msg,
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

inline std::string to_yaml(const ME439MoveToTarget_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_GetResult_Event";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>::value && has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_GetResult>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_GetResult";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_GetResult>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_GetResult";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>::value &&
    has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>::value &&
    has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>::value
  >
{
};

template<>
struct is_service<xarmrob_interfaces::action::ME439MoveToTarget_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__traits.hpp"

namespace xarmrob_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ME439MoveToTarget_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ME439MoveToTarget_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ME439MoveToTarget_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace xarmrob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xarmrob_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarmrob_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarmrob_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage & msg)
{
  return xarmrob_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage>()
{
  return "xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage";
}

template<>
inline const char * name<xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage>()
{
  return "xarmrob_interfaces/action/ME439MoveToTarget_FeedbackMessage";
}

template<>
struct has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>::value> {};

template<>
struct has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>::value> {};

template<>
struct is_message<xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<xarmrob_interfaces::action::ME439MoveToTarget>
  : std::true_type
{
};

template<>
struct is_action_goal<xarmrob_interfaces::action::ME439MoveToTarget_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<xarmrob_interfaces::action::ME439MoveToTarget_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<xarmrob_interfaces::action::ME439MoveToTarget_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__TRAITS_HPP_
