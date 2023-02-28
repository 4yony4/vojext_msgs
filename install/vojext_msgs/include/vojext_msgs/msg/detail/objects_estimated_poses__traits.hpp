// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/ObjectsEstimatedPoses.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__TRAITS_HPP_

#include "vojext_msgs/msg/detail/objects_estimated_poses__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects_estimated_poses'
#include "vojext_msgs/msg/detail/object_estimated_pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::ObjectsEstimatedPoses & msg,
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

  // member: objects_estimated_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects_estimated_poses.size() == 0) {
      out << "objects_estimated_poses: []\n";
    } else {
      out << "objects_estimated_poses:\n";
      for (auto item : msg.objects_estimated_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::ObjectsEstimatedPoses & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::ObjectsEstimatedPoses>()
{
  return "vojext_msgs::msg::ObjectsEstimatedPoses";
}

template<>
inline const char * name<vojext_msgs::msg::ObjectsEstimatedPoses>()
{
  return "vojext_msgs/msg/ObjectsEstimatedPoses";
}

template<>
struct has_fixed_size<vojext_msgs::msg::ObjectsEstimatedPoses>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::ObjectsEstimatedPoses>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::ObjectsEstimatedPoses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__TRAITS_HPP_
