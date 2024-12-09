// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_joint_location.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__BUILDER_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/msg/detail/me439_joint_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace msg
{

namespace builder
{

class Init_ME439JointLocation_z
{
public:
  explicit Init_ME439JointLocation_z(::xarmrob_interfaces::msg::ME439JointLocation & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::msg::ME439JointLocation z(::xarmrob_interfaces::msg::ME439JointLocation::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointLocation msg_;
};

class Init_ME439JointLocation_y
{
public:
  explicit Init_ME439JointLocation_y(::xarmrob_interfaces::msg::ME439JointLocation & msg)
  : msg_(msg)
  {}
  Init_ME439JointLocation_z y(::xarmrob_interfaces::msg::ME439JointLocation::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ME439JointLocation_z(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointLocation msg_;
};

class Init_ME439JointLocation_x
{
public:
  Init_ME439JointLocation_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439JointLocation_y x(::xarmrob_interfaces::msg::ME439JointLocation::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ME439JointLocation_y(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::msg::ME439JointLocation>()
{
  return xarmrob_interfaces::msg::builder::Init_ME439JointLocation_x();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__BUILDER_HPP_
