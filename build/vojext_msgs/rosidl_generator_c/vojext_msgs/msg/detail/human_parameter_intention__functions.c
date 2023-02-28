// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/human_parameter_intention__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `motion_prediction`
#include "rosidl_runtime_c/string_functions.h"
// Member `humanmotion_list`
#include "vojext_msgs/msg/detail/human_motion__functions.h"

bool
vojext_msgs__msg__HumanParameterIntention__init(vojext_msgs__msg__HumanParameterIntention * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__HumanParameterIntention__fini(msg);
    return false;
  }
  // motion_prediction
  if (!rosidl_runtime_c__String__init(&msg->motion_prediction)) {
    vojext_msgs__msg__HumanParameterIntention__fini(msg);
    return false;
  }
  // engagement_level
  // cognitive_level
  // mood_level
  // humanmotion_list
  if (!vojext_msgs__msg__HumanMotion__Sequence__init(&msg->humanmotion_list, 0)) {
    vojext_msgs__msg__HumanParameterIntention__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__HumanParameterIntention__fini(vojext_msgs__msg__HumanParameterIntention * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motion_prediction
  rosidl_runtime_c__String__fini(&msg->motion_prediction);
  // engagement_level
  // cognitive_level
  // mood_level
  // humanmotion_list
  vojext_msgs__msg__HumanMotion__Sequence__fini(&msg->humanmotion_list);
}

bool
vojext_msgs__msg__HumanParameterIntention__are_equal(const vojext_msgs__msg__HumanParameterIntention * lhs, const vojext_msgs__msg__HumanParameterIntention * rhs)
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
  // motion_prediction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motion_prediction), &(rhs->motion_prediction)))
  {
    return false;
  }
  // engagement_level
  if (lhs->engagement_level != rhs->engagement_level) {
    return false;
  }
  // cognitive_level
  if (lhs->cognitive_level != rhs->cognitive_level) {
    return false;
  }
  // mood_level
  if (lhs->mood_level != rhs->mood_level) {
    return false;
  }
  // humanmotion_list
  if (!vojext_msgs__msg__HumanMotion__Sequence__are_equal(
      &(lhs->humanmotion_list), &(rhs->humanmotion_list)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__HumanParameterIntention__copy(
  const vojext_msgs__msg__HumanParameterIntention * input,
  vojext_msgs__msg__HumanParameterIntention * output)
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
  // motion_prediction
  if (!rosidl_runtime_c__String__copy(
      &(input->motion_prediction), &(output->motion_prediction)))
  {
    return false;
  }
  // engagement_level
  output->engagement_level = input->engagement_level;
  // cognitive_level
  output->cognitive_level = input->cognitive_level;
  // mood_level
  output->mood_level = input->mood_level;
  // humanmotion_list
  if (!vojext_msgs__msg__HumanMotion__Sequence__copy(
      &(input->humanmotion_list), &(output->humanmotion_list)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__HumanParameterIntention *
vojext_msgs__msg__HumanParameterIntention__create()
{
  vojext_msgs__msg__HumanParameterIntention * msg = (vojext_msgs__msg__HumanParameterIntention *)malloc(sizeof(vojext_msgs__msg__HumanParameterIntention));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__HumanParameterIntention));
  bool success = vojext_msgs__msg__HumanParameterIntention__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__HumanParameterIntention__destroy(vojext_msgs__msg__HumanParameterIntention * msg)
{
  if (msg) {
    vojext_msgs__msg__HumanParameterIntention__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__HumanParameterIntention__Sequence__init(vojext_msgs__msg__HumanParameterIntention__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__HumanParameterIntention * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__HumanParameterIntention *)calloc(size, sizeof(vojext_msgs__msg__HumanParameterIntention));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__HumanParameterIntention__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__HumanParameterIntention__fini(&data[i - 1]);
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
vojext_msgs__msg__HumanParameterIntention__Sequence__fini(vojext_msgs__msg__HumanParameterIntention__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__HumanParameterIntention__fini(&array->data[i]);
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

vojext_msgs__msg__HumanParameterIntention__Sequence *
vojext_msgs__msg__HumanParameterIntention__Sequence__create(size_t size)
{
  vojext_msgs__msg__HumanParameterIntention__Sequence * array = (vojext_msgs__msg__HumanParameterIntention__Sequence *)malloc(sizeof(vojext_msgs__msg__HumanParameterIntention__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__HumanParameterIntention__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__HumanParameterIntention__Sequence__destroy(vojext_msgs__msg__HumanParameterIntention__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__HumanParameterIntention__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__HumanParameterIntention__Sequence__are_equal(const vojext_msgs__msg__HumanParameterIntention__Sequence * lhs, const vojext_msgs__msg__HumanParameterIntention__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__HumanParameterIntention__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__HumanParameterIntention__Sequence__copy(
  const vojext_msgs__msg__HumanParameterIntention__Sequence * input,
  vojext_msgs__msg__HumanParameterIntention__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__HumanParameterIntention);
    vojext_msgs__msg__HumanParameterIntention * data =
      (vojext_msgs__msg__HumanParameterIntention *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__HumanParameterIntention__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__HumanParameterIntention__fini(&data[i]);
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
    if (!vojext_msgs__msg__HumanParameterIntention__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
