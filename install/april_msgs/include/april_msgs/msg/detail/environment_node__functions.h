// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from april_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__FUNCTIONS_H_
#define APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "april_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "april_msgs/msg/detail/environment_node__struct.h"

/// Initialize msg/EnvironmentNode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * april_msgs__msg__EnvironmentNode
 * )) before or use
 * april_msgs__msg__EnvironmentNode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__EnvironmentNode__init(april_msgs__msg__EnvironmentNode * msg);

/// Finalize msg/EnvironmentNode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__EnvironmentNode__fini(april_msgs__msg__EnvironmentNode * msg);

/// Create msg/EnvironmentNode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * april_msgs__msg__EnvironmentNode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
april_msgs__msg__EnvironmentNode *
april_msgs__msg__EnvironmentNode__create();

/// Destroy msg/EnvironmentNode message.
/**
 * It calls
 * april_msgs__msg__EnvironmentNode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__EnvironmentNode__destroy(april_msgs__msg__EnvironmentNode * msg);

/// Check for msg/EnvironmentNode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__EnvironmentNode__are_equal(const april_msgs__msg__EnvironmentNode * lhs, const april_msgs__msg__EnvironmentNode * rhs);

/// Copy a msg/EnvironmentNode message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__EnvironmentNode__copy(
  const april_msgs__msg__EnvironmentNode * input,
  april_msgs__msg__EnvironmentNode * output);

/// Initialize array of msg/EnvironmentNode messages.
/**
 * It allocates the memory for the number of elements and calls
 * april_msgs__msg__EnvironmentNode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__EnvironmentNode__Sequence__init(april_msgs__msg__EnvironmentNode__Sequence * array, size_t size);

/// Finalize array of msg/EnvironmentNode messages.
/**
 * It calls
 * april_msgs__msg__EnvironmentNode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__EnvironmentNode__Sequence__fini(april_msgs__msg__EnvironmentNode__Sequence * array);

/// Create array of msg/EnvironmentNode messages.
/**
 * It allocates the memory for the array and calls
 * april_msgs__msg__EnvironmentNode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
april_msgs__msg__EnvironmentNode__Sequence *
april_msgs__msg__EnvironmentNode__Sequence__create(size_t size);

/// Destroy array of msg/EnvironmentNode messages.
/**
 * It calls
 * april_msgs__msg__EnvironmentNode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__EnvironmentNode__Sequence__destroy(april_msgs__msg__EnvironmentNode__Sequence * array);

/// Check for msg/EnvironmentNode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__EnvironmentNode__Sequence__are_equal(const april_msgs__msg__EnvironmentNode__Sequence * lhs, const april_msgs__msg__EnvironmentNode__Sequence * rhs);

/// Copy an array of msg/EnvironmentNode messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__EnvironmentNode__Sequence__copy(
  const april_msgs__msg__EnvironmentNode__Sequence * input,
  april_msgs__msg__EnvironmentNode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__FUNCTIONS_H_
