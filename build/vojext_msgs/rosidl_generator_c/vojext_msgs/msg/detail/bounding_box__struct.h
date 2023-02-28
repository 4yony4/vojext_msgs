// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

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

// Struct defined in msg/BoundingBox in the package vojext_msgs.
typedef struct vojext_msgs__msg__BoundingBox
{
  std_msgs__msg__Header header;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
} vojext_msgs__msg__BoundingBox;

// Struct for a sequence of vojext_msgs__msg__BoundingBox.
typedef struct vojext_msgs__msg__BoundingBox__Sequence
{
  vojext_msgs__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
