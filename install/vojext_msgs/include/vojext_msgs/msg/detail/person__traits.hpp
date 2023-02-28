// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "vojext_msgs/msg/detail/person__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'left_hand'
// Member 'right_hand'
#include "vojext_msgs/msg/detail/hand__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::Person & msg,
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

  // member: result_dynamic_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_dynamic_left: ";
    value_to_yaml(msg.result_dynamic_left, out);
    out << "\n";
  }

  // member: result_dynamic_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_dynamic_right: ";
    value_to_yaml(msg.result_dynamic_right, out);
    out << "\n";
  }

  // member: result_static_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_static_left: ";
    value_to_yaml(msg.result_static_left, out);
    out << "\n";
  }

  // member: result_static_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_static_right: ";
    value_to_yaml(msg.result_static_right, out);
    out << "\n";
  }

  // member: final_result_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_result_left: ";
    value_to_yaml(msg.final_result_left, out);
    out << "\n";
  }

  // member: final_result_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_result_right: ";
    value_to_yaml(msg.final_result_right, out);
    out << "\n";
  }

  // member: left_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_hand.size() == 0) {
      out << "left_hand: []\n";
    } else {
      out << "left_hand:\n";
      for (auto item : msg.left_hand) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_hand.size() == 0) {
      out << "right_hand: []\n";
    } else {
      out << "right_hand:\n";
      for (auto item : msg.right_hand) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::Person & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::Person>()
{
  return "vojext_msgs::msg::Person";
}

template<>
inline const char * name<vojext_msgs::msg::Person>()
{
  return "vojext_msgs/msg/Person";
}

template<>
struct has_fixed_size<vojext_msgs::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
