// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECTS__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECTS__TRAITS_HPP_

#include "vojext_msgs/msg/detail/detected_objects__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detected_objects'
#include "vojext_msgs/msg/detail/detected_object__traits.hpp"
// Member 'rgb_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::DetectedObjects & msg,
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

  // member: detected_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detected_objects.size() == 0) {
      out << "detected_objects: []\n";
    } else {
      out << "detected_objects:\n";
      for (auto item : msg.detected_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rgb_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb_image:\n";
    to_yaml(msg.rgb_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::DetectedObjects & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::DetectedObjects>()
{
  return "vojext_msgs::msg::DetectedObjects";
}

template<>
inline const char * name<vojext_msgs::msg::DetectedObjects>()
{
  return "vojext_msgs/msg/DetectedObjects";
}

template<>
struct has_fixed_size<vojext_msgs::msg::DetectedObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::DetectedObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::DetectedObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECTS__TRAITS_HPP_
