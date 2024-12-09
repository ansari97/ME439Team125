// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xarmrob_interfaces:msg/ME439GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/msg/me439_gripper_command.h"


#ifndef XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__FUNCTIONS_H_
#define XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__FUNCTIONS_H_

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

#include "xarmrob_interfaces/msg/detail/me439_gripper_command__struct.h"

/// Initialize msg/ME439GripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xarmrob_interfaces__msg__ME439GripperCommand
 * )) before or use
 * xarmrob_interfaces__msg__ME439GripperCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439GripperCommand__init(xarmrob_interfaces__msg__ME439GripperCommand * msg);

/// Finalize msg/ME439GripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439GripperCommand__fini(xarmrob_interfaces__msg__ME439GripperCommand * msg);

/// Create msg/ME439GripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xarmrob_interfaces__msg__ME439GripperCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
xarmrob_interfaces__msg__ME439GripperCommand *
xarmrob_interfaces__msg__ME439GripperCommand__create(void);

/// Destroy msg/ME439GripperCommand message.
/**
 * It calls
 * xarmrob_interfaces__msg__ME439GripperCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439GripperCommand__destroy(xarmrob_interfaces__msg__ME439GripperCommand * msg);

/// Check for msg/ME439GripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439GripperCommand__are_equal(const xarmrob_interfaces__msg__ME439GripperCommand * lhs, const xarmrob_interfaces__msg__ME439GripperCommand * rhs);

/// Copy a msg/ME439GripperCommand message.
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
xarmrob_interfaces__msg__ME439GripperCommand__copy(
  const xarmrob_interfaces__msg__ME439GripperCommand * input,
  xarmrob_interfaces__msg__ME439GripperCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_type_hash_t *
xarmrob_interfaces__msg__ME439GripperCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
xarmrob_interfaces__msg__ME439GripperCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_runtime_c__type_description__TypeSource *
xarmrob_interfaces__msg__ME439GripperCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarmrob_interfaces__msg__ME439GripperCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ME439GripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * xarmrob_interfaces__msg__ME439GripperCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439GripperCommand__Sequence__init(xarmrob_interfaces__msg__ME439GripperCommand__Sequence * array, size_t size);

/// Finalize array of msg/ME439GripperCommand messages.
/**
 * It calls
 * xarmrob_interfaces__msg__ME439GripperCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439GripperCommand__Sequence__fini(xarmrob_interfaces__msg__ME439GripperCommand__Sequence * array);

/// Create array of msg/ME439GripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * xarmrob_interfaces__msg__ME439GripperCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
xarmrob_interfaces__msg__ME439GripperCommand__Sequence *
xarmrob_interfaces__msg__ME439GripperCommand__Sequence__create(size_t size);

/// Destroy array of msg/ME439GripperCommand messages.
/**
 * It calls
 * xarmrob_interfaces__msg__ME439GripperCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
void
xarmrob_interfaces__msg__ME439GripperCommand__Sequence__destroy(xarmrob_interfaces__msg__ME439GripperCommand__Sequence * array);

/// Check for msg/ME439GripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xarmrob_interfaces
bool
xarmrob_interfaces__msg__ME439GripperCommand__Sequence__are_equal(const xarmrob_interfaces__msg__ME439GripperCommand__Sequence * lhs, const xarmrob_interfaces__msg__ME439GripperCommand__Sequence * rhs);

/// Copy an array of msg/ME439GripperCommand messages.
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
xarmrob_interfaces__msg__ME439GripperCommand__Sequence__copy(
  const xarmrob_interfaces__msg__ME439GripperCommand__Sequence * input,
  xarmrob_interfaces__msg__ME439GripperCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XARMROB_INTERFACES__MSG__DETAIL__ME439_GRIPPER_COMMAND__FUNCTIONS_H_
