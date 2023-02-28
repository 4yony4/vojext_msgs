// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_grasping_strategies__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotGraspingStrategies_timetolift
{
public:
  explicit Init_RobotGraspingStrategies_timetolift(::vojext_msgs::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotGraspingStrategies timetolift(::vojext_msgs::msg::RobotGraspingStrategies::_timetolift_type arg)
  {
    msg_.timetolift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_location
{
public:
  explicit Init_RobotGraspingStrategies_location(::vojext_msgs::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  Init_RobotGraspingStrategies_timetolift location(::vojext_msgs::msg::RobotGraspingStrategies::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_RobotGraspingStrategies_timetolift(msg_);
  }

private:
  ::vojext_msgs::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_type
{
public:
  explicit Init_RobotGraspingStrategies_type(::vojext_msgs::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  Init_RobotGraspingStrategies_location type(::vojext_msgs::msg::RobotGraspingStrategies::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RobotGraspingStrategies_location(msg_);
  }

private:
  ::vojext_msgs::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_header
{
public:
  Init_RobotGraspingStrategies_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotGraspingStrategies_type header(::vojext_msgs::msg::RobotGraspingStrategies::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotGraspingStrategies_type(msg_);
  }

private:
  ::vojext_msgs::msg::RobotGraspingStrategies msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotGraspingStrategies>()
{
  return vojext_msgs::msg::builder::Init_RobotGraspingStrategies_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_
