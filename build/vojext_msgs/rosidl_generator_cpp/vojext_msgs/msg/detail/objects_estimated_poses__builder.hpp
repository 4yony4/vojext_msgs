// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/ObjectsEstimatedPoses.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__BUILDER_HPP_

#include "vojext_msgs/msg/detail/objects_estimated_poses__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectsEstimatedPoses_objects_estimated_poses
{
public:
  explicit Init_ObjectsEstimatedPoses_objects_estimated_poses(::vojext_msgs::msg::ObjectsEstimatedPoses & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::ObjectsEstimatedPoses objects_estimated_poses(::vojext_msgs::msg::ObjectsEstimatedPoses::_objects_estimated_poses_type arg)
  {
    msg_.objects_estimated_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectsEstimatedPoses msg_;
};

class Init_ObjectsEstimatedPoses_header
{
public:
  Init_ObjectsEstimatedPoses_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectsEstimatedPoses_objects_estimated_poses header(::vojext_msgs::msg::ObjectsEstimatedPoses::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectsEstimatedPoses_objects_estimated_poses(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectsEstimatedPoses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::ObjectsEstimatedPoses>()
{
  return vojext_msgs::msg::builder::Init_ObjectsEstimatedPoses_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__BUILDER_HPP_
