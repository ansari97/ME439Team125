// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from finalproj125_interfaces:action/ReturnDouble.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalproj125_interfaces/action/return_double.h"


#ifndef FINALPROJ125_INTERFACES__ACTION__DETAIL__RETURN_DOUBLE__STRUCT_H_
#define FINALPROJ125_INTERFACES__ACTION__DETAIL__RETURN_DOUBLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_Goal
{
  int32_t order;
} finalproj125_interfaces__action__ReturnDouble_Goal;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_Goal.
typedef struct finalproj125_interfaces__action__ReturnDouble_Goal__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_Result
{
  int32_t double_result;
} finalproj125_interfaces__action__ReturnDouble_Result;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_Result.
typedef struct finalproj125_interfaces__action__ReturnDouble_Result__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_Feedback
{
  int32_t feedback;
} finalproj125_interfaces__action__ReturnDouble_Feedback;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_Feedback.
typedef struct finalproj125_interfaces__action__ReturnDouble_Feedback__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "finalproj125_interfaces/action/detail/return_double__struct.h"

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  finalproj125_interfaces__action__ReturnDouble_Goal goal;
} finalproj125_interfaces__action__ReturnDouble_SendGoal_Request;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_SendGoal_Request.
typedef struct finalproj125_interfaces__action__ReturnDouble_SendGoal_Request__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} finalproj125_interfaces__action__ReturnDouble_SendGoal_Response;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_SendGoal_Response.
typedef struct finalproj125_interfaces__action__ReturnDouble_SendGoal_Response__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Request__Sequence request;
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Response__Sequence response;
} finalproj125_interfaces__action__ReturnDouble_SendGoal_Event;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_SendGoal_Event.
typedef struct finalproj125_interfaces__action__ReturnDouble_SendGoal_Event__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} finalproj125_interfaces__action__ReturnDouble_GetResult_Request;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_GetResult_Request.
typedef struct finalproj125_interfaces__action__ReturnDouble_GetResult_Request__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "finalproj125_interfaces/action/detail/return_double__struct.h"

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_GetResult_Response
{
  int8_t status;
  finalproj125_interfaces__action__ReturnDouble_Result result;
} finalproj125_interfaces__action__ReturnDouble_GetResult_Response;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_GetResult_Response.
typedef struct finalproj125_interfaces__action__ReturnDouble_GetResult_Response__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  finalproj125_interfaces__action__ReturnDouble_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  finalproj125_interfaces__action__ReturnDouble_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  finalproj125_interfaces__action__ReturnDouble_GetResult_Request__Sequence request;
  finalproj125_interfaces__action__ReturnDouble_GetResult_Response__Sequence response;
} finalproj125_interfaces__action__ReturnDouble_GetResult_Event;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_GetResult_Event.
typedef struct finalproj125_interfaces__action__ReturnDouble_GetResult_Event__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "finalproj125_interfaces/action/detail/return_double__struct.h"

/// Struct defined in action/ReturnDouble in the package finalproj125_interfaces.
typedef struct finalproj125_interfaces__action__ReturnDouble_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  finalproj125_interfaces__action__ReturnDouble_Feedback feedback;
} finalproj125_interfaces__action__ReturnDouble_FeedbackMessage;

// Struct for a sequence of finalproj125_interfaces__action__ReturnDouble_FeedbackMessage.
typedef struct finalproj125_interfaces__action__ReturnDouble_FeedbackMessage__Sequence
{
  finalproj125_interfaces__action__ReturnDouble_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalproj125_interfaces__action__ReturnDouble_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FINALPROJ125_INTERFACES__ACTION__DETAIL__RETURN_DOUBLE__STRUCT_H_
