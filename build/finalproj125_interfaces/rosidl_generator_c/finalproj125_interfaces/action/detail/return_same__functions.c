// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from finalproj125_interfaces:action/ReturnSame.idl
// generated code does not contain a copyright notice
#include "finalproj125_interfaces/action/detail/return_same__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
finalproj125_interfaces__action__ReturnSame_Goal__init(finalproj125_interfaces__action__ReturnSame_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_Goal__fini(finalproj125_interfaces__action__ReturnSame_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

bool
finalproj125_interfaces__action__ReturnSame_Goal__are_equal(const finalproj125_interfaces__action__ReturnSame_Goal * lhs, const finalproj125_interfaces__action__ReturnSame_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_Goal__copy(
  const finalproj125_interfaces__action__ReturnSame_Goal * input,
  finalproj125_interfaces__action__ReturnSame_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

finalproj125_interfaces__action__ReturnSame_Goal *
finalproj125_interfaces__action__ReturnSame_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Goal * msg = (finalproj125_interfaces__action__ReturnSame_Goal *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_Goal));
  bool success = finalproj125_interfaces__action__ReturnSame_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_Goal__destroy(finalproj125_interfaces__action__ReturnSame_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_Goal__Sequence__init(finalproj125_interfaces__action__ReturnSame_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Goal * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_Goal *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_Goal__Sequence__fini(finalproj125_interfaces__action__ReturnSame_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_Goal__Sequence *
finalproj125_interfaces__action__ReturnSame_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Goal__Sequence * array = (finalproj125_interfaces__action__ReturnSame_Goal__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_Goal__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_Goal__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_Goal__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_Goal__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_Goal__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_Goal * data =
      (finalproj125_interfaces__action__ReturnSame_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
finalproj125_interfaces__action__ReturnSame_Result__init(finalproj125_interfaces__action__ReturnSame_Result * msg)
{
  if (!msg) {
    return false;
  }
  // action_result
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_Result__fini(finalproj125_interfaces__action__ReturnSame_Result * msg)
{
  if (!msg) {
    return;
  }
  // action_result
}

bool
finalproj125_interfaces__action__ReturnSame_Result__are_equal(const finalproj125_interfaces__action__ReturnSame_Result * lhs, const finalproj125_interfaces__action__ReturnSame_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_result
  if (lhs->action_result != rhs->action_result) {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_Result__copy(
  const finalproj125_interfaces__action__ReturnSame_Result * input,
  finalproj125_interfaces__action__ReturnSame_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // action_result
  output->action_result = input->action_result;
  return true;
}

finalproj125_interfaces__action__ReturnSame_Result *
finalproj125_interfaces__action__ReturnSame_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Result * msg = (finalproj125_interfaces__action__ReturnSame_Result *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_Result));
  bool success = finalproj125_interfaces__action__ReturnSame_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_Result__destroy(finalproj125_interfaces__action__ReturnSame_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_Result__Sequence__init(finalproj125_interfaces__action__ReturnSame_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Result * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_Result *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_Result__Sequence__fini(finalproj125_interfaces__action__ReturnSame_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_Result__Sequence *
finalproj125_interfaces__action__ReturnSame_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Result__Sequence * array = (finalproj125_interfaces__action__ReturnSame_Result__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_Result__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_Result__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_Result__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_Result__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_Result__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_Result * data =
      (finalproj125_interfaces__action__ReturnSame_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
finalproj125_interfaces__action__ReturnSame_Feedback__init(finalproj125_interfaces__action__ReturnSame_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_Feedback__fini(finalproj125_interfaces__action__ReturnSame_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

bool
finalproj125_interfaces__action__ReturnSame_Feedback__are_equal(const finalproj125_interfaces__action__ReturnSame_Feedback * lhs, const finalproj125_interfaces__action__ReturnSame_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (lhs->feedback != rhs->feedback) {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_Feedback__copy(
  const finalproj125_interfaces__action__ReturnSame_Feedback * input,
  finalproj125_interfaces__action__ReturnSame_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  output->feedback = input->feedback;
  return true;
}

finalproj125_interfaces__action__ReturnSame_Feedback *
finalproj125_interfaces__action__ReturnSame_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Feedback * msg = (finalproj125_interfaces__action__ReturnSame_Feedback *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_Feedback));
  bool success = finalproj125_interfaces__action__ReturnSame_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_Feedback__destroy(finalproj125_interfaces__action__ReturnSame_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__init(finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Feedback * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_Feedback *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__fini(finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_Feedback__Sequence *
finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * array = (finalproj125_interfaces__action__ReturnSame_Feedback__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_Feedback__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_Feedback * data =
      (finalproj125_interfaces__action__ReturnSame_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "finalproj125_interfaces/action/detail/return_same__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__init(finalproj125_interfaces__action__ReturnSame_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!finalproj125_interfaces__action__ReturnSame_Goal__init(&msg->goal)) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(finalproj125_interfaces__action__ReturnSame_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  finalproj125_interfaces__action__ReturnSame_Goal__fini(&msg->goal);
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__are_equal(const finalproj125_interfaces__action__ReturnSame_SendGoal_Request * lhs, const finalproj125_interfaces__action__ReturnSame_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!finalproj125_interfaces__action__ReturnSame_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__copy(
  const finalproj125_interfaces__action__ReturnSame_SendGoal_Request * input,
  finalproj125_interfaces__action__ReturnSame_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!finalproj125_interfaces__action__ReturnSame_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_SendGoal_Request *
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Request * msg = (finalproj125_interfaces__action__ReturnSame_SendGoal_Request *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Request));
  bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__destroy(finalproj125_interfaces__action__ReturnSame_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__init(finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Request * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_SendGoal_Request *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__fini(finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence *
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * array = (finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_SendGoal_Request * data =
      (finalproj125_interfaces__action__ReturnSame_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__init(finalproj125_interfaces__action__ReturnSame_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__fini(finalproj125_interfaces__action__ReturnSame_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__are_equal(const finalproj125_interfaces__action__ReturnSame_SendGoal_Response * lhs, const finalproj125_interfaces__action__ReturnSame_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__copy(
  const finalproj125_interfaces__action__ReturnSame_SendGoal_Response * input,
  finalproj125_interfaces__action__ReturnSame_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_SendGoal_Response *
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Response * msg = (finalproj125_interfaces__action__ReturnSame_SendGoal_Response *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Response));
  bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__destroy(finalproj125_interfaces__action__ReturnSame_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__init(finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Response * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_SendGoal_Response *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__fini(finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence *
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * array = (finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_SendGoal_Response * data =
      (finalproj125_interfaces__action__ReturnSame_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "finalproj125_interfaces/action/detail/return_same__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__init(finalproj125_interfaces__action__ReturnSame_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(finalproj125_interfaces__action__ReturnSame_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__are_equal(const finalproj125_interfaces__action__ReturnSame_SendGoal_Event * lhs, const finalproj125_interfaces__action__ReturnSame_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__copy(
  const finalproj125_interfaces__action__ReturnSame_SendGoal_Event * input,
  finalproj125_interfaces__action__ReturnSame_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_SendGoal_Event *
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Event * msg = (finalproj125_interfaces__action__ReturnSame_SendGoal_Event *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Event));
  bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__destroy(finalproj125_interfaces__action__ReturnSame_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__init(finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Event * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_SendGoal_Event *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__fini(finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence *
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * array = (finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_SendGoal_Event * data =
      (finalproj125_interfaces__action__ReturnSame_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Request__init(finalproj125_interfaces__action__ReturnSame_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Request__fini(finalproj125_interfaces__action__ReturnSame_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Request__are_equal(const finalproj125_interfaces__action__ReturnSame_GetResult_Request * lhs, const finalproj125_interfaces__action__ReturnSame_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Request__copy(
  const finalproj125_interfaces__action__ReturnSame_GetResult_Request * input,
  finalproj125_interfaces__action__ReturnSame_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_GetResult_Request *
finalproj125_interfaces__action__ReturnSame_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Request * msg = (finalproj125_interfaces__action__ReturnSame_GetResult_Request *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Request));
  bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Request__destroy(finalproj125_interfaces__action__ReturnSame_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__init(finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Request * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_GetResult_Request *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__fini(finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence *
finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * array = (finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_GetResult_Request * data =
      (finalproj125_interfaces__action__ReturnSame_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "finalproj125_interfaces/action/detail/return_same__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Response__init(finalproj125_interfaces__action__ReturnSame_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!finalproj125_interfaces__action__ReturnSame_Result__init(&msg->result)) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Response__fini(finalproj125_interfaces__action__ReturnSame_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  finalproj125_interfaces__action__ReturnSame_Result__fini(&msg->result);
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Response__are_equal(const finalproj125_interfaces__action__ReturnSame_GetResult_Response * lhs, const finalproj125_interfaces__action__ReturnSame_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!finalproj125_interfaces__action__ReturnSame_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Response__copy(
  const finalproj125_interfaces__action__ReturnSame_GetResult_Response * input,
  finalproj125_interfaces__action__ReturnSame_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!finalproj125_interfaces__action__ReturnSame_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_GetResult_Response *
finalproj125_interfaces__action__ReturnSame_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Response * msg = (finalproj125_interfaces__action__ReturnSame_GetResult_Response *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Response));
  bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Response__destroy(finalproj125_interfaces__action__ReturnSame_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__init(finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Response * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_GetResult_Response *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__fini(finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence *
finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * array = (finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_GetResult_Response * data =
      (finalproj125_interfaces__action__ReturnSame_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "finalproj125_interfaces/action/detail/return_same__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Event__init(finalproj125_interfaces__action__ReturnSame_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__init(&msg->request, 0)) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__init(&msg->response, 0)) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(finalproj125_interfaces__action__ReturnSame_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__fini(&msg->request);
  // response
  finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__fini(&msg->response);
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Event__are_equal(const finalproj125_interfaces__action__ReturnSame_GetResult_Event * lhs, const finalproj125_interfaces__action__ReturnSame_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Event__copy(
  const finalproj125_interfaces__action__ReturnSame_GetResult_Event * input,
  finalproj125_interfaces__action__ReturnSame_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!finalproj125_interfaces__action__ReturnSame_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!finalproj125_interfaces__action__ReturnSame_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_GetResult_Event *
finalproj125_interfaces__action__ReturnSame_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Event * msg = (finalproj125_interfaces__action__ReturnSame_GetResult_Event *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Event));
  bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Event__destroy(finalproj125_interfaces__action__ReturnSame_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__init(finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Event * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_GetResult_Event *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__fini(finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence *
finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * array = (finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_GetResult_Event * data =
      (finalproj125_interfaces__action__ReturnSame_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "finalproj125_interfaces/action/detail/return_same__functions.h"

bool
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__init(finalproj125_interfaces__action__ReturnSame_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!finalproj125_interfaces__action__ReturnSame_Feedback__init(&msg->feedback)) {
    finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(finalproj125_interfaces__action__ReturnSame_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  finalproj125_interfaces__action__ReturnSame_Feedback__fini(&msg->feedback);
}

bool
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__are_equal(const finalproj125_interfaces__action__ReturnSame_FeedbackMessage * lhs, const finalproj125_interfaces__action__ReturnSame_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!finalproj125_interfaces__action__ReturnSame_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__copy(
  const finalproj125_interfaces__action__ReturnSame_FeedbackMessage * input,
  finalproj125_interfaces__action__ReturnSame_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!finalproj125_interfaces__action__ReturnSame_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

finalproj125_interfaces__action__ReturnSame_FeedbackMessage *
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_FeedbackMessage * msg = (finalproj125_interfaces__action__ReturnSame_FeedbackMessage *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalproj125_interfaces__action__ReturnSame_FeedbackMessage));
  bool success = finalproj125_interfaces__action__ReturnSame_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__destroy(finalproj125_interfaces__action__ReturnSame_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__init(finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_FeedbackMessage * data = NULL;

  if (size) {
    data = (finalproj125_interfaces__action__ReturnSame_FeedbackMessage *)allocator.zero_allocate(size, sizeof(finalproj125_interfaces__action__ReturnSame_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalproj125_interfaces__action__ReturnSame_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__fini(finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence *
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * array = (finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence *)allocator.allocate(sizeof(finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__destroy(finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__are_equal(const finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * lhs, const finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence__copy(
  const finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * input,
  finalproj125_interfaces__action__ReturnSame_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalproj125_interfaces__action__ReturnSame_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalproj125_interfaces__action__ReturnSame_FeedbackMessage * data =
      (finalproj125_interfaces__action__ReturnSame_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalproj125_interfaces__action__ReturnSame_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalproj125_interfaces__action__ReturnSame_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalproj125_interfaces__action__ReturnSame_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
