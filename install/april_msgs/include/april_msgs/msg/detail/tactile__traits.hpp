// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/Tactile.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__TACTILE__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__TACTILE__TRAITS_HPP_

#include "april_msgs/msg/detail/tactile__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::Tactile & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::Tactile & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::Tactile>()
{
  return "april_msgs::msg::Tactile";
}

template<>
inline const char * name<april_msgs::msg::Tactile>()
{
  return "april_msgs/msg/Tactile";
}

template<>
struct has_fixed_size<april_msgs::msg::Tactile>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::Tactile>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::Tactile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__TACTILE__TRAITS_HPP_
