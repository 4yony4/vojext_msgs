// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_

#include "april_msgs/msg/detail/robot_arm_kinematic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotArmKinematic_forces
{
public:
  explicit Init_RobotArmKinematic_forces(::april_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::RobotArmKinematic forces(::april_msgs::msg::RobotArmKinematic::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_acceleration
{
public:
  explicit Init_RobotArmKinematic_acceleration(::april_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_forces acceleration(::april_msgs::msg::RobotArmKinematic::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RobotArmKinematic_forces(msg_);
  }

private:
  ::april_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_velocity
{
public:
  explicit Init_RobotArmKinematic_velocity(::april_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_acceleration velocity(::april_msgs::msg::RobotArmKinematic::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotArmKinematic_acceleration(msg_);
  }

private:
  ::april_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_position
{
public:
  explicit Init_RobotArmKinematic_position(::april_msgs::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_velocity position(::april_msgs::msg::RobotArmKinematic::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotArmKinematic_velocity(msg_);
  }

private:
  ::april_msgs::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_header
{
public:
  Init_RobotArmKinematic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmKinematic_position header(::april_msgs::msg::RobotArmKinematic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArmKinematic_position(msg_);
  }

private:
  ::april_msgs::msg::RobotArmKinematic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::RobotArmKinematic>()
{
  return april_msgs::msg::builder::Init_RobotArmKinematic_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_
