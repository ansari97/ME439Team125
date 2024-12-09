// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_gripper_command.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__STRUCT_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xarmrob_interfaces__msg__ME439GripperCommand __attribute__((deprecated))
#else
# define DEPRECATED__xarmrob_interfaces__msg__ME439GripperCommand __declspec(deprecated)
#endif

namespace xarmrob_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ME439GripperCommand_
{
  using Type = ME439GripperCommand_<ContainerAllocator>;

  explicit ME439GripperCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->enable = false;
    }
  }

  explicit ME439GripperCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->enable = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_type =
    int16_t;
  _command_type command;
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__command(
    const int16_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xarmrob_interfaces__msg__ME439GripperCommand
    std::shared_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xarmrob_interfaces__msg__ME439GripperCommand
    std::shared_ptr<xarmrob_interfaces::msg::ME439GripperCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ME439GripperCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const ME439GripperCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ME439GripperCommand_

// alias to use template instance with default allocator
using ME439GripperCommand =
  xarmrob_interfaces::msg::ME439GripperCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__STRUCT_HPP_
