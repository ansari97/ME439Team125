// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xarmrob_interfaces:action/ME439MoveToTarget.idl
// generated code does not contain a copyright notice
#include "xarmrob_interfaces/action/detail/me439_move_to_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xarmrob_interfaces__action__ME439MoveToTarget_Goal__init(xarmrob_interfaces__action__ME439MoveToTarget_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // xyz
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Goal__fini(xarmrob_interfaces__action__ME439MoveToTarget_Goal * msg)
{
  if (!msg) {
    return;
  }
  // xyz
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Goal__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_Goal * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xyz
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->xyz[i] != rhs->xyz[i]) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Goal__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_Goal * input,
  xarmrob_interfaces__action__ME439MoveToTarget_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // xyz
  for (size_t i = 0; i < 3; ++i) {
    output->xyz[i] = input->xyz[i];
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_Goal *
xarmrob_interfaces__action__ME439MoveToTarget_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Goal * msg = (xarmrob_interfaces__action__ME439MoveToTarget_Goal *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Goal));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Goal__destroy(xarmrob_interfaces__action__ME439MoveToTarget_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Goal * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_Goal *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_Goal__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_Goal__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_Goal * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_Result__init(xarmrob_interfaces__action__ME439MoveToTarget_Result * msg)
{
  if (!msg) {
    return false;
  }
  // xyz
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Result__fini(xarmrob_interfaces__action__ME439MoveToTarget_Result * msg)
{
  if (!msg) {
    return;
  }
  // xyz
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Result__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_Result * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xyz
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->xyz[i] != rhs->xyz[i]) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Result__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_Result * input,
  xarmrob_interfaces__action__ME439MoveToTarget_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // xyz
  for (size_t i = 0; i < 3; ++i) {
    output->xyz[i] = input->xyz[i];
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_Result *
xarmrob_interfaces__action__ME439MoveToTarget_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Result * msg = (xarmrob_interfaces__action__ME439MoveToTarget_Result *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Result));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Result__destroy(xarmrob_interfaces__action__ME439MoveToTarget_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Result * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_Result *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_Result__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_Result__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_Result * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__init(xarmrob_interfaces__action__ME439MoveToTarget_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // xyz
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__fini(xarmrob_interfaces__action__ME439MoveToTarget_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // xyz
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_Feedback * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xyz
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->xyz[i] != rhs->xyz[i]) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_Feedback * input,
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // xyz
  for (size_t i = 0; i < 3; ++i) {
    output->xyz[i] = input->xyz[i];
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_Feedback *
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback * msg = (xarmrob_interfaces__action__ME439MoveToTarget_Feedback *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Feedback));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__destroy(xarmrob_interfaces__action__ME439MoveToTarget_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_Feedback *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_Feedback__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_Feedback__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_Feedback * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_Feedback__copy(
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
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__functions.h"

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__init(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Goal__init(&msg->goal)) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  xarmrob_interfaces__action__ME439MoveToTarget_Goal__fini(&msg->goal);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * rhs)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * input,
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * output)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request *
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * msg = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__destroy(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__copy(
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
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__init(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__fini(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * rhs)
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
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * input,
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * output)
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

xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response *
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * msg = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__destroy(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__copy(
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
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__functions.h"

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__init(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * rhs)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * input,
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * output)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event *
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * msg = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__destroy(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_SendGoal_Event__copy(
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
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__init(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__fini(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * rhs)
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
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * input,
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * output)
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

xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request *
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * msg = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__destroy(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__copy(
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
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__functions.h"

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__init(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Result__init(&msg->result)) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__fini(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  xarmrob_interfaces__action__ME439MoveToTarget_Result__fini(&msg->result);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * input,
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response *
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * msg = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__destroy(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__copy(
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
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__functions.h"

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__init(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__init(&msg->request, 0)) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__init(&msg->response, 0)) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__fini(&msg->request);
  // response
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__fini(&msg->response);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * rhs)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * input,
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * output)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event *
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * msg = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__destroy(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_GetResult_Event__copy(
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
// #include "xarmrob_interfaces/action/detail/me439_move_to_target__functions.h"

bool
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__init(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Feedback__init(&msg->feedback)) {
    xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  xarmrob_interfaces__action__ME439MoveToTarget_Feedback__fini(&msg->feedback);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * rhs)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * input,
  xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * output)
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
  if (!xarmrob_interfaces__action__ME439MoveToTarget_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage *
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * msg = (xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage));
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__destroy(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__init(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(&data[i - 1]);
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
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__fini(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * array)
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
      xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(&array->data[i]);
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

xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence *
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * array = (xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__destroy(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__are_equal(const xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * lhs, const xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence__copy(
  const xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * input,
  xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage * data =
      (xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__action__ME439MoveToTarget_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
