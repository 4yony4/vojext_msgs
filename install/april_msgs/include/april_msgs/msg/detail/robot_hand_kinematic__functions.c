// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/RobotHandKinematic.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/robot_hand_kinematic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
// Member `forces`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__RobotHandKinematic__init(april_msgs__msg__RobotHandKinematic * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__RobotHandKinematic__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__String__init(&msg->position)) {
    april_msgs__msg__RobotHandKinematic__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__String__init(&msg->velocity)) {
    april_msgs__msg__RobotHandKinematic__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__String__init(&msg->acceleration)) {
    april_msgs__msg__RobotHandKinematic__fini(msg);
    return false;
  }
  // forces
  if (!rosidl_runtime_c__String__init(&msg->forces)) {
    april_msgs__msg__RobotHandKinematic__fini(msg);
    return false;
  }
  return true;
}

void
april_msgs__msg__RobotHandKinematic__fini(april_msgs__msg__RobotHandKinematic * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  rosidl_runtime_c__String__fini(&msg->position);
  // velocity
  rosidl_runtime_c__String__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__String__fini(&msg->acceleration);
  // forces
  rosidl_runtime_c__String__fini(&msg->forces);
}

bool
april_msgs__msg__RobotHandKinematic__are_equal(const april_msgs__msg__RobotHandKinematic * lhs, const april_msgs__msg__RobotHandKinematic * rhs)
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
  // position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // forces
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->forces), &(rhs->forces)))
  {
    return false;
  }
  return true;
}

bool
april_msgs__msg__RobotHandKinematic__copy(
  const april_msgs__msg__RobotHandKinematic * input,
  april_msgs__msg__RobotHandKinematic * output)
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
  // position
  if (!rosidl_runtime_c__String__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // forces
  if (!rosidl_runtime_c__String__copy(
      &(input->forces), &(output->forces)))
  {
    return false;
  }
  return true;
}

april_msgs__msg__RobotHandKinematic *
april_msgs__msg__RobotHandKinematic__create()
{
  april_msgs__msg__RobotHandKinematic * msg = (april_msgs__msg__RobotHandKinematic *)malloc(sizeof(april_msgs__msg__RobotHandKinematic));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__RobotHandKinematic));
  bool success = april_msgs__msg__RobotHandKinematic__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__RobotHandKinematic__destroy(april_msgs__msg__RobotHandKinematic * msg)
{
  if (msg) {
    april_msgs__msg__RobotHandKinematic__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__RobotHandKinematic__Sequence__init(april_msgs__msg__RobotHandKinematic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__RobotHandKinematic * data = NULL;
  if (size) {
    data = (april_msgs__msg__RobotHandKinematic *)calloc(size, sizeof(april_msgs__msg__RobotHandKinematic));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__RobotHandKinematic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__RobotHandKinematic__fini(&data[i - 1]);
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
april_msgs__msg__RobotHandKinematic__Sequence__fini(april_msgs__msg__RobotHandKinematic__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__RobotHandKinematic__fini(&array->data[i]);
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

april_msgs__msg__RobotHandKinematic__Sequence *
april_msgs__msg__RobotHandKinematic__Sequence__create(size_t size)
{
  april_msgs__msg__RobotHandKinematic__Sequence * array = (april_msgs__msg__RobotHandKinematic__Sequence *)malloc(sizeof(april_msgs__msg__RobotHandKinematic__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__RobotHandKinematic__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__RobotHandKinematic__Sequence__destroy(april_msgs__msg__RobotHandKinematic__Sequence * array)
{
  if (array) {
    april_msgs__msg__RobotHandKinematic__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__RobotHandKinematic__Sequence__are_equal(const april_msgs__msg__RobotHandKinematic__Sequence * lhs, const april_msgs__msg__RobotHandKinematic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__RobotHandKinematic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__RobotHandKinematic__Sequence__copy(
  const april_msgs__msg__RobotHandKinematic__Sequence * input,
  april_msgs__msg__RobotHandKinematic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__RobotHandKinematic);
    april_msgs__msg__RobotHandKinematic * data =
      (april_msgs__msg__RobotHandKinematic *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__RobotHandKinematic__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__RobotHandKinematic__fini(&data[i]);
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
    if (!april_msgs__msg__RobotHandKinematic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
