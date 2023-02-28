// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/ActionCommon.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ACTION_COMMON__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ACTION_COMMON__TRAITS_HPP_

#include "vojext_msgs/msg/detail/action_common__struct.hpp"
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
  const vojext_msgs::msg::ActionCommon & msg,
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

  // member: action_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_type: ";
    value_to_yaml(msg.action_type, out);
    out << "\n";
  }

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_id.size() == 0) {
      out << "target_id: []\n";
    } else {
      out << "target_id:\n";
      for (auto item : msg.target_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force_limits.size() == 0) {
      out << "force_limits: []\n";
    } else {
      out << "force_limits:\n";
      for (auto item : msg.force_limits) {
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

inline std::string to_yaml(const vojext_msgs::msg::ActionCommon & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::ActionCommon>()
{
  return "vojext_msgs::msg::ActionCommon";
}

template<>
inline const char * name<vojext_msgs::msg::ActionCommon>()
{
  return "vojext_msgs/msg/ActionCommon";
}

template<>
struct has_fixed_size<vojext_msgs::msg::ActionCommon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::ActionCommon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::ActionCommon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__ACTION_COMMON__TRAITS_HPP_
