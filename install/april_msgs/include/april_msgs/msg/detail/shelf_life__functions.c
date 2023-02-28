// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/ShelfLife.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/shelf_life__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
april_msgs__msg__ShelfLife__init(april_msgs__msg__ShelfLife * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__ShelfLife__fini(msg);
    return false;
  }
  // object_id
  // shelf_life
  return true;
}

void
april_msgs__msg__ShelfLife__fini(april_msgs__msg__ShelfLife * msg)
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
april_msgs__msg__ShelfLife__are_equal(const april_msgs__msg__ShelfLife * lhs, const april_msgs__msg__ShelfLife * rhs)
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
april_msgs__msg__ShelfLife__copy(
  const april_msgs__msg__ShelfLife * input,
  april_msgs__msg__ShelfLife * output)
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

april_msgs__msg__ShelfLife *
april_msgs__msg__ShelfLife__create()
{
  april_msgs__msg__ShelfLife * msg = (april_msgs__msg__ShelfLife *)malloc(sizeof(april_msgs__msg__ShelfLife));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__ShelfLife));
  bool success = april_msgs__msg__ShelfLife__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__ShelfLife__destroy(april_msgs__msg__ShelfLife * msg)
{
  if (msg) {
    april_msgs__msg__ShelfLife__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__ShelfLife__Sequence__init(april_msgs__msg__ShelfLife__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__ShelfLife * data = NULL;
  if (size) {
    data = (april_msgs__msg__ShelfLife *)calloc(size, sizeof(april_msgs__msg__ShelfLife));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__ShelfLife__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__ShelfLife__fini(&data[i - 1]);
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
april_msgs__msg__ShelfLife__Sequence__fini(april_msgs__msg__ShelfLife__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__ShelfLife__fini(&array->data[i]);
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

april_msgs__msg__ShelfLife__Sequence *
april_msgs__msg__ShelfLife__Sequence__create(size_t size)
{
  april_msgs__msg__ShelfLife__Sequence * array = (april_msgs__msg__ShelfLife__Sequence *)malloc(sizeof(april_msgs__msg__ShelfLife__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__ShelfLife__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__ShelfLife__Sequence__destroy(april_msgs__msg__ShelfLife__Sequence * array)
{
  if (array) {
    april_msgs__msg__ShelfLife__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__ShelfLife__Sequence__are_equal(const april_msgs__msg__ShelfLife__Sequence * lhs, const april_msgs__msg__ShelfLife__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__ShelfLife__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__ShelfLife__Sequence__copy(
  const april_msgs__msg__ShelfLife__Sequence * input,
  april_msgs__msg__ShelfLife__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__ShelfLife);
    april_msgs__msg__ShelfLife * data =
      (april_msgs__msg__ShelfLife *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__ShelfLife__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__ShelfLife__fini(&data[i]);
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
    if (!april_msgs__msg__ShelfLife__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
