// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xarmrob_interfaces:srv/ME439XArmInverseKinematics.idl
// generated code does not contain a copyright notice
#include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__struct.h"
#include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // effector_pose, endpoint
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // effector_pose, endpoint

// forward declare type support functions


using _ME439XArmInverseKinematics_Request__ros_msg_type = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: endpoint
  {
    size_t size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: effector_pose
  {
    size_t size = ros_message->effector_pose.size;
    auto array_ptr = ros_message->effector_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message)
{
  // Field name: endpoint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->endpoint.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->endpoint);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->endpoint, size)) {
      fprintf(stderr, "failed to create array for field 'endpoint'");
      return false;
    }
    auto array_ptr = ros_message->endpoint.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: effector_pose
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->effector_pose.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->effector_pose);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->effector_pose, size)) {
      fprintf(stderr, "failed to create array for field 'effector_pose'");
      return false;
    }
    auto array_ptr = ros_message->effector_pose.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439XArmInverseKinematics_Request__ros_msg_type * ros_message = static_cast<const _ME439XArmInverseKinematics_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: endpoint
  {
    size_t array_size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: effector_pose
  {
    size_t array_size = ros_message->effector_pose.size;
    auto array_ptr = ros_message->effector_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
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

  // Field name: endpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: effector_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request;
    is_plain =
      (
      offsetof(DataType, effector_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: endpoint
  {
    size_t size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: effector_pose
  {
    size_t size = ros_message->effector_pose.size;
    auto array_ptr = ros_message->effector_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439XArmInverseKinematics_Request__ros_msg_type * ros_message = static_cast<const _ME439XArmInverseKinematics_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: endpoint
  {
    size_t array_size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: effector_pose
  {
    size_t array_size = ros_message->effector_pose.size;
    auto array_ptr = ros_message->effector_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
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
  // Field name: endpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: effector_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request;
    is_plain =
      (
      offsetof(DataType, effector_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ME439XArmInverseKinematics_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message = static_cast<const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(ros_message, cdr);
}

static bool _ME439XArmInverseKinematics_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message = static_cast<xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(cdr, ros_message);
}

static uint32_t _ME439XArmInverseKinematics_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
      untyped_ros_message, 0));
}

static size_t _ME439XArmInverseKinematics_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ME439XArmInverseKinematics_Request = {
  "xarmrob_interfaces::srv",
  "ME439XArmInverseKinematics_Request",
  _ME439XArmInverseKinematics_Request__cdr_serialize,
  _ME439XArmInverseKinematics_Request__cdr_deserialize,
  _ME439XArmInverseKinematics_Request__get_serialized_size,
  _ME439XArmInverseKinematics_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ME439XArmInverseKinematics_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ME439XArmInverseKinematics_Request,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Request)() {
  return &_ME439XArmInverseKinematics_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // endpoint, joint_angles
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // endpoint, joint_angles

// forward declare type support functions


using _ME439XArmInverseKinematics_Response__ros_msg_type = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint_angles
  {
    size_t size = ros_message->joint_angles.size;
    auto array_ptr = ros_message->joint_angles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: endpoint
  {
    size_t size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: modified
  {
    cdr << (ros_message->modified ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message)
{
  // Field name: joint_angles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_angles.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint_angles);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint_angles, size)) {
      fprintf(stderr, "failed to create array for field 'joint_angles'");
      return false;
    }
    auto array_ptr = ros_message->joint_angles.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: endpoint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->endpoint.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->endpoint);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->endpoint, size)) {
      fprintf(stderr, "failed to create array for field 'endpoint'");
      return false;
    }
    auto array_ptr = ros_message->endpoint.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: modified
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->modified = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439XArmInverseKinematics_Response__ros_msg_type * ros_message = static_cast<const _ME439XArmInverseKinematics_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint_angles
  {
    size_t array_size = ros_message->joint_angles.size;
    auto array_ptr = ros_message->joint_angles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: endpoint
  {
    size_t array_size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: modified
  {
    size_t item_size = sizeof(ros_message->modified);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
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

  // Field name: joint_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: endpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: modified
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response;
    is_plain =
      (
      offsetof(DataType, modified) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint_angles
  {
    size_t size = ros_message->joint_angles.size;
    auto array_ptr = ros_message->joint_angles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: endpoint
  {
    size_t size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: modified
  {
    cdr << (ros_message->modified ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439XArmInverseKinematics_Response__ros_msg_type * ros_message = static_cast<const _ME439XArmInverseKinematics_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint_angles
  {
    size_t array_size = ros_message->joint_angles.size;
    auto array_ptr = ros_message->joint_angles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: endpoint
  {
    size_t array_size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: modified
  {
    size_t item_size = sizeof(ros_message->modified);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
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
  // Field name: joint_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: endpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: modified
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response;
    is_plain =
      (
      offsetof(DataType, modified) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ME439XArmInverseKinematics_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message = static_cast<const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(ros_message, cdr);
}

static bool _ME439XArmInverseKinematics_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message = static_cast<xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(cdr, ros_message);
}

static uint32_t _ME439XArmInverseKinematics_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
      untyped_ros_message, 0));
}

static size_t _ME439XArmInverseKinematics_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ME439XArmInverseKinematics_Response = {
  "xarmrob_interfaces::srv",
  "ME439XArmInverseKinematics_Response",
  _ME439XArmInverseKinematics_Response__cdr_serialize,
  _ME439XArmInverseKinematics_Response__cdr_deserialize,
  _ME439XArmInverseKinematics_Response__get_serialized_size,
  _ME439XArmInverseKinematics_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ME439XArmInverseKinematics_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ME439XArmInverseKinematics_Response,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Response)() {
  return &_ME439XArmInverseKinematics_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__struct.h"
// already included above
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_inverse_kinematics__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarmrob_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message);

size_t get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Request)();

bool cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message);

size_t get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Response)();


using _ME439XArmInverseKinematics_Event__ros_msg_type = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
  eprosima::fastcdr::Cdr & cdr,
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request__Sequence__fini(&ros_message->request);
    }
    if (!xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response__Sequence__fini(&ros_message->response);
    }
    if (!xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439XArmInverseKinematics_Event__ros_msg_type * ros_message = static_cast<const _ME439XArmInverseKinematics_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
bool cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ME439XArmInverseKinematics_Event__ros_msg_type * ros_message = static_cast<const _ME439XArmInverseKinematics_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarmrob_interfaces
size_t max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ME439XArmInverseKinematics_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event * ros_message = static_cast<const xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(ros_message, cdr);
}

static bool _ME439XArmInverseKinematics_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event * ros_message = static_cast<xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(cdr, ros_message);
}

static uint32_t _ME439XArmInverseKinematics_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
      untyped_ros_message, 0));
}

static size_t _ME439XArmInverseKinematics_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ME439XArmInverseKinematics_Event = {
  "xarmrob_interfaces::srv",
  "ME439XArmInverseKinematics_Event",
  _ME439XArmInverseKinematics_Event__cdr_serialize,
  _ME439XArmInverseKinematics_Event__cdr_deserialize,
  _ME439XArmInverseKinematics_Event__get_serialized_size,
  _ME439XArmInverseKinematics_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ME439XArmInverseKinematics_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ME439XArmInverseKinematics_Event,
  get_message_typesupport_handle_function,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Event)() {
  return &_ME439XArmInverseKinematics_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "xarmrob_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarmrob_interfaces/srv/me439_x_arm_inverse_kinematics.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ME439XArmInverseKinematics__callbacks = {
  "xarmrob_interfaces::srv",
  "ME439XArmInverseKinematics",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics_Response)(),
};

static rosidl_service_type_support_t ME439XArmInverseKinematics__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ME439XArmInverseKinematics__callbacks,
  get_service_typesupport_handle_function,
  &_ME439XArmInverseKinematics_Request__type_support,
  &_ME439XArmInverseKinematics_Response__type_support,
  &_ME439XArmInverseKinematics_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    srv,
    ME439XArmInverseKinematics
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarmrob_interfaces,
    srv,
    ME439XArmInverseKinematics
  ),
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics__get_type_hash,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics__get_type_description,
  &xarmrob_interfaces__srv__ME439XArmInverseKinematics__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarmrob_interfaces, srv, ME439XArmInverseKinematics)() {
  return &ME439XArmInverseKinematics__handle;
}

#if defined(__cplusplus)
}
#endif
