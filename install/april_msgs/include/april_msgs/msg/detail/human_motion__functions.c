// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/HumanMotion.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/human_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `hand_position`
// Member `hand_velocity`
// Member `hand_acceleration`
// Member `body_position`
// Member `body_velocity`
// Member `body_acceleration`
// Member `tools_position`
// Member `tools_velocity`
// Member `tools_acceleration`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__HumanMotion__init(april_msgs__msg__HumanMotion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // hand_position
  if (!rosidl_runtime_c__String__init(&msg->hand_position)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // hand_velocity
  if (!rosidl_runtime_c__String__init(&msg->hand_velocity)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // hand_acceleration
  if (!rosidl_runtime_c__String__init(&msg->hand_acceleration)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // body_position
  if (!rosidl_runtime_c__String__init(&msg->body_position)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // body_velocity
  if (!rosidl_runtime_c__String__init(&msg->body_velocity)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // body_acceleration
  if (!rosidl_runtime_c__String__init(&msg->body_acceleration)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // tools_position
  if (!rosidl_runtime_c__String__init(&msg->tools_position)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // tools_velocity
  if (!rosidl_runtime_c__String__init(&msg->tools_velocity)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  // tools_acceleration
  if (!rosidl_runtime_c__String__init(&msg->tools_acceleration)) {
    april_msgs__msg__HumanMotion__fini(msg);
    return false;
  }
  return true;
}

void
april_msgs__msg__HumanMotion__fini(april_msgs__msg__HumanMotion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hand_position
  rosidl_runtime_c__String__fini(&msg->hand_position);
  // hand_velocity
  rosidl_runtime_c__String__fini(&msg->hand_velocity);
  // hand_acceleration
  rosidl_runtime_c__String__fini(&msg->hand_acceleration);
  // body_position
  rosidl_runtime_c__String__fini(&msg->body_position);
  // body_velocity
  rosidl_runtime_c__String__fini(&msg->body_velocity);
  // body_acceleration
  rosidl_runtime_c__String__fini(&msg->body_acceleration);
  // tools_position
  rosidl_runtime_c__String__fini(&msg->tools_position);
  // tools_velocity
  rosidl_runtime_c__String__fini(&msg->tools_velocity);
  // tools_acceleration
  rosidl_runtime_c__String__fini(&msg->tools_acceleration);
}

bool
april_msgs__msg__HumanMotion__are_equal(const april_msgs__msg__HumanMotion * lhs, const april_msgs__msg__HumanMotion * rhs)
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
  // hand_position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_position), &(rhs->hand_position)))
  {
    return false;
  }
  // hand_velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_velocity), &(rhs->hand_velocity)))
  {
    return false;
  }
  // hand_acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_acceleration), &(rhs->hand_acceleration)))
  {
    return false;
  }
  // body_position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_position), &(rhs->body_position)))
  {
    return false;
  }
  // body_velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_velocity), &(rhs->body_velocity)))
  {
    return false;
  }
  // body_acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_acceleration), &(rhs->body_acceleration)))
  {
    return false;
  }
  // tools_position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tools_position), &(rhs->tools_position)))
  {
    return false;
  }
  // tools_velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tools_velocity), &(rhs->tools_velocity)))
  {
    return false;
  }
  // tools_acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tools_acceleration), &(rhs->tools_acceleration)))
  {
    return false;
  }
  return true;
}

bool
april_msgs__msg__HumanMotion__copy(
  const april_msgs__msg__HumanMotion * input,
  april_msgs__msg__HumanMotion * output)
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
  // hand_position
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_position), &(output->hand_position)))
  {
    return false;
  }
  // hand_velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_velocity), &(output->hand_velocity)))
  {
    return false;
  }
  // hand_acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_acceleration), &(output->hand_acceleration)))
  {
    return false;
  }
  // body_position
  if (!rosidl_runtime_c__String__copy(
      &(input->body_position), &(output->body_position)))
  {
    return false;
  }
  // body_velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->body_velocity), &(output->body_velocity)))
  {
    return false;
  }
  // body_acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->body_acceleration), &(output->body_acceleration)))
  {
    return false;
  }
  // tools_position
  if (!rosidl_runtime_c__String__copy(
      &(input->tools_position), &(output->tools_position)))
  {
    return false;
  }
  // tools_velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->tools_velocity), &(output->tools_velocity)))
  {
    return false;
  }
  // tools_acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->tools_acceleration), &(output->tools_acceleration)))
  {
    return false;
  }
  return true;
}

april_msgs__msg__HumanMotion *
april_msgs__msg__HumanMotion__create()
{
  april_msgs__msg__HumanMotion * msg = (april_msgs__msg__HumanMotion *)malloc(sizeof(april_msgs__msg__HumanMotion));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__HumanMotion));
  bool success = april_msgs__msg__HumanMotion__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__HumanMotion__destroy(april_msgs__msg__HumanMotion * msg)
{
  if (msg) {
    april_msgs__msg__HumanMotion__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__HumanMotion__Sequence__init(april_msgs__msg__HumanMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__HumanMotion * data = NULL;
  if (size) {
    data = (april_msgs__msg__HumanMotion *)calloc(size, sizeof(april_msgs__msg__HumanMotion));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__HumanMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__HumanMotion__fini(&data[i - 1]);
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
april_msgs__msg__HumanMotion__Sequence__fini(april_msgs__msg__HumanMotion__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__HumanMotion__fini(&array->data[i]);
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

april_msgs__msg__HumanMotion__Sequence *
april_msgs__msg__HumanMotion__Sequence__create(size_t size)
{
  april_msgs__msg__HumanMotion__Sequence * array = (april_msgs__msg__HumanMotion__Sequence *)malloc(sizeof(april_msgs__msg__HumanMotion__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__HumanMotion__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__HumanMotion__Sequence__destroy(april_msgs__msg__HumanMotion__Sequence * array)
{
  if (array) {
    april_msgs__msg__HumanMotion__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__HumanMotion__Sequence__are_equal(const april_msgs__msg__HumanMotion__Sequence * lhs, const april_msgs__msg__HumanMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__HumanMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__HumanMotion__Sequence__copy(
  const april_msgs__msg__HumanMotion__Sequence * input,
  april_msgs__msg__HumanMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__HumanMotion);
    april_msgs__msg__HumanMotion * data =
      (april_msgs__msg__HumanMotion *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__HumanMotion__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__HumanMotion__fini(&data[i]);
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
    if (!april_msgs__msg__HumanMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
