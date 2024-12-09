// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_point_xyz.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__BUILDER_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/msg/detail/me439_point_xyz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace msg
{

namespace builder
{

class Init_ME439PointXYZ_xyz
{
public:
  Init_ME439PointXYZ_xyz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::msg::ME439PointXYZ xyz(::xarmrob_interfaces::msg::ME439PointXYZ::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439PointXYZ msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::msg::ME439PointXYZ>()
{
  return xarmrob_interfaces::msg::builder::Init_ME439PointXYZ_xyz();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__BUILDER_HPP_
