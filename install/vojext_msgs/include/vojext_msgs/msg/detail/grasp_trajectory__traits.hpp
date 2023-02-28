// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__TRAITS_HPP_

#include "vojext_msgs/msg/detail/grasp_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hand_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'fingers_states'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::GraspTrajectory & msg,
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

  // member: ee_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_frame_id: ";
    value_to_yaml(msg.ee_frame_id, out);
    out << "\n";
  }

  // member: hand_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_poses.size() == 0) {
      out << "hand_poses: []\n";
    } else {
      out << "hand_poses:\n";
      for (auto item : msg.hand_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: fingers_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fingers_states.size() == 0) {
      out << "fingers_states: []\n";
    } else {
      out << "fingers_states:\n";
      for (auto item : msg.fingers_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::GraspTrajectory & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::GraspTrajectory>()
{
  return "vojext_msgs::msg::GraspTrajectory";
}

template<>
inline const char * name<vojext_msgs::msg::GraspTrajectory>()
{
  return "vojext_msgs/msg/GraspTrajectory";
}

template<>
struct has_fixed_size<vojext_msgs::msg::GraspTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::GraspTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::GraspTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__TRAITS_HPP_
