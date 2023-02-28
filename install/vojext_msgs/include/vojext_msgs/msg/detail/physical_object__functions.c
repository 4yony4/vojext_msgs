// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/PhysicalObject.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/physical_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `shape`
// Member `position`
// Member `orientation`
#include "rosidl_runtime_c/string_functions.h"

bool
vojext_msgs__msg__PhysicalObject__init(vojext_msgs__msg__PhysicalObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__PhysicalObject__fini(msg);
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__init(&msg->shape)) {
    vojext_msgs__msg__PhysicalObject__fini(msg);
    return false;
  }
  // size
  // position
  if (!rosidl_runtime_c__String__init(&msg->position)) {
    vojext_msgs__msg__PhysicalObject__fini(msg);
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__String__init(&msg->orientation)) {
    vojext_msgs__msg__PhysicalObject__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__PhysicalObject__fini(vojext_msgs__msg__PhysicalObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // shape
  rosidl_runtime_c__String__fini(&msg->shape);
  // size
  // position
  rosidl_runtime_c__String__fini(&msg->position);
  // orientation
  rosidl_runtime_c__String__fini(&msg->orientation);
}

bool
vojext_msgs__msg__PhysicalObject__are_equal(const vojext_msgs__msg__PhysicalObject * lhs, const vojext_msgs__msg__PhysicalObject * rhs)
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
  // shape
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__PhysicalObject__copy(
  const vojext_msgs__msg__PhysicalObject * input,
  vojext_msgs__msg__PhysicalObject * output)
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
  // shape
  if (!rosidl_runtime_c__String__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  // size
  output->size = input->size;
  // position
  if (!rosidl_runtime_c__String__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__String__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__PhysicalObject *
vojext_msgs__msg__PhysicalObject__create()
{
  vojext_msgs__msg__PhysicalObject * msg = (vojext_msgs__msg__PhysicalObject *)malloc(sizeof(vojext_msgs__msg__PhysicalObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__PhysicalObject));
  bool success = vojext_msgs__msg__PhysicalObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__PhysicalObject__destroy(vojext_msgs__msg__PhysicalObject * msg)
{
  if (msg) {
    vojext_msgs__msg__PhysicalObject__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__PhysicalObject__Sequence__init(vojext_msgs__msg__PhysicalObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__PhysicalObject * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__PhysicalObject *)calloc(size, sizeof(vojext_msgs__msg__PhysicalObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__PhysicalObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__PhysicalObject__fini(&data[i - 1]);
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
vojext_msgs__msg__PhysicalObject__Sequence__fini(vojext_msgs__msg__PhysicalObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__PhysicalObject__fini(&array->data[i]);
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

vojext_msgs__msg__PhysicalObject__Sequence *
vojext_msgs__msg__PhysicalObject__Sequence__create(size_t size)
{
  vojext_msgs__msg__PhysicalObject__Sequence * array = (vojext_msgs__msg__PhysicalObject__Sequence *)malloc(sizeof(vojext_msgs__msg__PhysicalObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__PhysicalObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__PhysicalObject__Sequence__destroy(vojext_msgs__msg__PhysicalObject__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__PhysicalObject__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__PhysicalObject__Sequence__are_equal(const vojext_msgs__msg__PhysicalObject__Sequence * lhs, const vojext_msgs__msg__PhysicalObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__PhysicalObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__PhysicalObject__Sequence__copy(
  const vojext_msgs__msg__PhysicalObject__Sequence * input,
  vojext_msgs__msg__PhysicalObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__PhysicalObject);
    vojext_msgs__msg__PhysicalObject * data =
      (vojext_msgs__msg__PhysicalObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__PhysicalObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__PhysicalObject__fini(&data[i]);
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
    if (!vojext_msgs__msg__PhysicalObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
