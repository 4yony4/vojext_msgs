// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__TRAITS_HPP_

#include "april_msgs/msg/detail/human_behaviour__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'humamgrasping_list'
#include "april_msgs/msg/detail/human_grasping_strategies__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::HumanBehaviour & msg,
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

  // member: body_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_posture: ";
    value_to_yaml(msg.body_posture, out);
    out << "\n";
  }

  // member: humamgrasping_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.humamgrasping_list.size() == 0) {
      out << "humamgrasping_list: []\n";
    } else {
      out << "humamgrasping_list:\n";
      for (auto item : msg.humamgrasping_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::HumanBehaviour & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::HumanBehaviour>()
{
  return "april_msgs::msg::HumanBehaviour";
}

template<>
inline const char * name<april_msgs::msg::HumanBehaviour>()
{
  return "april_msgs/msg/HumanBehaviour";
}

template<>
struct has_fixed_size<april_msgs::msg::HumanBehaviour>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::HumanBehaviour>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::HumanBehaviour>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__TRAITS_HPP_
