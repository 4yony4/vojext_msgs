// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/Output.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OUTPUT__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__OUTPUT__STRUCT_H_

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
// Member 'pose'
// Member 'velocity'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Output in the package april_msgs.
typedef struct april_msgs__msg__Output
{
  std_msgs__msg__Header header;
  double timestamp;
  rosidl_runtime_c__double__Sequence pose;
  rosidl_runtime_c__double__Sequence velocity;
} april_msgs__msg__Output;

// Struct for a sequence of april_msgs__msg__Output.
typedef struct april_msgs__msg__Output__Sequence
{
  april_msgs__msg__Output * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__Output__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__OUTPUT__STRUCT_H_
