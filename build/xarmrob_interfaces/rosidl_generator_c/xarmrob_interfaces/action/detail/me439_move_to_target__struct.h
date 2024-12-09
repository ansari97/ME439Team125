// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarmrob_interfaces:action/ME439MoveToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/action/me439_move_to_target.h"


#ifndef XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__STRUCT_H_
#define XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_Goal
{
  float xyz[3];
} xarmrob_interfaces__action__ME439MoveToTarget_Goal;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_Goal.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_Result
{
  float xyz[3];
} xarmrob_interfaces__action__ME439MoveToTarget_Result;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_Result.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_Feedback
{
  float xyz[3];
} xarmrob_interfaces__action__ME439MoveToTarget_Feedback;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_Feedback.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "xarmrob_interfaces/action/detail/me439_move_to_target__struct.h"

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  xarmrob_interfaces__action__ME439MoveToTarget_Goal goal;
} xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence request;
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence response;
} xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__struct.h"

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response
{
  int8_t status;
  xarmrob_interfaces__action__ME439MoveToTarget_Result result;
} xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence request;
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence response;
} xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__struct.h"

/// Struct defined in action/ME439MoveToTarget in the package xarmrob_interfaces.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback feedback;
} xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage;

// Struct for a sequence of xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage.
typedef struct xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence
{
  xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__STRUCT_H_
