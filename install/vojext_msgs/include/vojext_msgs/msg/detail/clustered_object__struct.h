// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/ClusteredObject.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_H_

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
// Member 'clustered_point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'sclass'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ClusteredObject in the package vojext_msgs.
typedef struct vojext_msgs__msg__ClusteredObject
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__PointCloud2 clustered_point_cloud;
  int16_t id;
  rosidl_runtime_c__String sclass;
} vojext_msgs__msg__ClusteredObject;

// Struct for a sequence of vojext_msgs__msg__ClusteredObject.
typedef struct vojext_msgs__msg__ClusteredObject__Sequence
{
  vojext_msgs__msg__ClusteredObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__ClusteredObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_H_
