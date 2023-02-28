// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_H_

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
// Member 'detected_objects'
#include "april_msgs/msg/detail/detected_object__struct.h"
// Member 'rgb_image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/DetectedObjects in the package april_msgs.
typedef struct april_msgs__msg__DetectedObjects
{
  std_msgs__msg__Header header;
  april_msgs__msg__DetectedObject__Sequence detected_objects;
  sensor_msgs__msg__Image rgb_image;
} april_msgs__msg__DetectedObjects;

// Struct for a sequence of april_msgs__msg__DetectedObjects.
typedef struct april_msgs__msg__DetectedObjects__Sequence
{
  april_msgs__msg__DetectedObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__DetectedObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_H_
