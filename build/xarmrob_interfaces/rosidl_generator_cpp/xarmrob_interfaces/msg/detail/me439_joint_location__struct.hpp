// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_joint_location.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__STRUCT_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xarmrob_interfaces__msg__ME439JointLocation __attribute__((deprecated))
#else
# define DEPRECATED__xarmrob_interfaces__msg__ME439JointLocation __declspec(deprecated)
#endif

namespace xarmrob_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ME439JointLocation_
{
  using Type = ME439JointLocation_<ContainerAllocator>;

  explicit ME439JointLocation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ME439JointLocation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;
  using _y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_type y;
  using _z_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xarmrob_interfaces__msg__ME439JointLocation
    std::shared_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xarmrob_interfaces__msg__ME439JointLocation
    std::shared_ptr<xarmrob_interfaces::msg::ME439JointLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ME439JointLocation_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ME439JointLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ME439JointLocation_

// alias to use template instance with default allocator
using ME439JointLocation =
  xarmrob_interfaces::msg::ME439JointLocation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__STRUCT_HPP_
