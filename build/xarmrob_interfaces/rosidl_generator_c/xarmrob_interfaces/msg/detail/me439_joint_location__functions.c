// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xarmrob_interfaces:msg/ME439JointLocation.idl
// generated code does not contain a copyright notice
#include "xarmrob_interfaces/msg/detail/me439_joint_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
xarmrob_interfaces__msg__ME439JointLocation__init(xarmrob_interfaces__msg__ME439JointLocation * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    xarmrob_interfaces__msg__ME439JointLocation__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y, 0)) {
    xarmrob_interfaces__msg__ME439JointLocation__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->z, 0)) {
    xarmrob_interfaces__msg__ME439JointLocation__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__msg__ME439JointLocation__fini(xarmrob_interfaces__msg__ME439JointLocation * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__float__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__float__Sequence__fini(&msg->z);
}

bool
xarmrob_interfaces__msg__ME439JointLocation__are_equal(const xarmrob_interfaces__msg__ME439JointLocation * lhs, const xarmrob_interfaces__msg__ME439JointLocation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__msg__ME439JointLocation__copy(
  const xarmrob_interfaces__msg__ME439JointLocation * input,
  xarmrob_interfaces__msg__ME439JointLocation * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__msg__ME439JointLocation *
xarmrob_interfaces__msg__ME439JointLocation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__msg__ME439JointLocation * msg = (xarmrob_interfaces__msg__ME439JointLocation *)allocator.allocate(sizeof(xarmrob_interfaces__msg__ME439JointLocation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__msg__ME439JointLocation));
  bool success = xarmrob_interfaces__msg__ME439JointLocation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__msg__ME439JointLocation__destroy(xarmrob_interfaces__msg__ME439JointLocation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__msg__ME439JointLocation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__msg__ME439JointLocation__Sequence__init(xarmrob_interfaces__msg__ME439JointLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__msg__ME439JointLocation * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__msg__ME439JointLocation *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__msg__ME439JointLocation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__msg__ME439JointLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__msg__ME439JointLocation__fini(&data[i - 1]);
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
xarmrob_interfaces__msg__ME439JointLocation__Sequence__fini(xarmrob_interfaces__msg__ME439JointLocation__Sequence * array)
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
      xarmrob_interfaces__msg__ME439JointLocation__fini(&array->data[i]);
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

xarmrob_interfaces__msg__ME439JointLocation__Sequence *
xarmrob_interfaces__msg__ME439JointLocation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__msg__ME439JointLocation__Sequence * array = (xarmrob_interfaces__msg__ME439JointLocation__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__msg__ME439JointLocation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__msg__ME439JointLocation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__msg__ME439JointLocation__Sequence__destroy(xarmrob_interfaces__msg__ME439JointLocation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__msg__ME439JointLocation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__msg__ME439JointLocation__Sequence__are_equal(const xarmrob_interfaces__msg__ME439JointLocation__Sequence * lhs, const xarmrob_interfaces__msg__ME439JointLocation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__msg__ME439JointLocation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__msg__ME439JointLocation__Sequence__copy(
  const xarmrob_interfaces__msg__ME439JointLocation__Sequence * input,
  xarmrob_interfaces__msg__ME439JointLocation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__msg__ME439JointLocation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__msg__ME439JointLocation * data =
      (xarmrob_interfaces__msg__ME439JointLocation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__msg__ME439JointLocation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__msg__ME439JointLocation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__msg__ME439JointLocation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
