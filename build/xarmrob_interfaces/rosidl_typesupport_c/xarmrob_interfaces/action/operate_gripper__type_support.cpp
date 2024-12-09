// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:action/OperateGripper.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
#include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
#include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_Goal_type_support_ids_t;

static const _OperateGripper_Goal_type_support_ids_t _OperateGripper_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_Goal_type_support_symbol_names_t _OperateGripper_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_Goal)),
  }
};

typedef struct _OperateGripper_Goal_type_support_data_t
{
  void * data[2];
} _OperateGripper_Goal_type_support_data_t;

static _OperateGripper_Goal_type_support_data_t _OperateGripper_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_Goal_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_Goal__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_Goal__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_Goal)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_Result_type_support_ids_t;

static const _OperateGripper_Result_type_support_ids_t _OperateGripper_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_Result_type_support_symbol_names_t _OperateGripper_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_Result)),
  }
};

typedef struct _OperateGripper_Result_type_support_data_t
{
  void * data[2];
} _OperateGripper_Result_type_support_data_t;

static _OperateGripper_Result_type_support_data_t _OperateGripper_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_Result_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_Result_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_Result_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_Result__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_Result__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_Result)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_Feedback_type_support_ids_t;

static const _OperateGripper_Feedback_type_support_ids_t _OperateGripper_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_Feedback_type_support_symbol_names_t _OperateGripper_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_Feedback)),
  }
};

typedef struct _OperateGripper_Feedback_type_support_data_t
{
  void * data[2];
} _OperateGripper_Feedback_type_support_data_t;

static _OperateGripper_Feedback_type_support_data_t _OperateGripper_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_Feedback_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_Feedback__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_Feedback__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_Feedback)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_SendGoal_Request_type_support_ids_t;

static const _OperateGripper_SendGoal_Request_type_support_ids_t _OperateGripper_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_SendGoal_Request_type_support_symbol_names_t _OperateGripper_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Request)),
  }
};

typedef struct _OperateGripper_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _OperateGripper_SendGoal_Request_type_support_data_t;

static _OperateGripper_SendGoal_Request_type_support_data_t _OperateGripper_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_SendGoal_Request_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Request__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Request__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Request)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_SendGoal_Response_type_support_ids_t;

static const _OperateGripper_SendGoal_Response_type_support_ids_t _OperateGripper_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_SendGoal_Response_type_support_symbol_names_t _OperateGripper_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Response)),
  }
};

typedef struct _OperateGripper_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _OperateGripper_SendGoal_Response_type_support_data_t;

static _OperateGripper_SendGoal_Response_type_support_data_t _OperateGripper_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_SendGoal_Response_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Response__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Response__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Response)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_SendGoal_Event_type_support_ids_t;

static const _OperateGripper_SendGoal_Event_type_support_ids_t _OperateGripper_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_SendGoal_Event_type_support_symbol_names_t _OperateGripper_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Event)),
  }
};

typedef struct _OperateGripper_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _OperateGripper_SendGoal_Event_type_support_data_t;

static _OperateGripper_SendGoal_Event_type_support_data_t _OperateGripper_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_SendGoal_Event_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Event__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Event__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_SendGoal_Event)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _OperateGripper_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_SendGoal_type_support_ids_t;

static const _OperateGripper_SendGoal_type_support_ids_t _OperateGripper_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_SendGoal_type_support_symbol_names_t _OperateGripper_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_SendGoal)),
  }
};

typedef struct _OperateGripper_SendGoal_type_support_data_t
{
  void * data[2];
} _OperateGripper_SendGoal_type_support_data_t;

static _OperateGripper_SendGoal_type_support_data_t _OperateGripper_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_SendGoal_service_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OperateGripper_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &OperateGripper_SendGoal_Request_message_type_support_handle,
  &OperateGripper_SendGoal_Response_message_type_support_handle,
  &OperateGripper_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    action,
    OperateGripper_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    action,
    OperateGripper_SendGoal
  ),
  &xarmrob_interfaces__action__OperateGripper_SendGoal__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_SendGoal__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_SendGoal)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_GetResult_Request_type_support_ids_t;

static const _OperateGripper_GetResult_Request_type_support_ids_t _OperateGripper_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_GetResult_Request_type_support_symbol_names_t _OperateGripper_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_GetResult_Request)),
  }
};

typedef struct _OperateGripper_GetResult_Request_type_support_data_t
{
  void * data[2];
} _OperateGripper_GetResult_Request_type_support_data_t;

static _OperateGripper_GetResult_Request_type_support_data_t _OperateGripper_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_GetResult_Request_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Request__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Request__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_GetResult_Request)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_GetResult_Response_type_support_ids_t;

static const _OperateGripper_GetResult_Response_type_support_ids_t _OperateGripper_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_GetResult_Response_type_support_symbol_names_t _OperateGripper_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_GetResult_Response)),
  }
};

typedef struct _OperateGripper_GetResult_Response_type_support_data_t
{
  void * data[2];
} _OperateGripper_GetResult_Response_type_support_data_t;

static _OperateGripper_GetResult_Response_type_support_data_t _OperateGripper_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_GetResult_Response_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Response__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Response__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_GetResult_Response)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_GetResult_Event_type_support_ids_t;

static const _OperateGripper_GetResult_Event_type_support_ids_t _OperateGripper_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_GetResult_Event_type_support_symbol_names_t _OperateGripper_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_GetResult_Event)),
  }
};

typedef struct _OperateGripper_GetResult_Event_type_support_data_t
{
  void * data[2];
} _OperateGripper_GetResult_Event_type_support_data_t;

static _OperateGripper_GetResult_Event_type_support_data_t _OperateGripper_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_GetResult_Event_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Event__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Event__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_GetResult_Event)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _OperateGripper_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_GetResult_type_support_ids_t;

static const _OperateGripper_GetResult_type_support_ids_t _OperateGripper_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_GetResult_type_support_symbol_names_t _OperateGripper_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_GetResult)),
  }
};

typedef struct _OperateGripper_GetResult_type_support_data_t
{
  void * data[2];
} _OperateGripper_GetResult_type_support_data_t;

static _OperateGripper_GetResult_type_support_data_t _OperateGripper_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_GetResult_service_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OperateGripper_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &OperateGripper_GetResult_Request_message_type_support_handle,
  &OperateGripper_GetResult_Response_message_type_support_handle,
  &OperateGripper_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    action,
    OperateGripper_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    action,
    OperateGripper_GetResult
  ),
  &xarmrob_interfaces__action__OperateGripper_GetResult__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_GetResult__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_GetResult)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__struct.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OperateGripper_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OperateGripper_FeedbackMessage_type_support_ids_t;

static const _OperateGripper_FeedbackMessage_type_support_ids_t _OperateGripper_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OperateGripper_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OperateGripper_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OperateGripper_FeedbackMessage_type_support_symbol_names_t _OperateGripper_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, action, OperateGripper_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, action, OperateGripper_FeedbackMessage)),
  }
};

typedef struct _OperateGripper_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _OperateGripper_FeedbackMessage_type_support_data_t;

static _OperateGripper_FeedbackMessage_type_support_data_t _OperateGripper_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OperateGripper_FeedbackMessage_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_OperateGripper_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_OperateGripper_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_OperateGripper_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OperateGripper_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OperateGripper_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__action__OperateGripper_FeedbackMessage__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper_FeedbackMessage__get_type_description,
  &xarmrob_interfaces__action__OperateGripper_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_FeedbackMessage)() {
  return &::xarmrob_interfaces::action::rosidl_typesupport_c::OperateGripper_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "xarmrob_interfaces/action/operate_gripper.h"
// already included above
// #include "xarmrob_interfaces/action/detail/operate_gripper__type_support.h"

static rosidl_action_type_support_t _xarmrob_interfaces__action__OperateGripper__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &xarmrob_interfaces__action__OperateGripper__get_type_hash,
  &xarmrob_interfaces__action__OperateGripper__get_type_description,
  &xarmrob_interfaces__action__OperateGripper__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper)()
{
  // Thread-safe by always writing the same values to the static struct
  _xarmrob_interfaces__action__OperateGripper__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_SendGoal)();
  _xarmrob_interfaces__action__OperateGripper__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_GetResult)();
  _xarmrob_interfaces__action__OperateGripper__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _xarmrob_interfaces__action__OperateGripper__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, xarmrob_interfaces, action, OperateGripper_FeedbackMessage)();
  _xarmrob_interfaces__action__OperateGripper__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_xarmrob_interfaces__action__OperateGripper__typesupport_c;
}

#ifdef __cplusplus
}
#endif
