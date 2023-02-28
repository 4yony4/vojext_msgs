// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/PassportValidation.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__STRUCT_H_

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
// Member 'passport_num'
// Member 'result'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PassportValidation in the package april_msgs.
typedef struct april_msgs__msg__PassportValidation
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String passport_num;
  rosidl_runtime_c__String result;
} april_msgs__msg__PassportValidation;

// Struct for a sequence of april_msgs__msg__PassportValidation.
typedef struct april_msgs__msg__PassportValidation__Sequence
{
  april_msgs__msg__PassportValidation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__PassportValidation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__STRUCT_H_
