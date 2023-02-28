// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/PersonList.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PERSON_LIST__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__PERSON_LIST__TRAITS_HPP_

#include "april_msgs/msg/detail/person_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'person_list'
#include "april_msgs/msg/detail/person__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::PersonList & msg,
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

  // member: image_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_header:\n";
    to_yaml(msg.image_header, out, indentation + 2);
  }

  // member: person_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.person_list.size() == 0) {
      out << "person_list: []\n";
    } else {
      out << "person_list:\n";
      for (auto item : msg.person_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::PersonList & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::PersonList>()
{
  return "april_msgs::msg::PersonList";
}

template<>
inline const char * name<april_msgs::msg::PersonList>()
{
  return "april_msgs/msg/PersonList";
}

template<>
struct has_fixed_size<april_msgs::msg::PersonList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::PersonList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::PersonList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__PERSON_LIST__TRAITS_HPP_
