// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/Vjxoutput.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__VJXOUTPUT__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__VJXOUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
// Member 'velocity'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Vjxoutput in the package vojext_msgs.
typedef struct vojext_msgs__msg__Vjxoutput
{
  double timestamp;
  rosidl_runtime_c__double__Sequence pose;
  rosidl_runtime_c__double__Sequence velocity;
} vojext_msgs__msg__Vjxoutput;

// Struct for a sequence of vojext_msgs__msg__Vjxoutput.
typedef struct vojext_msgs__msg__Vjxoutput__Sequence
{
  vojext_msgs__msg__Vjxoutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__Vjxoutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__VJXOUTPUT__STRUCT_H_
