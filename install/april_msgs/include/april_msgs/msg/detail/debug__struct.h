// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/Debug.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DEBUG__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__DEBUG__STRUCT_H_

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
// Member 'msg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Debug in the package april_msgs.
typedef struct april_msgs__msg__Debug
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String msg;
} april_msgs__msg__Debug;

// Struct for a sequence of april_msgs__msg__Debug.
typedef struct april_msgs__msg__Debug__Sequence
{
  april_msgs__msg__Debug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__Debug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__DEBUG__STRUCT_H_
