// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_point_xyz.hpp"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__STRUCT_HPP_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xarmrob_interfaces__msg__ME439PointXYZ __attribute__((deprecated))
#else
# define DEPRECATED__xarmrob_interfaces__msg__ME439PointXYZ __declspec(deprecated)
#endif

namespace xarmrob_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ME439PointXYZ_
{
  using Type = ME439PointXYZ_<ContainerAllocator>;

  explicit ME439PointXYZ_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->xyz.begin(), this->xyz.end(), 0.0f);
    }
  }

  explicit ME439PointXYZ_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xyz(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->xyz.begin(), this->xyz.end(), 0.0f);
    }
  }

  // field types and members
  using _xyz_type =
    std::array<float, 3>;
  _xyz_type xyz;

  // setters for named parameter idiom
  Type & set__xyz(
    const std::array<float, 3> & _arg)
  {
    this->xyz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator> *;
  using ConstRawPtr =
    const xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xarmrob_interfaces__msg__ME439PointXYZ
    std::shared_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xarmrob_interfaces__msg__ME439PointXYZ
    std::shared_ptr<xarmrob_interfaces::msg::ME439PointXYZ_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ME439PointXYZ_ & other) const
  {
    if (this->xyz != other.xyz) {
      return false;
    }
    return true;
  }
  bool operator!=(const ME439PointXYZ_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ME439PointXYZ_

// alias to use template instance with default allocator
using ME439PointXYZ =
  xarmrob_interfaces::msg::ME439PointXYZ_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_POINT_XYZ__STRUCT_HPP_
