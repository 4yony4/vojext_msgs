// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
april_msgs__msg__BoundingBox__init(april_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // xmin
  // ymin
  // xmax
  // ymax
  return true;
}

void
april_msgs__msg__BoundingBox__fini(april_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // xmin
  // ymin
  // xmax
  // ymax
}

bool
april_msgs__msg__BoundingBox__are_equal(const april_msgs__msg__BoundingBox * lhs, const april_msgs__msg__BoundingBox * rhs)
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
  // xmin
  if (lhs->xmin != rhs->xmin) {
    return false;
  }
  // ymin
  if (lhs->ymin != rhs->ymin) {
    return false;
  }
  // xmax
  if (lhs->xmax != rhs->xmax) {
    return false;
  }
  // ymax
  if (lhs->ymax != rhs->ymax) {
    return false;
  }
  return true;
}

bool
april_msgs__msg__BoundingBox__copy(
  const april_msgs__msg__BoundingBox * input,
  april_msgs__msg__BoundingBox * output)
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
  // xmin
  output->xmin = input->xmin;
  // ymin
  output->ymin = input->ymin;
  // xmax
  output->xmax = input->xmax;
  // ymax
  output->ymax = input->ymax;
  return true;
}

april_msgs__msg__BoundingBox *
april_msgs__msg__BoundingBox__create()
{
  april_msgs__msg__BoundingBox * msg = (april_msgs__msg__BoundingBox *)malloc(sizeof(april_msgs__msg__BoundingBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__BoundingBox));
  bool success = april_msgs__msg__BoundingBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__BoundingBox__destroy(april_msgs__msg__BoundingBox * msg)
{
  if (msg) {
    april_msgs__msg__BoundingBox__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__BoundingBox__Sequence__init(april_msgs__msg__BoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__BoundingBox * data = NULL;
  if (size) {
    data = (april_msgs__msg__BoundingBox *)calloc(size, sizeof(april_msgs__msg__BoundingBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__BoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__BoundingBox__fini(&data[i - 1]);
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
april_msgs__msg__BoundingBox__Sequence__fini(april_msgs__msg__BoundingBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__BoundingBox__fini(&array->data[i]);
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

april_msgs__msg__BoundingBox__Sequence *
april_msgs__msg__BoundingBox__Sequence__create(size_t size)
{
  april_msgs__msg__BoundingBox__Sequence * array = (april_msgs__msg__BoundingBox__Sequence *)malloc(sizeof(april_msgs__msg__BoundingBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__BoundingBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__BoundingBox__Sequence__destroy(april_msgs__msg__BoundingBox__Sequence * array)
{
  if (array) {
    april_msgs__msg__BoundingBox__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__BoundingBox__Sequence__are_equal(const april_msgs__msg__BoundingBox__Sequence * lhs, const april_msgs__msg__BoundingBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__BoundingBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__BoundingBox__Sequence__copy(
  const april_msgs__msg__BoundingBox__Sequence * input,
  april_msgs__msg__BoundingBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__BoundingBox);
    april_msgs__msg__BoundingBox * data =
      (april_msgs__msg__BoundingBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__BoundingBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__BoundingBox__fini(&data[i]);
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
    if (!april_msgs__msg__BoundingBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
