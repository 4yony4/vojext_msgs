// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/detected_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detected_objects`
#include "vojext_msgs/msg/detail/detected_object__functions.h"
// Member `rgb_image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
vojext_msgs__msg__DetectedObjects__init(vojext_msgs__msg__DetectedObjects * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__DetectedObjects__fini(msg);
    return false;
  }
  // detected_objects
  if (!vojext_msgs__msg__DetectedObject__Sequence__init(&msg->detected_objects, 0)) {
    vojext_msgs__msg__DetectedObjects__fini(msg);
    return false;
  }
  // rgb_image
  if (!sensor_msgs__msg__Image__init(&msg->rgb_image)) {
    vojext_msgs__msg__DetectedObjects__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__DetectedObjects__fini(vojext_msgs__msg__DetectedObjects * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detected_objects
  vojext_msgs__msg__DetectedObject__Sequence__fini(&msg->detected_objects);
  // rgb_image
  sensor_msgs__msg__Image__fini(&msg->rgb_image);
}

bool
vojext_msgs__msg__DetectedObjects__are_equal(const vojext_msgs__msg__DetectedObjects * lhs, const vojext_msgs__msg__DetectedObjects * rhs)
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
  // detected_objects
  if (!vojext_msgs__msg__DetectedObject__Sequence__are_equal(
      &(lhs->detected_objects), &(rhs->detected_objects)))
  {
    return false;
  }
  // rgb_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->rgb_image), &(rhs->rgb_image)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__DetectedObjects__copy(
  const vojext_msgs__msg__DetectedObjects * input,
  vojext_msgs__msg__DetectedObjects * output)
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
  // detected_objects
  if (!vojext_msgs__msg__DetectedObject__Sequence__copy(
      &(input->detected_objects), &(output->detected_objects)))
  {
    return false;
  }
  // rgb_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->rgb_image), &(output->rgb_image)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__DetectedObjects *
vojext_msgs__msg__DetectedObjects__create()
{
  vojext_msgs__msg__DetectedObjects * msg = (vojext_msgs__msg__DetectedObjects *)malloc(sizeof(vojext_msgs__msg__DetectedObjects));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__DetectedObjects));
  bool success = vojext_msgs__msg__DetectedObjects__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__DetectedObjects__destroy(vojext_msgs__msg__DetectedObjects * msg)
{
  if (msg) {
    vojext_msgs__msg__DetectedObjects__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__DetectedObjects__Sequence__init(vojext_msgs__msg__DetectedObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__DetectedObjects * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__DetectedObjects *)calloc(size, sizeof(vojext_msgs__msg__DetectedObjects));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__DetectedObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__DetectedObjects__fini(&data[i - 1]);
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
vojext_msgs__msg__DetectedObjects__Sequence__fini(vojext_msgs__msg__DetectedObjects__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__DetectedObjects__fini(&array->data[i]);
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

vojext_msgs__msg__DetectedObjects__Sequence *
vojext_msgs__msg__DetectedObjects__Sequence__create(size_t size)
{
  vojext_msgs__msg__DetectedObjects__Sequence * array = (vojext_msgs__msg__DetectedObjects__Sequence *)malloc(sizeof(vojext_msgs__msg__DetectedObjects__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__DetectedObjects__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__DetectedObjects__Sequence__destroy(vojext_msgs__msg__DetectedObjects__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__DetectedObjects__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__DetectedObjects__Sequence__are_equal(const vojext_msgs__msg__DetectedObjects__Sequence * lhs, const vojext_msgs__msg__DetectedObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__DetectedObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__DetectedObjects__Sequence__copy(
  const vojext_msgs__msg__DetectedObjects__Sequence * input,
  vojext_msgs__msg__DetectedObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__DetectedObjects);
    vojext_msgs__msg__DetectedObjects * data =
      (vojext_msgs__msg__DetectedObjects *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__DetectedObjects__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__DetectedObjects__fini(&data[i]);
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
    if (!vojext_msgs__msg__DetectedObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
