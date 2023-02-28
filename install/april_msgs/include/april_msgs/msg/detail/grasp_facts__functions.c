// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/GraspFacts.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/grasp_facts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `grasp_type`
// Member `grasp_location`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__GraspFacts__init(april_msgs__msg__GraspFacts * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__GraspFacts__fini(msg);
    return false;
  }
  // grasp_type
  if (!rosidl_runtime_c__String__init(&msg->grasp_type)) {
    april_msgs__msg__GraspFacts__fini(msg);
    return false;
  }
  // grasp_location
  if (!rosidl_runtime_c__String__init(&msg->grasp_location)) {
    april_msgs__msg__GraspFacts__fini(msg);
    return false;
  }
  // grasp_dimension
  return true;
}

void
april_msgs__msg__GraspFacts__fini(april_msgs__msg__GraspFacts * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // grasp_type
  rosidl_runtime_c__String__fini(&msg->grasp_type);
  // grasp_location
  rosidl_runtime_c__String__fini(&msg->grasp_location);
  // grasp_dimension
}

bool
april_msgs__msg__GraspFacts__are_equal(const april_msgs__msg__GraspFacts * lhs, const april_msgs__msg__GraspFacts * rhs)
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
  // grasp_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grasp_type), &(rhs->grasp_type)))
  {
    return false;
  }
  // grasp_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grasp_location), &(rhs->grasp_location)))
  {
    return false;
  }
  // grasp_dimension
  if (lhs->grasp_dimension != rhs->grasp_dimension) {
    return false;
  }
  return true;
}

bool
april_msgs__msg__GraspFacts__copy(
  const april_msgs__msg__GraspFacts * input,
  april_msgs__msg__GraspFacts * output)
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
  // grasp_type
  if (!rosidl_runtime_c__String__copy(
      &(input->grasp_type), &(output->grasp_type)))
  {
    return false;
  }
  // grasp_location
  if (!rosidl_runtime_c__String__copy(
      &(input->grasp_location), &(output->grasp_location)))
  {
    return false;
  }
  // grasp_dimension
  output->grasp_dimension = input->grasp_dimension;
  return true;
}

april_msgs__msg__GraspFacts *
april_msgs__msg__GraspFacts__create()
{
  april_msgs__msg__GraspFacts * msg = (april_msgs__msg__GraspFacts *)malloc(sizeof(april_msgs__msg__GraspFacts));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__GraspFacts));
  bool success = april_msgs__msg__GraspFacts__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__GraspFacts__destroy(april_msgs__msg__GraspFacts * msg)
{
  if (msg) {
    april_msgs__msg__GraspFacts__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__GraspFacts__Sequence__init(april_msgs__msg__GraspFacts__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__GraspFacts * data = NULL;
  if (size) {
    data = (april_msgs__msg__GraspFacts *)calloc(size, sizeof(april_msgs__msg__GraspFacts));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__GraspFacts__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__GraspFacts__fini(&data[i - 1]);
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
april_msgs__msg__GraspFacts__Sequence__fini(april_msgs__msg__GraspFacts__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__GraspFacts__fini(&array->data[i]);
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

april_msgs__msg__GraspFacts__Sequence *
april_msgs__msg__GraspFacts__Sequence__create(size_t size)
{
  april_msgs__msg__GraspFacts__Sequence * array = (april_msgs__msg__GraspFacts__Sequence *)malloc(sizeof(april_msgs__msg__GraspFacts__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__GraspFacts__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__GraspFacts__Sequence__destroy(april_msgs__msg__GraspFacts__Sequence * array)
{
  if (array) {
    april_msgs__msg__GraspFacts__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__GraspFacts__Sequence__are_equal(const april_msgs__msg__GraspFacts__Sequence * lhs, const april_msgs__msg__GraspFacts__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__GraspFacts__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__GraspFacts__Sequence__copy(
  const april_msgs__msg__GraspFacts__Sequence * input,
  april_msgs__msg__GraspFacts__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__GraspFacts);
    april_msgs__msg__GraspFacts * data =
      (april_msgs__msg__GraspFacts *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__GraspFacts__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__GraspFacts__fini(&data[i]);
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
    if (!april_msgs__msg__GraspFacts__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
