// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__TRAITS_HPP_

#include "vojext_msgs/msg/detail/human_motion__struct.hpp"
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
  const vojext_msgs::msg::HumanMotion & msg,
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

  // member: hand_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_position: ";
    value_to_yaml(msg.hand_position, out);
    out << "\n";
  }

  // member: hand_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_velocity: ";
    value_to_yaml(msg.hand_velocity, out);
    out << "\n";
  }

  // member: hand_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_acceleration: ";
    value_to_yaml(msg.hand_acceleration, out);
    out << "\n";
  }

  // member: body_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_position: ";
    value_to_yaml(msg.body_position, out);
    out << "\n";
  }

  // member: body_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_velocity: ";
    value_to_yaml(msg.body_velocity, out);
    out << "\n";
  }

  // member: body_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_acceleration: ";
    value_to_yaml(msg.body_acceleration, out);
    out << "\n";
  }

  // member: tools_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tools_position: ";
    value_to_yaml(msg.tools_position, out);
    out << "\n";
  }

  // member: tools_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tools_velocity: ";
    value_to_yaml(msg.tools_velocity, out);
    out << "\n";
  }

  // member: tools_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tools_acceleration: ";
    value_to_yaml(msg.tools_acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::HumanMotion & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::HumanMotion>()
{
  return "vojext_msgs::msg::HumanMotion";
}

template<>
inline const char * name<vojext_msgs::msg::HumanMotion>()
{
  return "vojext_msgs/msg/HumanMotion";
}

template<>
struct has_fixed_size<vojext_msgs::msg::HumanMotion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::HumanMotion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::HumanMotion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__TRAITS_HPP_
