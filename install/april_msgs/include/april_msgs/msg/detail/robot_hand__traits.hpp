// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__TRAITS_HPP_

#include "april_msgs/msg/detail/robot_hand__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'robothandkinematic_list'
#include "april_msgs/msg/detail/robot_hand_kinematic__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::RobotHand & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: robothandkinematic_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robothandkinematic_list.size() == 0) {
      out << "robothandkinematic_list: []\n";
    } else {
      out << "robothandkinematic_list:\n";
      for (auto item : msg.robothandkinematic_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::RobotHand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::RobotHand>()
{
  return "april_msgs::msg::RobotHand";
}

template<>
inline const char * name<april_msgs::msg::RobotHand>()
{
  return "april_msgs/msg/RobotHand";
}

template<>
struct has_fixed_size<april_msgs::msg::RobotHand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::RobotHand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::RobotHand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__TRAITS_HPP_
