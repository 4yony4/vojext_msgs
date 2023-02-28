// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/ShelfLife.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__SHELF_LIFE__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__SHELF_LIFE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ShelfLife in the package vojext_msgs.
typedef struct vojext_msgs__msg__ShelfLife
{
  std_msgs__msg__Header header;
  uint32_t object_id;
  uint32_t shelf_life;
} vojext_msgs__msg__ShelfLife;

// Struct for a sequence of vojext_msgs__msg__ShelfLife.
typedef struct vojext_msgs__msg__ShelfLife__Sequence
{
  vojext_msgs__msg__ShelfLife * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__ShelfLife__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__SHELF_LIFE__STRUCT_H_
