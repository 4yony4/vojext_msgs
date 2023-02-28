// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/PassportValidation.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__TRAITS_HPP_

#include "vojext_msgs/msg/detail/passport_validation__struct.hpp"
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
  const vojext_msgs::msg::PassportValidation & msg,
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

  // member: passport_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passport_num: ";
    value_to_yaml(msg.passport_num, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::PassportValidation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::PassportValidation>()
{
  return "vojext_msgs::msg::PassportValidation";
}

template<>
inline const char * name<vojext_msgs::msg::PassportValidation>()
{
  return "vojext_msgs/msg/PassportValidation";
}

template<>
struct has_fixed_size<vojext_msgs::msg::PassportValidation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::PassportValidation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::PassportValidation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__TRAITS_HPP_
