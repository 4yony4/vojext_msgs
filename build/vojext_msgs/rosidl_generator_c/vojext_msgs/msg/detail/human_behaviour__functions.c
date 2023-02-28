// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/human_behaviour__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `body_posture`
#include "rosidl_runtime_c/string_functions.h"
// Member `humamgrasping_list`
#include "vojext_msgs/msg/detail/human_grasping_strategies__functions.h"

bool
vojext_msgs__msg__HumanBehaviour__init(vojext_msgs__msg__HumanBehaviour * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__HumanBehaviour__fini(msg);
    return false;
  }
  // body_posture
  if (!rosidl_runtime_c__String__init(&msg->body_posture)) {
    vojext_msgs__msg__HumanBehaviour__fini(msg);
    return false;
  }
  // humamgrasping_list
  if (!vojext_msgs__msg__HumanGraspingStrategies__Sequence__init(&msg->humamgrasping_list, 0)) {
    vojext_msgs__msg__HumanBehaviour__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__HumanBehaviour__fini(vojext_msgs__msg__HumanBehaviour * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // body_posture
  rosidl_runtime_c__String__fini(&msg->body_posture);
  // humamgrasping_list
  vojext_msgs__msg__HumanGraspingStrategies__Sequence__fini(&msg->humamgrasping_list);
}

bool
vojext_msgs__msg__HumanBehaviour__are_equal(const vojext_msgs__msg__HumanBehaviour * lhs, const vojext_msgs__msg__HumanBehaviour * rhs)
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
  // body_posture
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_posture), &(rhs->body_posture)))
  {
    return false;
  }
  // humamgrasping_list
  if (!vojext_msgs__msg__HumanGraspingStrategies__Sequence__are_equal(
      &(lhs->humamgrasping_list), &(rhs->humamgrasping_list)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__HumanBehaviour__copy(
  const vojext_msgs__msg__HumanBehaviour * input,
  vojext_msgs__msg__HumanBehaviour * output)
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
  // body_posture
  if (!rosidl_runtime_c__String__copy(
      &(input->body_posture), &(output->body_posture)))
  {
    return false;
  }
  // humamgrasping_list
  if (!vojext_msgs__msg__HumanGraspingStrategies__Sequence__copy(
      &(input->humamgrasping_list), &(output->humamgrasping_list)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__HumanBehaviour *
vojext_msgs__msg__HumanBehaviour__create()
{
  vojext_msgs__msg__HumanBehaviour * msg = (vojext_msgs__msg__HumanBehaviour *)malloc(sizeof(vojext_msgs__msg__HumanBehaviour));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__HumanBehaviour));
  bool success = vojext_msgs__msg__HumanBehaviour__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__HumanBehaviour__destroy(vojext_msgs__msg__HumanBehaviour * msg)
{
  if (msg) {
    vojext_msgs__msg__HumanBehaviour__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__HumanBehaviour__Sequence__init(vojext_msgs__msg__HumanBehaviour__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__HumanBehaviour * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__HumanBehaviour *)calloc(size, sizeof(vojext_msgs__msg__HumanBehaviour));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__HumanBehaviour__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__HumanBehaviour__fini(&data[i - 1]);
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
vojext_msgs__msg__HumanBehaviour__Sequence__fini(vojext_msgs__msg__HumanBehaviour__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__HumanBehaviour__fini(&array->data[i]);
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

vojext_msgs__msg__HumanBehaviour__Sequence *
vojext_msgs__msg__HumanBehaviour__Sequence__create(size_t size)
{
  vojext_msgs__msg__HumanBehaviour__Sequence * array = (vojext_msgs__msg__HumanBehaviour__Sequence *)malloc(sizeof(vojext_msgs__msg__HumanBehaviour__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__HumanBehaviour__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__HumanBehaviour__Sequence__destroy(vojext_msgs__msg__HumanBehaviour__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__HumanBehaviour__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__HumanBehaviour__Sequence__are_equal(const vojext_msgs__msg__HumanBehaviour__Sequence * lhs, const vojext_msgs__msg__HumanBehaviour__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__HumanBehaviour__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__HumanBehaviour__Sequence__copy(
  const vojext_msgs__msg__HumanBehaviour__Sequence * input,
  vojext_msgs__msg__HumanBehaviour__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__HumanBehaviour);
    vojext_msgs__msg__HumanBehaviour * data =
      (vojext_msgs__msg__HumanBehaviour *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__HumanBehaviour__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__HumanBehaviour__fini(&data[i]);
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
    if (!vojext_msgs__msg__HumanBehaviour__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
