// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/Vjxoutput.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/vjxoutput__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
// Member `velocity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
vojext_msgs__msg__Vjxoutput__init(vojext_msgs__msg__Vjxoutput * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pose, 0)) {
    vojext_msgs__msg__Vjxoutput__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    vojext_msgs__msg__Vjxoutput__fini(msg);
    return false;
  }
  return true;
}

void
vojext_msgs__msg__Vjxoutput__fini(vojext_msgs__msg__Vjxoutput * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // pose
  rosidl_runtime_c__double__Sequence__fini(&msg->pose);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
}

bool
vojext_msgs__msg__Vjxoutput__are_equal(const vojext_msgs__msg__Vjxoutput * lhs, const vojext_msgs__msg__Vjxoutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__Vjxoutput__copy(
  const vojext_msgs__msg__Vjxoutput * input,
  vojext_msgs__msg__Vjxoutput * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // pose
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

vojext_msgs__msg__Vjxoutput *
vojext_msgs__msg__Vjxoutput__create()
{
  vojext_msgs__msg__Vjxoutput * msg = (vojext_msgs__msg__Vjxoutput *)malloc(sizeof(vojext_msgs__msg__Vjxoutput));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__Vjxoutput));
  bool success = vojext_msgs__msg__Vjxoutput__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__Vjxoutput__destroy(vojext_msgs__msg__Vjxoutput * msg)
{
  if (msg) {
    vojext_msgs__msg__Vjxoutput__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__Vjxoutput__Sequence__init(vojext_msgs__msg__Vjxoutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__Vjxoutput * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__Vjxoutput *)calloc(size, sizeof(vojext_msgs__msg__Vjxoutput));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__Vjxoutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__Vjxoutput__fini(&data[i - 1]);
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
vojext_msgs__msg__Vjxoutput__Sequence__fini(vojext_msgs__msg__Vjxoutput__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__Vjxoutput__fini(&array->data[i]);
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

vojext_msgs__msg__Vjxoutput__Sequence *
vojext_msgs__msg__Vjxoutput__Sequence__create(size_t size)
{
  vojext_msgs__msg__Vjxoutput__Sequence * array = (vojext_msgs__msg__Vjxoutput__Sequence *)malloc(sizeof(vojext_msgs__msg__Vjxoutput__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__Vjxoutput__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__Vjxoutput__Sequence__destroy(vojext_msgs__msg__Vjxoutput__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__Vjxoutput__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__Vjxoutput__Sequence__are_equal(const vojext_msgs__msg__Vjxoutput__Sequence * lhs, const vojext_msgs__msg__Vjxoutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__Vjxoutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__Vjxoutput__Sequence__copy(
  const vojext_msgs__msg__Vjxoutput__Sequence * input,
  vojext_msgs__msg__Vjxoutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__Vjxoutput);
    vojext_msgs__msg__Vjxoutput * data =
      (vojext_msgs__msg__Vjxoutput *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__Vjxoutput__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__Vjxoutput__fini(&data[i]);
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
    if (!vojext_msgs__msg__Vjxoutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
