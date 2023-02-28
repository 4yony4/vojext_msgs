// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_

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
// Member 'bounding_box'
#include "april_msgs/msg/detail/bounding_box__struct.h"
// Member 'segmentation_mask'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/DetectedObject in the package april_msgs.
typedef struct april_msgs__msg__DetectedObject
{
  std_msgs__msg__Header header;
  april_msgs__msg__BoundingBox bounding_box;
  sensor_msgs__msg__Image segmentation_mask;
  double probability;
  int16_t detected_id;
  int16_t tracked_id;
  int16_t class_id;
  rosidl_runtime_c__String class_name;
} april_msgs__msg__DetectedObject;

// Struct for a sequence of april_msgs__msg__DetectedObject.
typedef struct april_msgs__msg__DetectedObject__Sequence
{
  april_msgs__msg__DetectedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__DetectedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
