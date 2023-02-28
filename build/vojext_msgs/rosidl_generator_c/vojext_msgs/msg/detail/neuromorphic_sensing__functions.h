// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vojext_msgs:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__FUNCTIONS_H_
#define VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vojext_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vojext_msgs/msg/detail/neuromorphic_sensing__struct.h"

/// Initialize msg/NeuromorphicSensing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vojext_msgs__msg__NeuromorphicSensing
 * )) before or use
 * vojext_msgs__msg__NeuromorphicSensing__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
bool
vojext_msgs__msg__NeuromorphicSensing__init(vojext_msgs__msg__NeuromorphicSensing * msg);

/// Finalize msg/NeuromorphicSensing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
void
vojext_msgs__msg__NeuromorphicSensing__fini(vojext_msgs__msg__NeuromorphicSensing * msg);

/// Create msg/NeuromorphicSensing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vojext_msgs__msg__NeuromorphicSensing__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
vojext_msgs__msg__NeuromorphicSensing *
vojext_msgs__msg__NeuromorphicSensing__create();

/// Destroy msg/NeuromorphicSensing message.
/**
 * It calls
 * vojext_msgs__msg__NeuromorphicSensing__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
void
vojext_msgs__msg__NeuromorphicSensing__destroy(vojext_msgs__msg__NeuromorphicSensing * msg);

/// Check for msg/NeuromorphicSensing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
bool
vojext_msgs__msg__NeuromorphicSensing__are_equal(const vojext_msgs__msg__NeuromorphicSensing * lhs, const vojext_msgs__msg__NeuromorphicSensing * rhs);

/// Copy a msg/NeuromorphicSensing message.
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
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
bool
vojext_msgs__msg__NeuromorphicSensing__copy(
  const vojext_msgs__msg__NeuromorphicSensing * input,
  vojext_msgs__msg__NeuromorphicSensing * output);

/// Initialize array of msg/NeuromorphicSensing messages.
/**
 * It allocates the memory for the number of elements and calls
 * vojext_msgs__msg__NeuromorphicSensing__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
bool
vojext_msgs__msg__NeuromorphicSensing__Sequence__init(vojext_msgs__msg__NeuromorphicSensing__Sequence * array, size_t size);

/// Finalize array of msg/NeuromorphicSensing messages.
/**
 * It calls
 * vojext_msgs__msg__NeuromorphicSensing__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
void
vojext_msgs__msg__NeuromorphicSensing__Sequence__fini(vojext_msgs__msg__NeuromorphicSensing__Sequence * array);

/// Create array of msg/NeuromorphicSensing messages.
/**
 * It allocates the memory for the array and calls
 * vojext_msgs__msg__NeuromorphicSensing__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
vojext_msgs__msg__NeuromorphicSensing__Sequence *
vojext_msgs__msg__NeuromorphicSensing__Sequence__create(size_t size);

/// Destroy array of msg/NeuromorphicSensing messages.
/**
 * It calls
 * vojext_msgs__msg__NeuromorphicSensing__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
void
vojext_msgs__msg__NeuromorphicSensing__Sequence__destroy(vojext_msgs__msg__NeuromorphicSensing__Sequence * array);

/// Check for msg/NeuromorphicSensing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
bool
vojext_msgs__msg__NeuromorphicSensing__Sequence__are_equal(const vojext_msgs__msg__NeuromorphicSensing__Sequence * lhs, const vojext_msgs__msg__NeuromorphicSensing__Sequence * rhs);

/// Copy an array of msg/NeuromorphicSensing messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vojext_msgs
bool
vojext_msgs__msg__NeuromorphicSensing__Sequence__copy(
  const vojext_msgs__msg__NeuromorphicSensing__Sequence * input,
  vojext_msgs__msg__NeuromorphicSensing__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__FUNCTIONS_H_
