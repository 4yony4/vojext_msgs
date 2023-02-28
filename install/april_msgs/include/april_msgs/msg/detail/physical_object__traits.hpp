// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/PhysicalObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__TRAITS_HPP_

#include "april_msgs/msg/detail/physical_object__struct.hpp"
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
  const april_msgs::msg::PhysicalObject & msg,
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

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape: ";
    value_to_yaml(msg.shape, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    value_to_yaml(msg.orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::PhysicalObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::PhysicalObject>()
{
  return "april_msgs::msg::PhysicalObject";
}

template<>
inline const char * name<april_msgs::msg::PhysicalObject>()
{
  return "april_msgs/msg/PhysicalObject";
}

template<>
struct has_fixed_size<april_msgs::msg::PhysicalObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::PhysicalObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::PhysicalObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__TRAITS_HPP_
