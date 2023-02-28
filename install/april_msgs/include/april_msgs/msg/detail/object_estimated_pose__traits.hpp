// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from april_msgs:msg/ObjectEstimatedPose.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__TRAITS_HPP_
#define APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__TRAITS_HPP_

#include "april_msgs/msg/detail/object_estimated_pose__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'estimated_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const april_msgs::msg::ObjectEstimatedPose & msg,
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

  // member: point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud:\n";
    to_yaml(msg.point_cloud, out, indentation + 2);
  }

  // member: estimated_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_pose:\n";
    to_yaml(msg.estimated_pose, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: sclass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sclass: ";
    value_to_yaml(msg.sclass, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const april_msgs::msg::ObjectEstimatedPose & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<april_msgs::msg::ObjectEstimatedPose>()
{
  return "april_msgs::msg::ObjectEstimatedPose";
}

template<>
inline const char * name<april_msgs::msg::ObjectEstimatedPose>()
{
  return "april_msgs/msg/ObjectEstimatedPose";
}

template<>
struct has_fixed_size<april_msgs::msg::ObjectEstimatedPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<april_msgs::msg::ObjectEstimatedPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<april_msgs::msg::ObjectEstimatedPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__TRAITS_HPP_