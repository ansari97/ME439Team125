// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_gripper_command.h"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__STRUCT_H_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ME439GripperCommand in the package xarmrob_interfaces.
/**
  * This is a message that holds data to describe the commands to a set of bus servo joints.
  *
  * Each joint is uniquely identified by its name.
  * The header specifies the time at which the commands were recorded. All the commands
  * in one message have to be recorded at the same time.
  *
  * The command of each joint (revolute or prismatic) is defined by:
  * the command of the joint (int, 0 to 1000),
  *
  * The message has a boolean to determine whether it is enabled or not. 
  *
  * Match the order of the names and the commands to uniquely associate the joint
  * names with the correct commands.
 */
typedef struct xarmrob_interfaces__msg__ME439GripperCommand
{
  std_msgs__msg__Header header;
  int16_t command;
  bool enable;
} xarmrob_interfaces__msg__ME439GripperCommand;

// Struct for a sequence of xarmrob_interfaces__msg__ME439GripperCommand.
typedef struct xarmrob_interfaces__msg__ME439GripperCommand__Sequence
{
  xarmrob_interfaces__msg__ME439GripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__msg__ME439GripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__STRUCT_H_
