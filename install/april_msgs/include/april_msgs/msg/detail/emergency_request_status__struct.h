// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__STRUCT_H_

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
// Member 'request_progress'
// Member 'request_result'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EmergencyRequestStatus in the package april_msgs.
typedef struct april_msgs__msg__EmergencyRequestStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String request_progress;
  rosidl_runtime_c__String request_result;
} april_msgs__msg__EmergencyRequestStatus;

// Struct for a sequence of april_msgs__msg__EmergencyRequestStatus.
typedef struct april_msgs__msg__EmergencyRequestStatus__Sequence
{
  april_msgs__msg__EmergencyRequestStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__EmergencyRequestStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__STRUCT_H_
