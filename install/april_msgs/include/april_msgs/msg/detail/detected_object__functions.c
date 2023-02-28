// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/detected_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bounding_box`
#include "april_msgs/msg/detail/bounding_box__functions.h"
// Member `segmentation_mask`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__DetectedObject__init(april_msgs__msg__DetectedObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  // bounding_box
  if (!april_msgs__msg__BoundingBox__init(&msg->bounding_box)) {
    april_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  // segmentation_mask
  if (!sensor_msgs__msg__Image__init(&msg->segmentation_mask)) {
    april_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  // probability
  // detected_id
  // tracked_id
  // class_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    april_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  return true;
}

void
april_msgs__msg__DetectedObject__fini(april_msgs__msg__DetectedObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bounding_box
  april_msgs__msg__BoundingBox__fini(&msg->bounding_box);
  // segmentation_mask
  sensor_msgs__msg__Image__fini(&msg->segmentation_mask);
  // probability
  // detected_id
  // tracked_id
  // class_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
april_msgs__msg__DetectedObject__are_equal(const april_msgs__msg__DetectedObject * lhs, const april_msgs__msg__DetectedObject * rhs)
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
  // bounding_box
  if (!april_msgs__msg__BoundingBox__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // segmentation_mask
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->segmentation_mask), &(rhs->segmentation_mask)))
  {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // detected_id
  if (lhs->detected_id != rhs->detected_id) {
    return false;
  }
  // tracked_id
  if (lhs->tracked_id != rhs->tracked_id) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  return true;
}

bool
april_msgs__msg__DetectedObject__copy(
  const april_msgs__msg__DetectedObject * input,
  april_msgs__msg__DetectedObject * output)
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
  // bounding_box
  if (!april_msgs__msg__BoundingBox__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // segmentation_mask
  if (!sensor_msgs__msg__Image__copy(
      &(input->segmentation_mask), &(output->segmentation_mask)))
  {
    return false;
  }
  // probability
  output->probability = input->probability;
  // detected_id
  output->detected_id = input->detected_id;
  // tracked_id
  output->tracked_id = input->tracked_id;
  // class_id
  output->class_id = input->class_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

april_msgs__msg__DetectedObject *
april_msgs__msg__DetectedObject__create()
{
  april_msgs__msg__DetectedObject * msg = (april_msgs__msg__DetectedObject *)malloc(sizeof(april_msgs__msg__DetectedObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__DetectedObject));
  bool success = april_msgs__msg__DetectedObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__DetectedObject__destroy(april_msgs__msg__DetectedObject * msg)
{
  if (msg) {
    april_msgs__msg__DetectedObject__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__DetectedObject__Sequence__init(april_msgs__msg__DetectedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__DetectedObject * data = NULL;
  if (size) {
    data = (april_msgs__msg__DetectedObject *)calloc(size, sizeof(april_msgs__msg__DetectedObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__DetectedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__DetectedObject__fini(&data[i - 1]);
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
april_msgs__msg__DetectedObject__Sequence__fini(april_msgs__msg__DetectedObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__DetectedObject__fini(&array->data[i]);
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

april_msgs__msg__DetectedObject__Sequence *
april_msgs__msg__DetectedObject__Sequence__create(size_t size)
{
  april_msgs__msg__DetectedObject__Sequence * array = (april_msgs__msg__DetectedObject__Sequence *)malloc(sizeof(april_msgs__msg__DetectedObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__DetectedObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__DetectedObject__Sequence__destroy(april_msgs__msg__DetectedObject__Sequence * array)
{
  if (array) {
    april_msgs__msg__DetectedObject__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__DetectedObject__Sequence__are_equal(const april_msgs__msg__DetectedObject__Sequence * lhs, const april_msgs__msg__DetectedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__DetectedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__DetectedObject__Sequence__copy(
  const april_msgs__msg__DetectedObject__Sequence * input,
  april_msgs__msg__DetectedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__DetectedObject);
    april_msgs__msg__DetectedObject * data =
      (april_msgs__msg__DetectedObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__DetectedObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__DetectedObject__fini(&data[i]);
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
    if (!april_msgs__msg__DetectedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
