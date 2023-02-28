// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__BUILDER_HPP_

#include "april_msgs/msg/detail/grasp_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspTrajectory_fingers_states
{
public:
  explicit Init_GraspTrajectory_fingers_states(::april_msgs::msg::GraspTrajectory & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::GraspTrajectory fingers_states(::april_msgs::msg::GraspTrajectory::_fingers_states_type arg)
  {
    msg_.fingers_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::GraspTrajectory msg_;
};

class Init_GraspTrajectory_hand_poses
{
public:
  explicit Init_GraspTrajectory_hand_poses(::april_msgs::msg::GraspTrajectory & msg)
  : msg_(msg)
  {}
  Init_GraspTrajectory_fingers_states hand_poses(::april_msgs::msg::GraspTrajectory::_hand_poses_type arg)
  {
    msg_.hand_poses = std::move(arg);
    return Init_GraspTrajectory_fingers_states(msg_);
  }

private:
  ::april_msgs::msg::GraspTrajectory msg_;
};

class Init_GraspTrajectory_ee_frame_id
{
public:
  explicit Init_GraspTrajectory_ee_frame_id(::april_msgs::msg::GraspTrajectory & msg)
  : msg_(msg)
  {}
  Init_GraspTrajectory_hand_poses ee_frame_id(::april_msgs::msg::GraspTrajectory::_ee_frame_id_type arg)
  {
    msg_.ee_frame_id = std::move(arg);
    return Init_GraspTrajectory_hand_poses(msg_);
  }

private:
  ::april_msgs::msg::GraspTrajectory msg_;
};

class Init_GraspTrajectory_header
{
public:
  Init_GraspTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspTrajectory_ee_frame_id header(::april_msgs::msg::GraspTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GraspTrajectory_ee_frame_id(msg_);
  }

private:
  ::april_msgs::msg::GraspTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::GraspTrajectory>()
{
  return april_msgs::msg::builder::Init_GraspTrajectory_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__BUILDER_HPP_
