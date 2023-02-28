// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__TRAITS_HPP_

#include "april_msgs/msg/detail/environment_node__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'image_rgb'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'image_3d'
#include "sensor_msgs/msg/detail/point_cloud__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::EnvironmentNode & msg,
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

  // member: image_rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_rgb:\n";
    to_yaml(msg.image_rgb, out, indentation + 2);
  }

  // member: image_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_3d:\n";
    to_yaml(msg.image_3d, out, indentation + 2);
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    value_to_yaml(msg.class_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::EnvironmentNode & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::EnvironmentNode>()
{
  return "april_msgs::msg::EnvironmentNode";
}

template<>
inline const char * name<april_msgs::msg::EnvironmentNode>()
{
  return "april_msgs/msg/EnvironmentNode";
}

template<>
struct has_fixed_size<april_msgs::msg::EnvironmentNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::EnvironmentNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::EnvironmentNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__TRAITS_HPP_
