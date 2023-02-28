// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/RobotGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_

#include "april_msgs/msg/detail/robot_grasping_strategies__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotGraspingStrategies_timetolift
{
public:
  explicit Init_RobotGraspingStrategies_timetolift(::april_msgs::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::RobotGraspingStrategies timetolift(::april_msgs::msg::RobotGraspingStrategies::_timetolift_type arg)
  {
    msg_.timetolift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_location
{
public:
  explicit Init_RobotGraspingStrategies_location(::april_msgs::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  Init_RobotGraspingStrategies_timetolift location(::april_msgs::msg::RobotGraspingStrategies::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_RobotGraspingStrategies_timetolift(msg_);
  }

private:
  ::april_msgs::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_type
{
public:
  explicit Init_RobotGraspingStrategies_type(::april_msgs::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  Init_RobotGraspingStrategies_location type(::april_msgs::msg::RobotGraspingStrategies::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RobotGraspingStrategies_location(msg_);
  }

private:
  ::april_msgs::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_header
{
public:
  Init_RobotGraspingStrategies_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotGraspingStrategies_type header(::april_msgs::msg::RobotGraspingStrategies::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotGraspingStrategies_type(msg_);
  }

private:
  ::april_msgs::msg::RobotGraspingStrategies msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::RobotGraspingStrategies>()
{
  return april_msgs::msg::builder::Init_RobotGraspingStrategies_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_
