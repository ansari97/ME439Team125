// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_gripper_command.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__BUILDER_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace msg
{

namespace builder
{

class Init_ME439GripperCommand_enable
{
public:
  explicit Init_ME439GripperCommand_enable(::xarmrob_interfaces::msg::ME439GripperCommand & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::msg::ME439GripperCommand enable(::xarmrob_interfaces::msg::ME439GripperCommand::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439GripperCommand msg_;
};

class Init_ME439GripperCommand_command
{
public:
  explicit Init_ME439GripperCommand_command(::xarmrob_interfaces::msg::ME439GripperCommand & msg)
  : msg_(msg)
  {}
  Init_ME439GripperCommand_enable command(::xarmrob_interfaces::msg::ME439GripperCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ME439GripperCommand_enable(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439GripperCommand msg_;
};

class Init_ME439GripperCommand_header
{
public:
  Init_ME439GripperCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439GripperCommand_command header(::xarmrob_interfaces::msg::ME439GripperCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ME439GripperCommand_command(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439GripperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::msg::ME439GripperCommand>()
{
  return xarmrob_interfaces::msg::builder::Init_ME439GripperCommand_header();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__BUILDER_HPP_
