// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_joint_location.h"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__STRUCT_H_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ME439JointLocation in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__msg__ME439JointLocation
{
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
  rosidl_runtime_c__float__Sequence z;
} xarmrob_interfaces__msg__ME439JointLocation;

// Struct for a sequence of xarmrob_interfaces__msg__ME439JointLocation.
typedef struct xarmrob_interfaces__msg__ME439JointLocation__Sequence
{
  xarmrob_interfaces__msg__ME439JointLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__msg__ME439JointLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__STRUCT_H_
