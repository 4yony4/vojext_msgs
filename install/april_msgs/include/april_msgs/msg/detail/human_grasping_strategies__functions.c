// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/human_grasping_strategies__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `type`
// Member `location`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__HumanGraspingStrategies__init(april_msgs__msg__HumanGraspingStrategies * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__HumanGraspingStrategies__fini(msg);
    return false;
  }
  // type
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->type, 3);
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->type.data[0], "power");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->type.data[1], "pinch");
    if (!success) {
      goto abort_init_2;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->type.data[2], "three_fingers");
    if (!success) {
      goto abort_init_3;
    }
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    april_msgs__msg__HumanGraspingStrategies__fini(msg);
    return false;
  }
  return true;
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->type.data[1]);
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->type.data[0]);
abort_init_1:
  rosidl_runtime_c__String__Sequence__fini(&msg->type);
abort_init_0:
  return false;
}

void
april_msgs__msg__HumanGraspingStrategies__fini(april_msgs__msg__HumanGraspingStrategies * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  rosidl_runtime_c__String__Sequence__fini(&msg->type);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
}

bool
april_msgs__msg__HumanGraspingStrategies__are_equal(const april_msgs__msg__HumanGraspingStrategies * lhs, const april_msgs__msg__HumanGraspingStrategies * rhs)
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
  // type
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
april_msgs__msg__HumanGraspingStrategies__copy(
  const april_msgs__msg__HumanGraspingStrategies * input,
  april_msgs__msg__HumanGraspingStrategies * output)
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
  // type
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

april_msgs__msg__HumanGraspingStrategies *
april_msgs__msg__HumanGraspingStrategies__create()
{
  april_msgs__msg__HumanGraspingStrategies * msg = (april_msgs__msg__HumanGraspingStrategies *)malloc(sizeof(april_msgs__msg__HumanGraspingStrategies));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__HumanGraspingStrategies));
  bool success = april_msgs__msg__HumanGraspingStrategies__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__HumanGraspingStrategies__destroy(april_msgs__msg__HumanGraspingStrategies * msg)
{
  if (msg) {
    april_msgs__msg__HumanGraspingStrategies__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__HumanGraspingStrategies__Sequence__init(april_msgs__msg__HumanGraspingStrategies__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__HumanGraspingStrategies * data = NULL;
  if (size) {
    data = (april_msgs__msg__HumanGraspingStrategies *)calloc(size, sizeof(april_msgs__msg__HumanGraspingStrategies));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__HumanGraspingStrategies__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__HumanGraspingStrategies__fini(&data[i - 1]);
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
april_msgs__msg__HumanGraspingStrategies__Sequence__fini(april_msgs__msg__HumanGraspingStrategies__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__HumanGraspingStrategies__fini(&array->data[i]);
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

april_msgs__msg__HumanGraspingStrategies__Sequence *
april_msgs__msg__HumanGraspingStrategies__Sequence__create(size_t size)
{
  april_msgs__msg__HumanGraspingStrategies__Sequence * array = (april_msgs__msg__HumanGraspingStrategies__Sequence *)malloc(sizeof(april_msgs__msg__HumanGraspingStrategies__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__HumanGraspingStrategies__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__HumanGraspingStrategies__Sequence__destroy(april_msgs__msg__HumanGraspingStrategies__Sequence * array)
{
  if (array) {
    april_msgs__msg__HumanGraspingStrategies__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__HumanGraspingStrategies__Sequence__are_equal(const april_msgs__msg__HumanGraspingStrategies__Sequence * lhs, const april_msgs__msg__HumanGraspingStrategies__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__HumanGraspingStrategies__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__HumanGraspingStrategies__Sequence__copy(
  const april_msgs__msg__HumanGraspingStrategies__Sequence * input,
  april_msgs__msg__HumanGraspingStrategies__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__HumanGraspingStrategies);
    april_msgs__msg__HumanGraspingStrategies * data =
      (april_msgs__msg__HumanGraspingStrategies *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__HumanGraspingStrategies__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__HumanGraspingStrategies__fini(&data[i]);
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
    if (!april_msgs__msg__HumanGraspingStrategies__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}