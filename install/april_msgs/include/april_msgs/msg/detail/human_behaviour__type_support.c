// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/human_behaviour__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/human_behaviour__functions.h"
#include "april_msgs/msg/detail/human_behaviour__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `body_posture`
#include "rosidl_runtime_c/string_functions.h"
// Member `humamgrasping_list`
#include "april_msgs/msg/human_grasping_strategies.h"
// Member `humamgrasping_list`
#include "april_msgs/msg/detail/human_grasping_strategies__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__HumanBehaviour__init(message_memory);
}

void HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_fini_function(void * message_memory)
{
  april_msgs__msg__HumanBehaviour__fini(message_memory);
}

size_t HumanBehaviour__rosidl_typesupport_introspection_c__size_function__HumanGraspingStrategies__humamgrasping_list(
  const void * untyped_member)
{
  const april_msgs__msg__HumanGraspingStrategies__Sequence * member =
    (const april_msgs__msg__HumanGraspingStrategies__Sequence *)(untyped_member);
  return member->size;
}

const void * HumanBehaviour__rosidl_typesupport_introspection_c__get_const_function__HumanGraspingStrategies__humamgrasping_list(
  const void * untyped_member, size_t index)
{
  const april_msgs__msg__HumanGraspingStrategies__Sequence * member =
    (const april_msgs__msg__HumanGraspingStrategies__Sequence *)(untyped_member);
  return &member->data[index];
}

void * HumanBehaviour__rosidl_typesupport_introspection_c__get_function__HumanGraspingStrategies__humamgrasping_list(
  void * untyped_member, size_t index)
{
  april_msgs__msg__HumanGraspingStrategies__Sequence * member =
    (april_msgs__msg__HumanGraspingStrategies__Sequence *)(untyped_member);
  return &member->data[index];
}

bool HumanBehaviour__rosidl_typesupport_introspection_c__resize_function__HumanGraspingStrategies__humamgrasping_list(
  void * untyped_member, size_t size)
{
  april_msgs__msg__HumanGraspingStrategies__Sequence * member =
    (april_msgs__msg__HumanGraspingStrategies__Sequence *)(untyped_member);
  april_msgs__msg__HumanGraspingStrategies__Sequence__fini(member);
  return april_msgs__msg__HumanGraspingStrategies__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__HumanBehaviour, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_posture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__HumanBehaviour, body_posture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "humamgrasping_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__HumanBehaviour, humamgrasping_list),  // bytes offset in struct
    NULL,  // default value
    HumanBehaviour__rosidl_typesupport_introspection_c__size_function__HumanGraspingStrategies__humamgrasping_list,  // size() function pointer
    HumanBehaviour__rosidl_typesupport_introspection_c__get_const_function__HumanGraspingStrategies__humamgrasping_list,  // get_const(index) function pointer
    HumanBehaviour__rosidl_typesupport_introspection_c__get_function__HumanGraspingStrategies__humamgrasping_list,  // get(index) function pointer
    HumanBehaviour__rosidl_typesupport_introspection_c__resize_function__HumanGraspingStrategies__humamgrasping_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_members = {
  "april_msgs__msg",  // message namespace
  "HumanBehaviour",  // message name
  3,  // number of fields
  sizeof(april_msgs__msg__HumanBehaviour),
  HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_member_array,  // message members
  HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_type_support_handle = {
  0,
  &HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, HumanBehaviour)() {
  HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, HumanGraspingStrategies)();
  if (!HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_type_support_handle.typesupport_identifier) {
    HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HumanBehaviour__rosidl_typesupport_introspection_c__HumanBehaviour_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
