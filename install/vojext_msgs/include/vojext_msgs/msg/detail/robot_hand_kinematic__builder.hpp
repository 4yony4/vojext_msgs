// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotHandKinematic.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND_KINEMATIC__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND_KINEMATIC__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_hand_kinematic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHandKinematic_forces
{
public:
  explicit Init_RobotHandKinematic_forces(::vojext_msgs::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotHandKinematic forces(::vojext_msgs::msg::RobotHandKinematic::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_acceleration
{
public:
  explicit Init_RobotHandKinematic_acceleration(::vojext_msgs::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotHandKinematic_forces acceleration(::vojext_msgs::msg::RobotHandKinematic::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RobotHandKinematic_forces(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_velocity
{
public:
  explicit Init_RobotHandKinematic_velocity(::vojext_msgs::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotHandKinematic_acceleration velocity(::vojext_msgs::msg::RobotHandKinematic::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotHandKinematic_acceleration(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_position
{
public:
  explicit Init_RobotHandKinematic_position(::vojext_msgs::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotHandKinematic_velocity position(::vojext_msgs::msg::RobotHandKinematic::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotHandKinematic_velocity(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_header
{
public:
  Init_RobotHandKinematic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHandKinematic_position header(::vojext_msgs::msg::RobotHandKinematic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHandKinematic_position(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHandKinematic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotHandKinematic>()
{
  return vojext_msgs::msg::builder::Init_RobotHandKinematic_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND_KINEMATIC__BUILDER_HPP_
