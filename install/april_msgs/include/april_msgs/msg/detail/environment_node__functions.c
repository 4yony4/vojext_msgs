// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/environment_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `image_rgb`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `image_3d`
#include "sensor_msgs/msg/detail/point_cloud__functions.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
april_msgs__msg__EnvironmentNode__init(april_msgs__msg__EnvironmentNode * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  // image_rgb
  if (!sensor_msgs__msg__Image__init(&msg->image_rgb)) {
    april_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  // image_3d
  if (!sensor_msgs__msg__PointCloud__init(&msg->image_3d)) {
    april_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    april_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  return true;
}

void
april_msgs__msg__EnvironmentNode__fini(april_msgs__msg__EnvironmentNode * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image_rgb
  sensor_msgs__msg__Image__fini(&msg->image_rgb);
  // image_3d
  sensor_msgs__msg__PointCloud__fini(&msg->image_3d);
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
april_msgs__msg__EnvironmentNode__are_equal(const april_msgs__msg__EnvironmentNode * lhs, const april_msgs__msg__EnvironmentNode * rhs)
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
  // image_rgb
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image_rgb), &(rhs->image_rgb)))
  {
    return false;
  }
  // image_3d
  if (!sensor_msgs__msg__PointCloud__are_equal(
      &(lhs->image_3d), &(rhs->image_3d)))
  {
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
april_msgs__msg__EnvironmentNode__copy(
  const april_msgs__msg__EnvironmentNode * input,
  april_msgs__msg__EnvironmentNode * output)
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
  // image_rgb
  if (!sensor_msgs__msg__Image__copy(
      &(input->image_rgb), &(output->image_rgb)))
  {
    return false;
  }
  // image_3d
  if (!sensor_msgs__msg__PointCloud__copy(
      &(input->image_3d), &(output->image_3d)))
  {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

april_msgs__msg__EnvironmentNode *
april_msgs__msg__EnvironmentNode__create()
{
  april_msgs__msg__EnvironmentNode * msg = (april_msgs__msg__EnvironmentNode *)malloc(sizeof(april_msgs__msg__EnvironmentNode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__EnvironmentNode));
  bool success = april_msgs__msg__EnvironmentNode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__EnvironmentNode__destroy(april_msgs__msg__EnvironmentNode * msg)
{
  if (msg) {
    april_msgs__msg__EnvironmentNode__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__EnvironmentNode__Sequence__init(april_msgs__msg__EnvironmentNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__EnvironmentNode * data = NULL;
  if (size) {
    data = (april_msgs__msg__EnvironmentNode *)calloc(size, sizeof(april_msgs__msg__EnvironmentNode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__EnvironmentNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__EnvironmentNode__fini(&data[i - 1]);
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
april_msgs__msg__EnvironmentNode__Sequence__fini(april_msgs__msg__EnvironmentNode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__EnvironmentNode__fini(&array->data[i]);
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

april_msgs__msg__EnvironmentNode__Sequence *
april_msgs__msg__EnvironmentNode__Sequence__create(size_t size)
{
  april_msgs__msg__EnvironmentNode__Sequence * array = (april_msgs__msg__EnvironmentNode__Sequence *)malloc(sizeof(april_msgs__msg__EnvironmentNode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__EnvironmentNode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__EnvironmentNode__Sequence__destroy(april_msgs__msg__EnvironmentNode__Sequence * array)
{
  if (array) {
    april_msgs__msg__EnvironmentNode__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__EnvironmentNode__Sequence__are_equal(const april_msgs__msg__EnvironmentNode__Sequence * lhs, const april_msgs__msg__EnvironmentNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__EnvironmentNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__EnvironmentNode__Sequence__copy(
  const april_msgs__msg__EnvironmentNode__Sequence * input,
  april_msgs__msg__EnvironmentNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__EnvironmentNode);
    april_msgs__msg__EnvironmentNode * data =
      (april_msgs__msg__EnvironmentNode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__EnvironmentNode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__EnvironmentNode__fini(&data[i]);
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
    if (!april_msgs__msg__EnvironmentNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
