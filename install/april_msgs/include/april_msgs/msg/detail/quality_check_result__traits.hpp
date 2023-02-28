// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/QualityCheckResult.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__TRAITS_HPP_

#include "april_msgs/msg/detail/quality_check_result__struct.hpp"
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
  const april_msgs::msg::QualityCheckResult & msg,
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

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    value_to_yaml(msg.object_id, out);
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

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    value_to_yaml(msg.msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::QualityCheckResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::QualityCheckResult>()
{
  return "april_msgs::msg::QualityCheckResult";
}

template<>
inline const char * name<april_msgs::msg::QualityCheckResult>()
{
  return "april_msgs/msg/QualityCheckResult";
}

template<>
struct has_fixed_size<april_msgs::msg::QualityCheckResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::QualityCheckResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::QualityCheckResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__TRAITS_HPP_