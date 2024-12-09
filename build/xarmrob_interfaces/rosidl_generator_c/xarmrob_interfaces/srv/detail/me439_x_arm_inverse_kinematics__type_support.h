// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from xarmrob_interfaces:srv/ME439XArmInverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/srv/me439_x_arm_inverse_kinematics.h"


#ifndef XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_INVERSE_KINEMATICS__TYPE_SUPPORT_H_
#define XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_INVERSE_KINEMATICS__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "xarmrob_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  xarmrob_interfaces,
  srv,
  ME439XArmInverseKinematics_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  xarmrob_interfaces,
  srv,
  ME439XArmInverseKinematics_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  xarmrob_interfaces,
  srv,
  ME439XArmInverseKinematics_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  xarmrob_interfaces,
  srv,
  ME439XArmInverseKinematics
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  xarmrob_interfaces,
  srv,
  ME439XArmInverseKinematics
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  xarmrob_interfaces,
  srv,
  ME439XArmInverseKinematics
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_INVERSE_KINEMATICS__TYPE_SUPPORT_H_
