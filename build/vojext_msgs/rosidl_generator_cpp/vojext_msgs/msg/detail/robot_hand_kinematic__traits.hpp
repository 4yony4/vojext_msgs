// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/RobotHandKinematic.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND_KINEMATIC__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND_KINEMATIC__TRAITS_HPP_

#include "vojext_msgs/msg/detail/robot_hand_kinematic__struct.hpp"
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
  const vojext_msgs::msg::RobotHandKinematic & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forces: ";
    value_to_yaml(msg.forces, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::RobotHandKinematic & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::RobotHandKinematic>()
{
  return "vojext_msgs::msg::RobotHandKinematic";
}

template<>
inline const char * name<vojext_msgs::msg::RobotHandKinematic>()
{
  return "vojext_msgs/msg/RobotHandKinematic";
}

template<>
struct has_fixed_size<vojext_msgs::msg::RobotHandKinematic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::RobotHandKinematic>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::RobotHandKinematic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND_KINEMATIC__TRAITS_HPP_
