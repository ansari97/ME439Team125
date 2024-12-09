// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_joint_location.h"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__FUNCTIONS_H_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "xarmrob_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "xarmrob_interfaces/msg/detail/me439_joint_location__struct.h"

/// Initialize msg/ME439JointLocation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xarmrob_interfaces__msg__ME439JointLocation
 * )) before or use
 * xarmrob_interfaces__msg__ME439JointLocation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439JointLocation__init(xarmrob_interfaces__msg__ME439JointLocation * msg);

/// Finalize msg/ME439JointLocation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439JointLocation__fini(xarmrob_interfaces__msg__ME439JointLocation * msg);

/// Create msg/ME439JointLocation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xarmrob_interfaces__msg__ME439JointLocation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
xarmrob_interfaces__msg__ME439JointLocation *
xarmrob_interfaces__msg__ME439JointLocation__create(void);

/// Destroy msg/ME439JointLocation message.
/**
 * It calls
 * xarmrob_interfaces__msg__ME439JointLocation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439JointLocation__destroy(xarmrob_interfaces__msg__ME439JointLocation * msg);

/// Check for msg/ME439JointLocation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439JointLocation__are_equal(const xarmrob_interfaces__msg__ME439JointLocation * lhs, const xarmrob_interfaces__msg__ME439JointLocation * rhs);

/// Copy a msg/ME439JointLocation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439JointLocation__copy(
  const xarmrob_interfaces__msg__ME439JointLocation * input,
  xarmrob_interfaces__msg__ME439JointLocation * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__msg__ME439JointLocation__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__msg__ME439JointLocation__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__msg__ME439JointLocation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__msg__ME439JointLocation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ME439JointLocation messages.
/**
 * It allocates the memory for the number of elements and calls
 * xarmrob_interfaces__msg__ME439JointLocation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439JointLocation__Sequence__init(xarmrob_interfaces__msg__ME439JointLocation__Sequence * array, size_t size);

/// Finalize array of msg/ME439JointLocation messages.
/**
 * It calls
 * xarmrob_interfaces__msg__ME439JointLocation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439JointLocation__Sequence__fini(xarmrob_interfaces__msg__ME439JointLocation__Sequence * array);

/// Create array of msg/ME439JointLocation messages.
/**
 * It allocates the memory for the array and calls
 * xarmrob_interfaces__msg__ME439JointLocation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
xarmrob_interfaces__msg__ME439JointLocation__Sequence *
xarmrob_interfaces__msg__ME439JointLocation__Sequence__create(size_t size);

/// Destroy array of msg/ME439JointLocation messages.
/**
 * It calls
 * xarmrob_interfaces__msg__ME439JointLocation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439JointLocation__Sequence__destroy(xarmrob_interfaces__msg__ME439JointLocation__Sequence * array);

/// Check for msg/ME439JointLocation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439JointLocation__Sequence__are_equal(const xarmrob_interfaces__msg__ME439JointLocation__Sequence * lhs, const xarmrob_interfaces__msg__ME439JointLocation__Sequence * rhs);

/// Copy an array of msg/ME439JointLocation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439JointLocation__Sequence__copy(
  const xarmrob_interfaces__msg__ME439JointLocation__Sequence * input,
  xarmrob_interfaces__msg__ME439JointLocation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_JOINT_LOCATION__FUNCTIONS_H_
