// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_H_

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
// Member 'semantictag'
#include "rosidl_runtime_c/string.h"
// Member 'objects_list'
#include "vojext_msgs/msg/detail/physical_object__struct.h"

// Struct defined in msg/Environment in the package vojext_msgs.
typedef struct vojext_msgs__msg__Environment
{
  std_msgs__msg__Header header;
  uint32_t timestamp;
  rosidl_runtime_c__String semantictag;
  vojext_msgs__msg__PhysicalObject__Sequence objects_list;
} vojext_msgs__msg__Environment;

// Struct for a sequence of vojext_msgs__msg__Environment.
typedef struct vojext_msgs__msg__Environment__Sequence
{
  vojext_msgs__msg__Environment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__Environment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
