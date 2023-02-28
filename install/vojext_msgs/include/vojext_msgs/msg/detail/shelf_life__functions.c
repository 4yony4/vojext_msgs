// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vojext_msgs:msg/ShelfLife.idl
// generated code does not contain a copyright notice
#include "vojext_msgs/msg/detail/shelf_life__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
vojext_msgs__msg__ShelfLife__init(vojext_msgs__msg__ShelfLife * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vojext_msgs__msg__ShelfLife__fini(msg);
    return false;
  }
  // object_id
  // shelf_life
  return true;
}

void
vojext_msgs__msg__ShelfLife__fini(vojext_msgs__msg__ShelfLife * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_id
  // shelf_life
}

bool
vojext_msgs__msg__ShelfLife__are_equal(const vojext_msgs__msg__ShelfLife * lhs, const vojext_msgs__msg__ShelfLife * rhs)
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
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  // shelf_life
  if (lhs->shelf_life != rhs->shelf_life) {
    return false;
  }
  return true;
}

bool
vojext_msgs__msg__ShelfLife__copy(
  const vojext_msgs__msg__ShelfLife * input,
  vojext_msgs__msg__ShelfLife * output)
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
  // object_id
  output->object_id = input->object_id;
  // shelf_life
  output->shelf_life = input->shelf_life;
  return true;
}

vojext_msgs__msg__ShelfLife *
vojext_msgs__msg__ShelfLife__create()
{
  vojext_msgs__msg__ShelfLife * msg = (vojext_msgs__msg__ShelfLife *)malloc(sizeof(vojext_msgs__msg__ShelfLife));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vojext_msgs__msg__ShelfLife));
  bool success = vojext_msgs__msg__ShelfLife__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vojext_msgs__msg__ShelfLife__destroy(vojext_msgs__msg__ShelfLife * msg)
{
  if (msg) {
    vojext_msgs__msg__ShelfLife__fini(msg);
  }
  free(msg);
}


bool
vojext_msgs__msg__ShelfLife__Sequence__init(vojext_msgs__msg__ShelfLife__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vojext_msgs__msg__ShelfLife * data = NULL;
  if (size) {
    data = (vojext_msgs__msg__ShelfLife *)calloc(size, sizeof(vojext_msgs__msg__ShelfLife));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vojext_msgs__msg__ShelfLife__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vojext_msgs__msg__ShelfLife__fini(&data[i - 1]);
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
vojext_msgs__msg__ShelfLife__Sequence__fini(vojext_msgs__msg__ShelfLife__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vojext_msgs__msg__ShelfLife__fini(&array->data[i]);
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

vojext_msgs__msg__ShelfLife__Sequence *
vojext_msgs__msg__ShelfLife__Sequence__create(size_t size)
{
  vojext_msgs__msg__ShelfLife__Sequence * array = (vojext_msgs__msg__ShelfLife__Sequence *)malloc(sizeof(vojext_msgs__msg__ShelfLife__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vojext_msgs__msg__ShelfLife__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vojext_msgs__msg__ShelfLife__Sequence__destroy(vojext_msgs__msg__ShelfLife__Sequence * array)
{
  if (array) {
    vojext_msgs__msg__ShelfLife__Sequence__fini(array);
  }
  free(array);
}

bool
vojext_msgs__msg__ShelfLife__Sequence__are_equal(const vojext_msgs__msg__ShelfLife__Sequence * lhs, const vojext_msgs__msg__ShelfLife__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vojext_msgs__msg__ShelfLife__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vojext_msgs__msg__ShelfLife__Sequence__copy(
  const vojext_msgs__msg__ShelfLife__Sequence * input,
  vojext_msgs__msg__ShelfLife__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vojext_msgs__msg__ShelfLife);
    vojext_msgs__msg__ShelfLife * data =
      (vojext_msgs__msg__ShelfLife *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vojext_msgs__msg__ShelfLife__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vojext_msgs__msg__ShelfLife__fini(&data[i]);
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
    if (!vojext_msgs__msg__ShelfLife__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
