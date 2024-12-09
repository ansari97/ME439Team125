// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:msg/ME439JointCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_joint_command.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_COMMAND__BUILDER_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/msg/detail/me439_joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace msg
{

namespace builder
{

class Init_ME439JointCommand_enable
{
public:
  explicit Init_ME439JointCommand_enable(::xarmrob_interfaces::msg::ME439JointCommand & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::msg::ME439JointCommand enable(::xarmrob_interfaces::msg::ME439JointCommand::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointCommand msg_;
};

class Init_ME439JointCommand_command
{
public:
  explicit Init_ME439JointCommand_command(::xarmrob_interfaces::msg::ME439JointCommand & msg)
  : msg_(msg)
  {}
  Init_ME439JointCommand_enable command(::xarmrob_interfaces::msg::ME439JointCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ME439JointCommand_enable(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointCommand msg_;
};

class Init_ME439JointCommand_name
{
public:
  explicit Init_ME439JointCommand_name(::xarmrob_interfaces::msg::ME439JointCommand & msg)
  : msg_(msg)
  {}
  Init_ME439JointCommand_command name(::xarmrob_interfaces::msg::ME439JointCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ME439JointCommand_command(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointCommand msg_;
};

class Init_ME439JointCommand_header
{
public:
  Init_ME439JointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439JointCommand_name header(::xarmrob_interfaces::msg::ME439JointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ME439JointCommand_name(msg_);
  }

private:
  ::xarmrob_interfaces::msg::ME439JointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::msg::ME439JointCommand>()
{
  return xarmrob_interfaces::msg::builder::Init_ME439JointCommand_header();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_COMMAND__BUILDER_HPP_
