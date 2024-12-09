// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xarmrob_interfaces:msg/ME439PointXYZ.idl
// generated code does not contain a copyright notice
#include "xarmrob_interfaces/msg/detail/me439_point_xyz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xarmrob_interfaces__msg__ME439PointXYZ__init(xarmrob_interfaces__msg__ME439PointXYZ * msg)
{
  if (!msg) {
    return false;
  }
  // xyz
  return true;
}

void
xarmrob_interfaces__msg__ME439PointXYZ__fini(xarmrob_interfaces__msg__ME439PointXYZ * msg)
{
  if (!msg) {
    return;
  }
  // xyz
}

bool
xarmrob_interfaces__msg__ME439PointXYZ__are_equal(const xarmrob_interfaces__msg__ME439PointXYZ * lhs, const xarmrob_interfaces__msg__ME439PointXYZ * rhs)
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
xarmrob_interfaces__msg__ME439PointXYZ__copy(
  const xarmrob_interfaces__msg__ME439PointXYZ * input,
  xarmrob_interfaces__msg__ME439PointXYZ * output)
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

xarmrob_interfaces__msg__ME439PointXYZ *
xarmrob_interfaces__msg__ME439PointXYZ__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__msg__ME439PointXYZ * msg = (xarmrob_interfaces__msg__ME439PointXYZ *)allocator.allocate(sizeof(xarmrob_interfaces__msg__ME439PointXYZ), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__msg__ME439PointXYZ));
  bool success = xarmrob_interfaces__msg__ME439PointXYZ__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__msg__ME439PointXYZ__destroy(xarmrob_interfaces__msg__ME439PointXYZ * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__msg__ME439PointXYZ__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__msg__ME439PointXYZ__Sequence__init(xarmrob_interfaces__msg__ME439PointXYZ__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__msg__ME439PointXYZ * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__msg__ME439PointXYZ *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__msg__ME439PointXYZ), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__msg__ME439PointXYZ__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__msg__ME439PointXYZ__fini(&data[i - 1]);
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
xarmrob_interfaces__msg__ME439PointXYZ__Sequence__fini(xarmrob_interfaces__msg__ME439PointXYZ__Sequence * array)
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
      xarmrob_interfaces__msg__ME439PointXYZ__fini(&array->data[i]);
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

xarmrob_interfaces__msg__ME439PointXYZ__Sequence *
xarmrob_interfaces__msg__ME439PointXYZ__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__msg__ME439PointXYZ__Sequence * array = (xarmrob_interfaces__msg__ME439PointXYZ__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__msg__ME439PointXYZ__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__msg__ME439PointXYZ__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__msg__ME439PointXYZ__Sequence__destroy(xarmrob_interfaces__msg__ME439PointXYZ__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__msg__ME439PointXYZ__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__msg__ME439PointXYZ__Sequence__are_equal(const xarmrob_interfaces__msg__ME439PointXYZ__Sequence * lhs, const xarmrob_interfaces__msg__ME439PointXYZ__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__msg__ME439PointXYZ__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__msg__ME439PointXYZ__Sequence__copy(
  const xarmrob_interfaces__msg__ME439PointXYZ__Sequence * input,
  xarmrob_interfaces__msg__ME439PointXYZ__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__msg__ME439PointXYZ);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__msg__ME439PointXYZ * data =
      (xarmrob_interfaces__msg__ME439PointXYZ *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__msg__ME439PointXYZ__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__msg__ME439PointXYZ__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__msg__ME439PointXYZ__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
