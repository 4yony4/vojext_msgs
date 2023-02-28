// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/SymbolicAction.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__TRAITS_HPP_

#include "vojext_msgs/msg/detail/symbolic_action__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'grasp_facts'
#include "vojext_msgs/msg/detail/grasp_facts__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::SymbolicAction & msg,
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

  // member: grasp_facts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grasp_facts.size() == 0) {
      out << "grasp_facts: []\n";
    } else {
      out << "grasp_facts:\n";
      for (auto item : msg.grasp_facts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose: ";
    value_to_yaml(msg.target_pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::SymbolicAction & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::SymbolicAction>()
{
  return "vojext_msgs::msg::SymbolicAction";
}

template<>
inline const char * name<vojext_msgs::msg::SymbolicAction>()
{
  return "vojext_msgs/msg/SymbolicAction";
}

template<>
struct has_fixed_size<vojext_msgs::msg::SymbolicAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::SymbolicAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::SymbolicAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__TRAITS_HPP_
