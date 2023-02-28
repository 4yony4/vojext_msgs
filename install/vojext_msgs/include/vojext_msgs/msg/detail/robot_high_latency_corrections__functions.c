// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/robot_high_latency_corrections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `action`
// Member `description`
// Member `cause`
#include "rosidl_runtime_c/string_functions.h"

bool
vojext_msgs__msg__RobotHighLatencyCorrections__init(vojext_msgs__msg__RobotHighLatencyCorrections * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__RobotHighLatencyCorrections__fini(msg);
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__init(&msg->action, 0)) {
    vojext_msgs__msg__RobotHighLatencyCorrections__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    vojext_msgs__msg__RobotHighLatencyCorrections__fini(msg);
    return false;
  }
  // cause
  if (!rosidl_runtime_c__String__init(&msg->cause)) {
    vojext_msgs__msg__RobotHighLatencyCorrections__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__RobotHighLatencyCorrections__fini(vojext_msgs__msg__RobotHighLatencyCorrections * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // action
  rosidl_runtime_c__String__Sequence__fini(&msg->action);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // cause
  rosidl_runtime_c__String__fini(&msg->cause);
}

bool
vojext_msgs__msg__RobotHighLatencyCorrections__are_equal(const vojext_msgs__msg__RobotHighLatencyCorrections * lhs, const vojext_msgs__msg__RobotHighLatencyCorrections * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // cause
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cause), &(rhs->cause)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__RobotHighLatencyCorrections__copy(
  const vojext_msgs__msg__RobotHighLatencyCorrections * input,
  vojext_msgs__msg__RobotHighLatencyCorrections * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // cause
  if (!rosidl_runtime_c__String__copy(
      &(input->cause), &(output->cause)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__RobotHighLatencyCorrections *
vojext_msgs__msg__RobotHighLatencyCorrections__create()
{
  vojext_msgs__msg__RobotHighLatencyCorrections * msg = (vojext_msgs__msg__RobotHighLatencyCorrections *)malloc(sizeof(vojext_msgs__msg__RobotHighLatencyCorrections));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__RobotHighLatencyCorrections));
  bool success = vojext_msgs__msg__RobotHighLatencyCorrections__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__RobotHighLatencyCorrections__destroy(vojext_msgs__msg__RobotHighLatencyCorrections * msg)
{
  if (msg) {
    vojext_msgs__msg__RobotHighLatencyCorrections__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__init(vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__RobotHighLatencyCorrections * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__RobotHighLatencyCorrections *)calloc(size, sizeof(vojext_msgs__msg__RobotHighLatencyCorrections));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__RobotHighLatencyCorrections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__RobotHighLatencyCorrections__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__fini(vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__RobotHighLatencyCorrections__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vojext_msgs__msg__RobotHighLatencyCorrections__Sequence *
vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__create(size_t size)
{
  vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * array = (vojext_msgs__msg__RobotHighLatencyCorrections__Sequence *)malloc(sizeof(vojext_msgs__msg__RobotHighLatencyCorrections__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__destroy(vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__are_equal(const vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * lhs, const vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__RobotHighLatencyCorrections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__RobotHighLatencyCorrections__Sequence__copy(
  const vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * input,
  vojext_msgs__msg__RobotHighLatencyCorrections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__RobotHighLatencyCorrections);
    vojext_msgs__msg__RobotHighLatencyCorrections * data =
      (vojext_msgs__msg__RobotHighLatencyCorrections *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__RobotHighLatencyCorrections__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__RobotHighLatencyCorrections__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vojext_msgs__msg__RobotHighLatencyCorrections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
