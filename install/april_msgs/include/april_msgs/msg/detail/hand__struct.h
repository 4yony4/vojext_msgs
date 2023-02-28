// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HAND__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__HAND__STRUCT_H_

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

// Struct defined in msg/Hand in the package april_msgs.
typedef struct april_msgs__msg__Hand
{
  std_msgs__msg__Header header;
  int64_t x;
  int64_t y;
  int64_t width;
  int64_t height;
} april_msgs__msg__Hand;

// Struct for a sequence of april_msgs__msg__Hand.
typedef struct april_msgs__msg__Hand__Sequence
{
  april_msgs__msg__Hand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__Hand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__HAND__STRUCT_H_
