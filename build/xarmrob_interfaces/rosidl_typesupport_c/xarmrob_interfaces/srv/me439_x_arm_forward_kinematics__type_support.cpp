// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__type_support.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ME439XArmForwardKinematics_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ME439XArmForwardKinematics_Request_type_support_ids_t;

static const _ME439XArmForwardKinematics_Request_type_support_ids_t _ME439XArmForwardKinematics_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ME439XArmForwardKinematics_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ME439XArmForwardKinematics_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ME439XArmForwardKinematics_Request_type_support_symbol_names_t _ME439XArmForwardKinematics_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)),
  }
};

typedef struct _ME439XArmForwardKinematics_Request_type_support_data_t
{
  void * data[2];
} _ME439XArmForwardKinematics_Request_type_support_data_t;

static _ME439XArmForwardKinematics_Request_type_support_data_t _ME439XArmForwardKinematics_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ME439XArmForwardKinematics_Request_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_ME439XArmForwardKinematics_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ME439XArmForwardKinematics_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ME439XArmForwardKinematics_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ME439XArmForwardKinematics_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ME439XArmForwardKinematics_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Request)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_c::ME439XArmForwardKinematics_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__type_support.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ME439XArmForwardKinematics_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ME439XArmForwardKinematics_Response_type_support_ids_t;

static const _ME439XArmForwardKinematics_Response_type_support_ids_t _ME439XArmForwardKinematics_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ME439XArmForwardKinematics_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ME439XArmForwardKinematics_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ME439XArmForwardKinematics_Response_type_support_symbol_names_t _ME439XArmForwardKinematics_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)),
  }
};

typedef struct _ME439XArmForwardKinematics_Response_type_support_data_t
{
  void * data[2];
} _ME439XArmForwardKinematics_Response_type_support_data_t;

static _ME439XArmForwardKinematics_Response_type_support_data_t _ME439XArmForwardKinematics_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ME439XArmForwardKinematics_Response_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_ME439XArmForwardKinematics_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ME439XArmForwardKinematics_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ME439XArmForwardKinematics_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ME439XArmForwardKinematics_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ME439XArmForwardKinematics_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Response)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_c::ME439XArmForwardKinematics_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__type_support.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ME439XArmForwardKinematics_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ME439XArmForwardKinematics_Event_type_support_ids_t;

static const _ME439XArmForwardKinematics_Event_type_support_ids_t _ME439XArmForwardKinematics_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ME439XArmForwardKinematics_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ME439XArmForwardKinematics_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ME439XArmForwardKinematics_Event_type_support_symbol_names_t _ME439XArmForwardKinematics_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)),
  }
};

typedef struct _ME439XArmForwardKinematics_Event_type_support_data_t
{
  void * data[2];
} _ME439XArmForwardKinematics_Event_type_support_data_t;

static _ME439XArmForwardKinematics_Event_type_support_data_t _ME439XArmForwardKinematics_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ME439XArmForwardKinematics_Event_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_ME439XArmForwardKinematics_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ME439XArmForwardKinematics_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ME439XArmForwardKinematics_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ME439XArmForwardKinematics_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ME439XArmForwardKinematics_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics_Event)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_c::ME439XArmForwardKinematics_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__type_support.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ME439XArmForwardKinematics_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ME439XArmForwardKinematics_type_support_ids_t;

static const _ME439XArmForwardKinematics_type_support_ids_t _ME439XArmForwardKinematics_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ME439XArmForwardKinematics_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ME439XArmForwardKinematics_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ME439XArmForwardKinematics_type_support_symbol_names_t _ME439XArmForwardKinematics_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics)),
  }
};

typedef struct _ME439XArmForwardKinematics_type_support_data_t
{
  void * data[2];
} _ME439XArmForwardKinematics_type_support_data_t;

static _ME439XArmForwardKinematics_type_support_data_t _ME439XArmForwardKinematics_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ME439XArmForwardKinematics_service_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_ME439XArmForwardKinematics_service_typesupport_ids.typesupport_identifier[0],
  &_ME439XArmForwardKinematics_service_typesupport_symbol_names.symbol_name[0],
  &_ME439XArmForwardKinematics_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ME439XArmForwardKinematics_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ME439XArmForwardKinematics_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ME439XArmForwardKinematics_Request_message_type_support_handle,
  &ME439XArmForwardKinematics_Response_message_type_support_handle,
  &ME439XArmForwardKinematics_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    srv,
    ME439XArmForwardKinematics
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    srv,
    ME439XArmForwardKinematics
  ),
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmForwardKinematics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, srv, ME439XArmForwardKinematics)() {
  return &::xarmrob_interfaces::srv::rosidl_typesupport_c::ME439XArmForwardKinematics_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif