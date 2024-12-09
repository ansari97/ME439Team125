// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__type_support.h"
#include "xarmrob_interfaces/msg/detail/me439_gripper_command__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace xarmrob_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ME439GripperCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ME439GripperCommand_type_support_ids_t;

static const _ME439GripperCommand_type_support_ids_t _ME439GripperCommand_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ME439GripperCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ME439GripperCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ME439GripperCommand_type_support_symbol_names_t _ME439GripperCommand_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, msg, ME439GripperCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarmrob_interfaces, msg, ME439GripperCommand)),
  }
};

typedef struct _ME439GripperCommand_type_support_data_t
{
  void * data[2];
} _ME439GripperCommand_type_support_data_t;

static _ME439GripperCommand_type_support_data_t _ME439GripperCommand_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ME439GripperCommand_message_typesupport_map = {
  2,
  "xarmrob_interfaces",
  &_ME439GripperCommand_message_typesupport_ids.typesupport_identifier[0],
  &_ME439GripperCommand_message_typesupport_symbol_names.symbol_name[0],
  &_ME439GripperCommand_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ME439GripperCommand_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ME439GripperCommand_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_hash,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_description,
  &xarmrob_interfaces__msg__ME439GripperCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace xarmrob_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarmrob_interfaces, msg, ME439GripperCommand)() {
  return &::xarmrob_interfaces::msg::rosidl_typesupport_c::ME439GripperCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
