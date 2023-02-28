// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/human_parameter_intention__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/human_parameter_intention__functions.h"
#include "vojext_msgs/msg/detail/human_parameter_intention__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `motion_prediction`
#include "rosidl_runtime_c/string_functions.h"
// Member `humanmotion_list`
#include "vojext_msgs/msg/human_motion.h"
// Member `humanmotion_list`
#include "vojext_msgs/msg/detail/human_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__HumanParameterIntention__init(message_memory);
}

void HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_fini_function(void * message_memory)
{
  vojext_msgs__msg__HumanParameterIntention__fini(message_memory);
}

size_t HumanParameterIntention__rosidl_typesupport_introspection_c__size_function__HumanMotion__humanmotion_list(
  const void * untyped_member)
{
  const vojext_msgs__msg__HumanMotion__Sequence * member =
    (const vojext_msgs__msg__HumanMotion__Sequence *)(untyped_member);
  return member->size;
}

const void * HumanParameterIntention__rosidl_typesupport_introspection_c__get_const_function__HumanMotion__humanmotion_list(
  const void * untyped_member, size_t index)
{
  const vojext_msgs__msg__HumanMotion__Sequence * member =
    (const vojext_msgs__msg__HumanMotion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * HumanParameterIntention__rosidl_typesupport_introspection_c__get_function__HumanMotion__humanmotion_list(
  void * untyped_member, size_t index)
{
  vojext_msgs__msg__HumanMotion__Sequence * member =
    (vojext_msgs__msg__HumanMotion__Sequence *)(untyped_member);
  return &member->data[index];
}

bool HumanParameterIntention__rosidl_typesupport_introspection_c__resize_function__HumanMotion__humanmotion_list(
  void * untyped_member, size_t size)
{
  vojext_msgs__msg__HumanMotion__Sequence * member =
    (vojext_msgs__msg__HumanMotion__Sequence *)(untyped_member);
  vojext_msgs__msg__HumanMotion__Sequence__fini(member);
  return vojext_msgs__msg__HumanMotion__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__HumanParameterIntention, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_prediction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__HumanParameterIntention, motion_prediction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engagement_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__HumanParameterIntention, engagement_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cognitive_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__HumanParameterIntention, cognitive_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mood_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__HumanParameterIntention, mood_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "humanmotion_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__HumanParameterIntention, humanmotion_list),  // bytes offset in struct
    NULL,  // default value
    HumanParameterIntention__rosidl_typesupport_introspection_c__size_function__HumanMotion__humanmotion_list,  // size() function pointer
    HumanParameterIntention__rosidl_typesupport_introspection_c__get_const_function__HumanMotion__humanmotion_list,  // get_const(index) function pointer
    HumanParameterIntention__rosidl_typesupport_introspection_c__get_function__HumanMotion__humanmotion_list,  // get(index) function pointer
    HumanParameterIntention__rosidl_typesupport_introspection_c__resize_function__HumanMotion__humanmotion_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_members = {
  "vojext_msgs__msg",  // message namespace
  "HumanParameterIntention",  // message name
  6,  // number of fields
  sizeof(vojext_msgs__msg__HumanParameterIntention),
  HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_member_array,  // message members
  HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_type_support_handle = {
  0,
  &HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, HumanParameterIntention)() {
  HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, HumanMotion)();
  if (!HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_type_support_handle.typesupport_identifier) {
    HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HumanParameterIntention__rosidl_typesupport_introspection_c__HumanParameterIntention_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
