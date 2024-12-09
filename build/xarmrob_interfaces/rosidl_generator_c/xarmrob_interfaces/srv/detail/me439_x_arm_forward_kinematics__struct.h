// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/srv/me439_x_arm_forward_kinematics.h"


#ifndef XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__STRUCT_H_
#define XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ME439XArmForwardKinematics in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request
{
  rosidl_runtime_c__float__Sequence joint_angles;
} xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request;

// Struct for a sequence of xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request.
typedef struct xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
// Member 'endpoint'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ME439XArmForwardKinematics in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response
{
  rosidl_runtime_c__float__Sequence joint_angles;
  rosidl_runtime_c__float__Sequence endpoint;
  bool modified;
} xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response;

// Struct for a sequence of xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response.
typedef struct xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__request__MAX_SIZE = 1
};
// response
enum
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ME439XArmForwardKinematics in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event
{
  service_msgs__msg__ServiceEventInfo info;
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence request;
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence response;
} xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event;

// Struct for a sequence of xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event.
typedef struct xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence
{
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__SRV__DETAIL__ME439_X_ARM_FORWARD_KINEMATICS__STRUCT_H_
