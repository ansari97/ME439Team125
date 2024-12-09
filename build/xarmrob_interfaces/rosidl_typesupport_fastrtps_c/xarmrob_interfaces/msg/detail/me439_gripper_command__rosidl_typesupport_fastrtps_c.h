// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice
#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_xarmrob_interfaces__msg__ME439GripperCommand(
  const xarmrob_interfaces__msg__ME439GripperCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_deserialize_xarmrob_interfaces__msg__ME439GripperCommand(
  eprosima::fastcdr::Cdr &,
  xarmrob_interfaces__msg__ME439GripperCommand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_xarmrob_interfaces__msg__ME439GripperCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_xarmrob_interfaces__msg__ME439GripperCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_key_xarmrob_interfaces__msg__ME439GripperCommand(
  const xarmrob_interfaces__msg__ME439GripperCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_key_xarmrob_interfaces__msg__ME439GripperCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_key_xarmrob_interfaces__msg__ME439GripperCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, msg, ME439GripperCommand)();

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
