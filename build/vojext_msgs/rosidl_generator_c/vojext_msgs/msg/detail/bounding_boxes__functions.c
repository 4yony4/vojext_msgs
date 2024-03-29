// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/bounding_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
// Member `image_header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bounding_boxes`
#include "vojext_msgs/msg/detail/bounding_box__functions.h"

bool
vojext_msgs__msg__BoundingBoxes__init(vojext_msgs__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // image_header
  if (!std_msgs__msg__Header__init(&msg->image_header)) {
    vojext_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!vojext_msgs__msg__BoundingBox__Sequence__init(&msg->bounding_boxes, 0)) {
    vojext_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__BoundingBoxes__fini(vojext_msgs__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image_header
  std_msgs__msg__Header__fini(&msg->image_header);
  // bounding_boxes
  vojext_msgs__msg__BoundingBox__Sequence__fini(&msg->bounding_boxes);
}

bool
vojext_msgs__msg__BoundingBoxes__are_equal(const vojext_msgs__msg__BoundingBoxes * lhs, const vojext_msgs__msg__BoundingBoxes * rhs)
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
  // image_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->image_header), &(rhs->image_header)))
  {
    return false;
  }
  // bounding_boxes
  if (!vojext_msgs__msg__BoundingBox__Sequence__are_equal(
      &(lhs->bounding_boxes), &(rhs->bounding_boxes)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__BoundingBoxes__copy(
  const vojext_msgs__msg__BoundingBoxes * input,
  vojext_msgs__msg__BoundingBoxes * output)
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
  // image_header
  if (!std_msgs__msg__Header__copy(
      &(input->image_header), &(output->image_header)))
  {
    return false;
  }
  // bounding_boxes
  if (!vojext_msgs__msg__BoundingBox__Sequence__copy(
      &(input->bounding_boxes), &(output->bounding_boxes)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__BoundingBoxes *
vojext_msgs__msg__BoundingBoxes__create()
{
  vojext_msgs__msg__BoundingBoxes * msg = (vojext_msgs__msg__BoundingBoxes *)malloc(sizeof(vojext_msgs__msg__BoundingBoxes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__BoundingBoxes));
  bool success = vojext_msgs__msg__BoundingBoxes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__BoundingBoxes__destroy(vojext_msgs__msg__BoundingBoxes * msg)
{
  if (msg) {
    vojext_msgs__msg__BoundingBoxes__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__BoundingBoxes__Sequence__init(vojext_msgs__msg__BoundingBoxes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__BoundingBoxes * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__BoundingBoxes *)calloc(size, sizeof(vojext_msgs__msg__BoundingBoxes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__BoundingBoxes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__BoundingBoxes__fini(&data[i - 1]);
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
vojext_msgs__msg__BoundingBoxes__Sequence__fini(vojext_msgs__msg__BoundingBoxes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__BoundingBoxes__fini(&array->data[i]);
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

vojext_msgs__msg__BoundingBoxes__Sequence *
vojext_msgs__msg__BoundingBoxes__Sequence__create(size_t size)
{
  vojext_msgs__msg__BoundingBoxes__Sequence * array = (vojext_msgs__msg__BoundingBoxes__Sequence *)malloc(sizeof(vojext_msgs__msg__BoundingBoxes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__BoundingBoxes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__BoundingBoxes__Sequence__destroy(vojext_msgs__msg__BoundingBoxes__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__BoundingBoxes__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__BoundingBoxes__Sequence__are_equal(const vojext_msgs__msg__BoundingBoxes__Sequence * lhs, const vojext_msgs__msg__BoundingBoxes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__BoundingBoxes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__BoundingBoxes__Sequence__copy(
  const vojext_msgs__msg__BoundingBoxes__Sequence * input,
  vojext_msgs__msg__BoundingBoxes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__BoundingBoxes);
    vojext_msgs__msg__BoundingBoxes * data =
      (vojext_msgs__msg__BoundingBoxes *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__BoundingBoxes__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__BoundingBoxes__fini(&data[i]);
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
    if (!vojext_msgs__msg__BoundingBoxes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
