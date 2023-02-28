// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/RobotLowLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__TRAITS_HPP_

#include "vojext_msgs/msg/detail/robot_low_latency_corrections__struct.hpp"
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
  const vojext_msgs::msg::RobotLowLatencyCorrections & msg,
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

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.action.size() == 0) {
      out << "action: []\n";
    } else {
      out << "action:\n";
      for (auto item : msg.action) {
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

inline std::string to_yaml(const vojext_msgs::msg::RobotLowLatencyCorrections & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::RobotLowLatencyCorrections>()
{
  return "vojext_msgs::msg::RobotLowLatencyCorrections";
}

template<>
inline const char * name<vojext_msgs::msg::RobotLowLatencyCorrections>()
{
  return "vojext_msgs/msg/RobotLowLatencyCorrections";
}

template<>
struct has_fixed_size<vojext_msgs::msg::RobotLowLatencyCorrections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::RobotLowLatencyCorrections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::RobotLowLatencyCorrections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__TRAITS_HPP_
