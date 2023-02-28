// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_

#include "vojext_msgs/msg/detail/environment__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects_list'
#include "vojext_msgs/msg/detail/physical_object__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::Environment & msg,
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

  // member: semantictag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semantictag: ";
    value_to_yaml(msg.semantictag, out);
    out << "\n";
  }

  // member: objects_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects_list.size() == 0) {
      out << "objects_list: []\n";
    } else {
      out << "objects_list:\n";
      for (auto item : msg.objects_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::Environment & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::Environment>()
{
  return "vojext_msgs::msg::Environment";
}

template<>
inline const char * name<vojext_msgs::msg::Environment>()
{
  return "vojext_msgs/msg/Environment";
}

template<>
struct has_fixed_size<vojext_msgs::msg::Environment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::Environment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::Environment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_
