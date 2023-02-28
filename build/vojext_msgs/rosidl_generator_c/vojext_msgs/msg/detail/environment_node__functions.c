// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/environment_node__functions.h"

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
vojext_msgs__msg__EnvironmentNode__init(vojext_msgs__msg__EnvironmentNode * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  // image_rgb
  if (!sensor_msgs__msg__Image__init(&msg->image_rgb)) {
    vojext_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  // image_3d
  if (!sensor_msgs__msg__PointCloud__init(&msg->image_3d)) {
    vojext_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    vojext_msgs__msg__EnvironmentNode__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__EnvironmentNode__fini(vojext_msgs__msg__EnvironmentNode * msg)
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
vojext_msgs__msg__EnvironmentNode__are_equal(const vojext_msgs__msg__EnvironmentNode * lhs, const vojext_msgs__msg__EnvironmentNode * rhs)
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
vojext_msgs__msg__EnvironmentNode__copy(
  const vojext_msgs__msg__EnvironmentNode * input,
  vojext_msgs__msg__EnvironmentNode * output)
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

vojext_msgs__msg__EnvironmentNode *
vojext_msgs__msg__EnvironmentNode__create()
{
  vojext_msgs__msg__EnvironmentNode * msg = (vojext_msgs__msg__EnvironmentNode *)malloc(sizeof(vojext_msgs__msg__EnvironmentNode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__EnvironmentNode));
  bool success = vojext_msgs__msg__EnvironmentNode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__EnvironmentNode__destroy(vojext_msgs__msg__EnvironmentNode * msg)
{
  if (msg) {
    vojext_msgs__msg__EnvironmentNode__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__EnvironmentNode__Sequence__init(vojext_msgs__msg__EnvironmentNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__EnvironmentNode * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__EnvironmentNode *)calloc(size, sizeof(vojext_msgs__msg__EnvironmentNode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__EnvironmentNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__EnvironmentNode__fini(&data[i - 1]);
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
vojext_msgs__msg__EnvironmentNode__Sequence__fini(vojext_msgs__msg__EnvironmentNode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__EnvironmentNode__fini(&array->data[i]);
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

vojext_msgs__msg__EnvironmentNode__Sequence *
vojext_msgs__msg__EnvironmentNode__Sequence__create(size_t size)
{
  vojext_msgs__msg__EnvironmentNode__Sequence * array = (vojext_msgs__msg__EnvironmentNode__Sequence *)malloc(sizeof(vojext_msgs__msg__EnvironmentNode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__EnvironmentNode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__EnvironmentNode__Sequence__destroy(vojext_msgs__msg__EnvironmentNode__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__EnvironmentNode__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__EnvironmentNode__Sequence__are_equal(const vojext_msgs__msg__EnvironmentNode__Sequence * lhs, const vojext_msgs__msg__EnvironmentNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__EnvironmentNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__EnvironmentNode__Sequence__copy(
  const vojext_msgs__msg__EnvironmentNode__Sequence * input,
  vojext_msgs__msg__EnvironmentNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__EnvironmentNode);
    vojext_msgs__msg__EnvironmentNode * data =
      (vojext_msgs__msg__EnvironmentNode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__EnvironmentNode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__EnvironmentNode__fini(&data[i]);
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
    if (!vojext_msgs__msg__EnvironmentNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
