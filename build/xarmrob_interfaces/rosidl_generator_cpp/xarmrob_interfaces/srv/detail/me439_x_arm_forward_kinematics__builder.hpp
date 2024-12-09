// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/srv/me439_x_arm_forward_kinematics.hpp"


#ifndef XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__BUILDER_HPP_
#define XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace srv
{

namespace builder
{

class Init_ME439XArmForwardKinematics_Request_joint_angles
{
public:
  Init_ME439XArmForwardKinematics_Request_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request joint_angles(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Request>()
{
  return xarmrob_interfaces::srv::builder::Init_ME439XArmForwardKinematics_Request_joint_angles();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace srv
{

namespace builder
{

class Init_ME439XArmForwardKinematics_Response_modified
{
public:
  explicit Init_ME439XArmForwardKinematics_Response_modified(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response modified(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response::_modified_type arg)
  {
    msg_.modified = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response msg_;
};

class Init_ME439XArmForwardKinematics_Response_endpoint
{
public:
  explicit Init_ME439XArmForwardKinematics_Response_endpoint(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_ME439XArmForwardKinematics_Response_modified endpoint(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_ME439XArmForwardKinematics_Response_modified(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response msg_;
};

class Init_ME439XArmForwardKinematics_Response_joint_angles
{
public:
  Init_ME439XArmForwardKinematics_Response_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439XArmForwardKinematics_Response_endpoint joint_angles(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_ME439XArmForwardKinematics_Response_endpoint(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Response>()
{
  return xarmrob_interfaces::srv::builder::Init_ME439XArmForwardKinematics_Response_joint_angles();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace srv
{

namespace builder
{

class Init_ME439XArmForwardKinematics_Event_response
{
public:
  explicit Init_ME439XArmForwardKinematics_Event_response(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event response(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event msg_;
};

class Init_ME439XArmForwardKinematics_Event_request
{
public:
  explicit Init_ME439XArmForwardKinematics_Event_request(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event & msg)
  : msg_(msg)
  {}
  Init_ME439XArmForwardKinematics_Event_response request(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ME439XArmForwardKinematics_Event_response(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event msg_;
};

class Init_ME439XArmForwardKinematics_Event_info
{
public:
  Init_ME439XArmForwardKinematics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439XArmForwardKinematics_Event_request info(::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ME439XArmForwardKinematics_Event_request(msg_);
  }

private:
  ::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::srv::ME439XArmForwardKinematics_Event>()
{
  return xarmrob_interfaces::srv::builder::Init_ME439XArmForwardKinematics_Event_info();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__BUILDER_HPP_
