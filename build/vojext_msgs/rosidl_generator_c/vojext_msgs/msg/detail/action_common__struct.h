// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/ActionCommon.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ACTION_COMMON__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__ACTION_COMMON__STRUCT_H_

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

// Struct defined in msg/ActionCommon in the package vojext_msgs.
typedef struct vojext_msgs__msg__ActionCommon
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String action_type;
  rosidl_runtime_c__String__Sequence target_id;
  rosidl_runtime_c__String__Sequence force_limits;
} vojext_msgs__msg__ActionCommon;

// Struct for a sequence of vojext_msgs__msg__ActionCommon.
typedef struct vojext_msgs__msg__ActionCommon__Sequence
{
  vojext_msgs__msg__ActionCommon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__ActionCommon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__ACTION_COMMON__STRUCT_H_
