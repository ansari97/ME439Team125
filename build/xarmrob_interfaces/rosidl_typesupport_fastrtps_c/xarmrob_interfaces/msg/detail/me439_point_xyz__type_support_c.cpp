// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__struct.h"
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ME439PointXYZ__ros_msg_type = xarmrob_interfaces__msg__ME439PointXYZ;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_xarmrob_interfaces__msg__ME439PointXYZ(
  const xarmrob_interfaces__msg__ME439PointXYZ * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: xyz
  {
    size_t size = 3;
    auto array_ptr = ros_message->xyz;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_deserialize_xarmrob_interfaces__msg__ME439PointXYZ(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces__msg__ME439PointXYZ * ros_message)
{
  // Field name: xyz
  {
    size_t size = 3;
    auto array_ptr = ros_message->xyz;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_xarmrob_interfaces__msg__ME439PointXYZ(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439PointXYZ__ros_msg_type * ros_message = static_cast<const _ME439PointXYZ__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: xyz
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->xyz;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_xarmrob_interfaces__msg__ME439PointXYZ(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: xyz
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__msg__ME439PointXYZ;
    is_plain =
      (
      offsetof(DataType, xyz) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_key_xarmrob_interfaces__msg__ME439PointXYZ(
  const xarmrob_interfaces__msg__ME439PointXYZ * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: xyz
  {
    size_t size = 3;
    auto array_ptr = ros_message->xyz;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_key_xarmrob_interfaces__msg__ME439PointXYZ(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439PointXYZ__ros_msg_type * ros_message = static_cast<const _ME439PointXYZ__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: xyz
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->xyz;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_key_xarmrob_interfaces__msg__ME439PointXYZ(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: xyz
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__msg__ME439PointXYZ;
    is_plain =
      (
      offsetof(DataType, xyz) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ME439PointXYZ__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarmrob_interfaces__msg__ME439PointXYZ * ros_message = static_cast<const xarmrob_interfaces__msg__ME439PointXYZ *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarmrob_interfaces__msg__ME439PointXYZ(ros_message, cdr);
}

static bool _ME439PointXYZ__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarmrob_interfaces__msg__ME439PointXYZ * ros_message = static_cast<xarmrob_interfaces__msg__ME439PointXYZ *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarmrob_interfaces__msg__ME439PointXYZ(cdr, ros_message);
}

static uint32_t _ME439PointXYZ__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarmrob_interfaces__msg__ME439PointXYZ(
      untyped_ros_message, 0));
}

static size_t _ME439PointXYZ__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarmrob_interfaces__msg__ME439PointXYZ(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ME439PointXYZ = {
  "xarmrob_interfaces::msg",
  "ME439PointXYZ",
  _ME439PointXYZ__cdr_serialize,
  _ME439PointXYZ__cdr_deserialize,
  _ME439PointXYZ__get_serialized_size,
  _ME439PointXYZ__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ME439PointXYZ__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ME439PointXYZ,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_hash,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_description,
  &xarmrob_interfaces__msg__ME439PointXYZ__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, msg, ME439PointXYZ)() {
  return &_ME439PointXYZ__type_support;
}

#if defined(__cplusplus)
}
#endif
