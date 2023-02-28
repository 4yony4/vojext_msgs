// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/Output.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OUTPUT__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__OUTPUT__TRAITS_HPP_

#include "april_msgs/msg/detail/output__struct.hpp"
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
  const april_msgs::msg::Output & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose.size() == 0) {
      out << "pose: []\n";
    } else {
      out << "pose:\n";
      for (auto item : msg.pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::Output & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::Output>()
{
  return "april_msgs::msg::Output";
}

template<>
inline const char * name<april_msgs::msg::Output>()
{
  return "april_msgs/msg/Output";
}

template<>
struct has_fixed_size<april_msgs::msg::Output>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::Output>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::Output>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__OUTPUT__TRAITS_HPP_
