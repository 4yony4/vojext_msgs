// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/ActionCommon.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ACTION_COMMON__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__ACTION_COMMON__STRUCT_H_

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
// Member 'action_type'
// Member 'target_id'
// Member 'force_limits'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ActionCommon in the package april_msgs.
typedef struct april_msgs__msg__ActionCommon
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String action_type;
  rosidl_runtime_c__String__Sequence target_id;
  rosidl_runtime_c__String__Sequence force_limits;
} april_msgs__msg__ActionCommon;

// Struct for a sequence of april_msgs__msg__ActionCommon.
typedef struct april_msgs__msg__ActionCommon__Sequence
{
  april_msgs__msg__ActionCommon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__ActionCommon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ACTION_COMMON__STRUCT_H_
