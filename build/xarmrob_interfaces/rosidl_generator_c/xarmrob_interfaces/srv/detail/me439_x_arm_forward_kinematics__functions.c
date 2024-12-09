// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
// generated code does not contain a copyright notice
#include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joint_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__init(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_angles, 0)) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_angles
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_angles);
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__are_equal(const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * lhs, const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_angles), &(rhs->joint_angles)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__copy(
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * input,
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_angles), &(output->joint_angles)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * msg = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)allocator.allocate(sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request));
  bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__destroy(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__init(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(&data[i - 1]);
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
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__fini(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * array)
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
      xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(&array->data[i]);
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

xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * array = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__destroy(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__are_equal(const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * lhs, const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__copy(
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * input,
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request * data =
      (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_angles`
// Member `endpoint`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__init(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_angles, 0)) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(msg);
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__float__Sequence__init(&msg->endpoint, 0)) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(msg);
    return false;
  }
  // modified
  msg->modified = false;
  return true;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_angles
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_angles);
  // endpoint
  rosidl_runtime_c__float__Sequence__fini(&msg->endpoint);
  // modified
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__are_equal(const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * lhs, const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_angles), &(rhs->joint_angles)))
  {
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  // modified
  if (lhs->modified != rhs->modified) {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__copy(
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * input,
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_angles), &(output->joint_angles)))
  {
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // modified
  output->modified = input->modified;
  return true;
}

xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * msg = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)allocator.allocate(sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response));
  bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__destroy(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__init(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(&data[i - 1]);
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
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__fini(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * array)
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
      xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(&array->data[i]);
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

xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * array = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__destroy(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__are_equal(const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * lhs, const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__copy(
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * input,
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response * data =
      (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__copy(
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
// #include "xarmrob_interfaces/srv/detail/me439_x_arm_forward_kinematics__functions.h"

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__init(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(msg);
    return false;
  }
  // request
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__init(&msg->request, 0)) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(msg);
    return false;
  }
  // response
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__init(&msg->response, 0)) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(msg);
    return false;
  }
  return true;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__fini(&msg->request);
  // response
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__fini(&msg->response);
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__are_equal(const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * lhs, const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * rhs)
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
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__copy(
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * input,
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * output)
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
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * msg = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event *)allocator.allocate(sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event));
  bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__destroy(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__init(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * data = NULL;

  if (size) {
    data = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event *)allocator.zero_allocate(size, sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(&data[i - 1]);
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
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__fini(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * array)
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
      xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(&array->data[i]);
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

xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence *
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * array = (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence *)allocator.allocate(sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__destroy(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__are_equal(const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * lhs, const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence__copy(
  const xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * input,
  xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event * data =
      (xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarmrob_interfaces__srv__ME439XArmForwardKinematics_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
