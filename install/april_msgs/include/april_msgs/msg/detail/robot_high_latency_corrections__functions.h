// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from april_msgs:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__FUNCTIONS_H_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "april_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "april_msgs/msg/detail/robot_high_latency_corrections__struct.h"

/// Initialize msg/RobotHighLatencyCorrections message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * april_msgs__msg__RobotHighLatencyCorrections
 * )) before or use
 * april_msgs__msg__RobotHighLatencyCorrections__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__RobotHighLatencyCorrections__init(april_msgs__msg__RobotHighLatencyCorrections * msg);

/// Finalize msg/RobotHighLatencyCorrections message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__RobotHighLatencyCorrections__fini(april_msgs__msg__RobotHighLatencyCorrections * msg);

/// Create msg/RobotHighLatencyCorrections message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * april_msgs__msg__RobotHighLatencyCorrections__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
april_msgs__msg__RobotHighLatencyCorrections *
april_msgs__msg__RobotHighLatencyCorrections__create();

/// Destroy msg/RobotHighLatencyCorrections message.
/**
 * It calls
 * april_msgs__msg__RobotHighLatencyCorrections__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__RobotHighLatencyCorrections__destroy(april_msgs__msg__RobotHighLatencyCorrections * msg);

/// Check for msg/RobotHighLatencyCorrections message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__RobotHighLatencyCorrections__are_equal(const april_msgs__msg__RobotHighLatencyCorrections * lhs, const april_msgs__msg__RobotHighLatencyCorrections * rhs);

/// Copy a msg/RobotHighLatencyCorrections message.
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
april_msgs__msg__RobotHighLatencyCorrections__copy(
  const april_msgs__msg__RobotHighLatencyCorrections * input,
  april_msgs__msg__RobotHighLatencyCorrections * output);

/// Initialize array of msg/RobotHighLatencyCorrections messages.
/**
 * It allocates the memory for the number of elements and calls
 * april_msgs__msg__RobotHighLatencyCorrections__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__RobotHighLatencyCorrections__Sequence__init(april_msgs__msg__RobotHighLatencyCorrections__Sequence * array, size_t size);

/// Finalize array of msg/RobotHighLatencyCorrections messages.
/**
 * It calls
 * april_msgs__msg__RobotHighLatencyCorrections__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__RobotHighLatencyCorrections__Sequence__fini(april_msgs__msg__RobotHighLatencyCorrections__Sequence * array);

/// Create array of msg/RobotHighLatencyCorrections messages.
/**
 * It allocates the memory for the array and calls
 * april_msgs__msg__RobotHighLatencyCorrections__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
april_msgs__msg__RobotHighLatencyCorrections__Sequence *
april_msgs__msg__RobotHighLatencyCorrections__Sequence__create(size_t size);

/// Destroy array of msg/RobotHighLatencyCorrections messages.
/**
 * It calls
 * april_msgs__msg__RobotHighLatencyCorrections__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
void
april_msgs__msg__RobotHighLatencyCorrections__Sequence__destroy(april_msgs__msg__RobotHighLatencyCorrections__Sequence * array);

/// Check for msg/RobotHighLatencyCorrections message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_april_msgs
bool
april_msgs__msg__RobotHighLatencyCorrections__Sequence__are_equal(const april_msgs__msg__RobotHighLatencyCorrections__Sequence * lhs, const april_msgs__msg__RobotHighLatencyCorrections__Sequence * rhs);

/// Copy an array of msg/RobotHighLatencyCorrections messages.
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
april_msgs__msg__RobotHighLatencyCorrections__Sequence__copy(
  const april_msgs__msg__RobotHighLatencyCorrections__Sequence * input,
  april_msgs__msg__RobotHighLatencyCorrections__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__FUNCTIONS_H_
