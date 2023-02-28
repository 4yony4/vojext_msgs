// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_arm_kinematic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotArmKinematic_forces
{
public:
  explicit Init_RobotArmKinematic_forces(::vojext_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotArmKinematic forces(::vojext_msgs::msg::RobotArmKinematic::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_acceleration
{
public:
  explicit Init_RobotArmKinematic_acceleration(::vojext_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_forces acceleration(::vojext_msgs::msg::RobotArmKinematic::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RobotArmKinematic_forces(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_velocity
{
public:
  explicit Init_RobotArmKinematic_velocity(::vojext_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_acceleration velocity(::vojext_msgs::msg::RobotArmKinematic::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotArmKinematic_acceleration(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_position
{
public:
  explicit Init_RobotArmKinematic_position(::vojext_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_velocity position(::vojext_msgs::msg::RobotArmKinematic::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotArmKinematic_velocity(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_header
{
public:
  Init_RobotArmKinematic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmKinematic_position header(::vojext_msgs::msg::RobotArmKinematic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArmKinematic_position(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArmKinematic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotArmKinematic>()
{
  return vojext_msgs::msg::builder::Init_RobotArmKinematic_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_
