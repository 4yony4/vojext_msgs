// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/ClusteredObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/clustered_object__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/clustered_object__functions.h"
#include "vojext_msgs/msg/detail/clustered_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `clustered_point_cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `clustered_point_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `sclass`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__ClusteredObject__init(message_memory);
}

void ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_fini_function(void * message_memory)
{
  vojext_msgs__msg__ClusteredObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ClusteredObject, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clustered_point_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__ClusteredObject, clustered_point_cloud),  // bytes offset in struct
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
    offsetof(vojext_msgs__msg__ClusteredObject, id),  // bytes offset in struct
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
    offsetof(vojext_msgs__msg__ClusteredObject, sclass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_members = {
  "vojext_msgs__msg",  // message namespace
  "ClusteredObject",  // message name
  4,  // number of fields
  sizeof(vojext_msgs__msg__ClusteredObject),
  ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_member_array,  // message members
  ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_type_support_handle = {
  0,
  &ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, ClusteredObject)() {
  ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_type_support_handle.typesupport_identifier) {
    ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ClusteredObject__rosidl_typesupport_introspection_c__ClusteredObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
