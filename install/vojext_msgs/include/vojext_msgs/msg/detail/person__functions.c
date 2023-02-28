// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/Person.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/person__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `result_dynamic_left`
// Member `result_dynamic_right`
// Member `result_static_left`
// Member `result_static_right`
// Member `final_result_left`
// Member `final_result_right`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_hand`
// Member `right_hand`
#include "vojext_msgs/msg/detail/hand__functions.h"

bool
vojext_msgs__msg__Person__init(vojext_msgs__msg__Person * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // result_dynamic_left
  if (!rosidl_runtime_c__String__init(&msg->result_dynamic_left)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // result_dynamic_right
  if (!rosidl_runtime_c__String__init(&msg->result_dynamic_right)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // result_static_left
  if (!rosidl_runtime_c__String__init(&msg->result_static_left)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // result_static_right
  if (!rosidl_runtime_c__String__init(&msg->result_static_right)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // final_result_left
  if (!rosidl_runtime_c__String__init(&msg->final_result_left)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // final_result_right
  if (!rosidl_runtime_c__String__init(&msg->final_result_right)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // left_hand
  if (!vojext_msgs__msg__Hand__Sequence__init(&msg->left_hand, 0)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  // right_hand
  if (!vojext_msgs__msg__Hand__Sequence__init(&msg->right_hand, 0)) {
    vojext_msgs__msg__Person__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__Person__fini(vojext_msgs__msg__Person * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // result_dynamic_left
  rosidl_runtime_c__String__fini(&msg->result_dynamic_left);
  // result_dynamic_right
  rosidl_runtime_c__String__fini(&msg->result_dynamic_right);
  // result_static_left
  rosidl_runtime_c__String__fini(&msg->result_static_left);
  // result_static_right
  rosidl_runtime_c__String__fini(&msg->result_static_right);
  // final_result_left
  rosidl_runtime_c__String__fini(&msg->final_result_left);
  // final_result_right
  rosidl_runtime_c__String__fini(&msg->final_result_right);
  // left_hand
  vojext_msgs__msg__Hand__Sequence__fini(&msg->left_hand);
  // right_hand
  vojext_msgs__msg__Hand__Sequence__fini(&msg->right_hand);
}

bool
vojext_msgs__msg__Person__are_equal(const vojext_msgs__msg__Person * lhs, const vojext_msgs__msg__Person * rhs)
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
  // result_dynamic_left
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_dynamic_left), &(rhs->result_dynamic_left)))
  {
    return false;
  }
  // result_dynamic_right
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_dynamic_right), &(rhs->result_dynamic_right)))
  {
    return false;
  }
  // result_static_left
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_static_left), &(rhs->result_static_left)))
  {
    return false;
  }
  // result_static_right
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_static_right), &(rhs->result_static_right)))
  {
    return false;
  }
  // final_result_left
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->final_result_left), &(rhs->final_result_left)))
  {
    return false;
  }
  // final_result_right
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->final_result_right), &(rhs->final_result_right)))
  {
    return false;
  }
  // left_hand
  if (!vojext_msgs__msg__Hand__Sequence__are_equal(
      &(lhs->left_hand), &(rhs->left_hand)))
  {
    return false;
  }
  // right_hand
  if (!vojext_msgs__msg__Hand__Sequence__are_equal(
      &(lhs->right_hand), &(rhs->right_hand)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__Person__copy(
  const vojext_msgs__msg__Person * input,
  vojext_msgs__msg__Person * output)
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
  // result_dynamic_left
  if (!rosidl_runtime_c__String__copy(
      &(input->result_dynamic_left), &(output->result_dynamic_left)))
  {
    return false;
  }
  // result_dynamic_right
  if (!rosidl_runtime_c__String__copy(
      &(input->result_dynamic_right), &(output->result_dynamic_right)))
  {
    return false;
  }
  // result_static_left
  if (!rosidl_runtime_c__String__copy(
      &(input->result_static_left), &(output->result_static_left)))
  {
    return false;
  }
  // result_static_right
  if (!rosidl_runtime_c__String__copy(
      &(input->result_static_right), &(output->result_static_right)))
  {
    return false;
  }
  // final_result_left
  if (!rosidl_runtime_c__String__copy(
      &(input->final_result_left), &(output->final_result_left)))
  {
    return false;
  }
  // final_result_right
  if (!rosidl_runtime_c__String__copy(
      &(input->final_result_right), &(output->final_result_right)))
  {
    return false;
  }
  // left_hand
  if (!vojext_msgs__msg__Hand__Sequence__copy(
      &(input->left_hand), &(output->left_hand)))
  {
    return false;
  }
  // right_hand
  if (!vojext_msgs__msg__Hand__Sequence__copy(
      &(input->right_hand), &(output->right_hand)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__Person *
vojext_msgs__msg__Person__create()
{
  vojext_msgs__msg__Person * msg = (vojext_msgs__msg__Person *)malloc(sizeof(vojext_msgs__msg__Person));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__Person));
  bool success = vojext_msgs__msg__Person__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__Person__destroy(vojext_msgs__msg__Person * msg)
{
  if (msg) {
    vojext_msgs__msg__Person__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__Person__Sequence__init(vojext_msgs__msg__Person__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__Person * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__Person *)calloc(size, sizeof(vojext_msgs__msg__Person));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__Person__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__Person__fini(&data[i - 1]);
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
vojext_msgs__msg__Person__Sequence__fini(vojext_msgs__msg__Person__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__Person__fini(&array->data[i]);
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

vojext_msgs__msg__Person__Sequence *
vojext_msgs__msg__Person__Sequence__create(size_t size)
{
  vojext_msgs__msg__Person__Sequence * array = (vojext_msgs__msg__Person__Sequence *)malloc(sizeof(vojext_msgs__msg__Person__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__Person__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__Person__Sequence__destroy(vojext_msgs__msg__Person__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__Person__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__Person__Sequence__are_equal(const vojext_msgs__msg__Person__Sequence * lhs, const vojext_msgs__msg__Person__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__Person__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__Person__Sequence__copy(
  const vojext_msgs__msg__Person__Sequence * input,
  vojext_msgs__msg__Person__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__Person);
    vojext_msgs__msg__Person * data =
      (vojext_msgs__msg__Person *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__Person__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__Person__fini(&data[i]);
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
    if (!vojext_msgs__msg__Person__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
