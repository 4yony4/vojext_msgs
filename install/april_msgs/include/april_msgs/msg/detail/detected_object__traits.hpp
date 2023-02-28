// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

#include "april_msgs/msg/detail/detected_object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bounding_box'
#include "april_msgs/msg/detail/bounding_box__traits.hpp"
// Member 'segmentation_mask'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::DetectedObject & msg,
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

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_yaml(msg.bounding_box, out, indentation + 2);
  }

  // member: segmentation_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segmentation_mask:\n";
    to_yaml(msg.segmentation_mask, out, indentation + 2);
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: detected_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected_id: ";
    value_to_yaml(msg.detected_id, out);
    out << "\n";
  }

  // member: tracked_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_id: ";
    value_to_yaml(msg.tracked_id, out);
    out << "\n";
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    value_to_yaml(msg.class_id, out);
    out << "\n";
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

inline std::string to_yaml(const april_msgs::msg::DetectedObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::DetectedObject>()
{
  return "april_msgs::msg::DetectedObject";
}

template<>
inline const char * name<april_msgs::msg::DetectedObject>()
{
  return "april_msgs/msg/DetectedObject";
}

template<>
struct has_fixed_size<april_msgs::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::DetectedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
