// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/ObjectEstimatedPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/object_estimated_pose__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/object_estimated_pose__functions.h"
#include "vojext_msgs/msg/detail/object_estimated_pose__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `point_cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `point_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `estimated_pose`
#include "geometry_msgs/msg/pose.h"
// Member `estimated_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `sclass`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__ObjectEstimatedPose__init(message_memory);
}

void ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_fini_function(void * message_memory)
{
  vojext_msgs__msg__ObjectEstimatedPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ObjectEstimatedPose, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ObjectEstimatedPose, point_cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ObjectEstimatedPose, estimated_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ObjectEstimatedPose, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sclass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ObjectEstimatedPose, sclass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_members = {
  "vojext_msgs__msg",  // message namespace
  "ObjectEstimatedPose",  // message name
  5,  // number of fields
  sizeof(vojext_msgs__msg__ObjectEstimatedPose),
  ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_member_array,  // message members
  ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_type_support_handle = {
  0,
  &ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, ObjectEstimatedPose)() {
  ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_type_support_handle.typesupport_identifier) {
    ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectEstimatedPose__rosidl_typesupport_introspection_c__ObjectEstimatedPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
