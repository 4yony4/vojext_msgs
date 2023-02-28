// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/PhysicalObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__STRUCT_H_

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
// Member 'shape'
// Member 'position'
// Member 'orientation'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PhysicalObject in the package april_msgs.
typedef struct april_msgs__msg__PhysicalObject
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String shape;
  int64_t size;
  rosidl_runtime_c__String position;
  rosidl_runtime_c__String orientation;
} april_msgs__msg__PhysicalObject;

// Struct for a sequence of april_msgs__msg__PhysicalObject.
typedef struct april_msgs__msg__PhysicalObject__Sequence
{
  april_msgs__msg__PhysicalObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__PhysicalObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__STRUCT_H_
