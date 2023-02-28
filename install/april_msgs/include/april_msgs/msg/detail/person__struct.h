// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__PERSON__STRUCT_H_

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
// Member 'result_dynamic_left'
// Member 'result_dynamic_right'
// Member 'result_static_left'
// Member 'result_static_right'
// Member 'final_result_left'
// Member 'final_result_right'
#include "rosidl_runtime_c/string.h"
// Member 'left_hand'
// Member 'right_hand'
#include "april_msgs/msg/detail/hand__struct.h"

// Struct defined in msg/Person in the package april_msgs.
typedef struct april_msgs__msg__Person
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String result_dynamic_left;
  rosidl_runtime_c__String result_dynamic_right;
  rosidl_runtime_c__String result_static_left;
  rosidl_runtime_c__String result_static_right;
  rosidl_runtime_c__String final_result_left;
  rosidl_runtime_c__String final_result_right;
  april_msgs__msg__Hand__Sequence left_hand;
  april_msgs__msg__Hand__Sequence right_hand;
} april_msgs__msg__Person;

// Struct for a sequence of april_msgs__msg__Person.
typedef struct april_msgs__msg__Person__Sequence
{
  april_msgs__msg__Person * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__Person__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
