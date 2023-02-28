// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/fatigue_analysis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fatigue_values`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__FatigueAnalysis__init(april_msgs__msg__FatigueAnalysis * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__FatigueAnalysis__fini(msg);
    return false;
  }
  // fatigue_values
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->fatigue_values[i])) {
      april_msgs__msg__FatigueAnalysis__fini(msg);
      return false;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->fatigue_values[0], "low");
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->fatigue_values[1], "medium");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->fatigue_values[2], "high");
    if (!success) {
      goto abort_init_2;
    }
  }
  return true;
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->fatigue_values[1]);
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->fatigue_values[0]);
abort_init_0:
  return false;
}

void
april_msgs__msg__FatigueAnalysis__fini(april_msgs__msg__FatigueAnalysis * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fatigue_values
  for (size_t i = 0; i < 3; ++i) {
    rosidl_runtime_c__String__fini(&msg->fatigue_values[i]);
  }
}

bool
april_msgs__msg__FatigueAnalysis__are_equal(const april_msgs__msg__FatigueAnalysis * lhs, const april_msgs__msg__FatigueAnalysis * rhs)
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
  // fatigue_values
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->fatigue_values[i]), &(rhs->fatigue_values[i])))
    {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__FatigueAnalysis__copy(
  const april_msgs__msg__FatigueAnalysis * input,
  april_msgs__msg__FatigueAnalysis * output)
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
  // fatigue_values
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->fatigue_values[i]), &(output->fatigue_values[i])))
    {
      return false;
    }
  }
  return true;
}

april_msgs__msg__FatigueAnalysis *
april_msgs__msg__FatigueAnalysis__create()
{
  april_msgs__msg__FatigueAnalysis * msg = (april_msgs__msg__FatigueAnalysis *)malloc(sizeof(april_msgs__msg__FatigueAnalysis));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__FatigueAnalysis));
  bool success = april_msgs__msg__FatigueAnalysis__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__FatigueAnalysis__destroy(april_msgs__msg__FatigueAnalysis * msg)
{
  if (msg) {
    april_msgs__msg__FatigueAnalysis__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__FatigueAnalysis__Sequence__init(april_msgs__msg__FatigueAnalysis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__FatigueAnalysis * data = NULL;
  if (size) {
    data = (april_msgs__msg__FatigueAnalysis *)calloc(size, sizeof(april_msgs__msg__FatigueAnalysis));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__FatigueAnalysis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__FatigueAnalysis__fini(&data[i - 1]);
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
april_msgs__msg__FatigueAnalysis__Sequence__fini(april_msgs__msg__FatigueAnalysis__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__FatigueAnalysis__fini(&array->data[i]);
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

april_msgs__msg__FatigueAnalysis__Sequence *
april_msgs__msg__FatigueAnalysis__Sequence__create(size_t size)
{
  april_msgs__msg__FatigueAnalysis__Sequence * array = (april_msgs__msg__FatigueAnalysis__Sequence *)malloc(sizeof(april_msgs__msg__FatigueAnalysis__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__FatigueAnalysis__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__FatigueAnalysis__Sequence__destroy(april_msgs__msg__FatigueAnalysis__Sequence * array)
{
  if (array) {
    april_msgs__msg__FatigueAnalysis__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__FatigueAnalysis__Sequence__are_equal(const april_msgs__msg__FatigueAnalysis__Sequence * lhs, const april_msgs__msg__FatigueAnalysis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__FatigueAnalysis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__FatigueAnalysis__Sequence__copy(
  const april_msgs__msg__FatigueAnalysis__Sequence * input,
  april_msgs__msg__FatigueAnalysis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__FatigueAnalysis);
    april_msgs__msg__FatigueAnalysis * data =
      (april_msgs__msg__FatigueAnalysis *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__FatigueAnalysis__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__FatigueAnalysis__fini(&data[i]);
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
    if (!april_msgs__msg__FatigueAnalysis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
