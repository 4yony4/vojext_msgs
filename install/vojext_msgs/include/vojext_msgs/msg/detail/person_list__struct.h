// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/PersonList.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__STRUCT_H_

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
// Member 'image_header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'person_list'
#include "vojext_msgs/msg/detail/person__struct.h"

// Struct defined in msg/PersonList in the package vojext_msgs.
typedef struct vojext_msgs__msg__PersonList
{
  std_msgs__msg__Header header;
  std_msgs__msg__Header image_header;
  vojext_msgs__msg__Person__Sequence person_list;
} vojext_msgs__msg__PersonList;

// Struct for a sequence of vojext_msgs__msg__PersonList.
typedef struct vojext_msgs__msg__PersonList__Sequence
{
  vojext_msgs__msg__PersonList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__PersonList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__STRUCT_H_
