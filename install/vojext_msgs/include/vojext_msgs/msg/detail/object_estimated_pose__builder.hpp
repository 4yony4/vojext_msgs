// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/ObjectEstimatedPose.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__BUILDER_HPP_

#include "vojext_msgs/msg/detail/object_estimated_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectEstimatedPose_sclass
{
public:
  explicit Init_ObjectEstimatedPose_sclass(::vojext_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::ObjectEstimatedPose sclass(::vojext_msgs::msg::ObjectEstimatedPose::_sclass_type arg)
  {
    msg_.sclass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_id
{
public:
  explicit Init_ObjectEstimatedPose_id(::vojext_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  Init_ObjectEstimatedPose_sclass id(::vojext_msgs::msg::ObjectEstimatedPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectEstimatedPose_sclass(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_estimated_pose
{
public:
  explicit Init_ObjectEstimatedPose_estimated_pose(::vojext_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  Init_ObjectEstimatedPose_id estimated_pose(::vojext_msgs::msg::ObjectEstimatedPose::_estimated_pose_type arg)
  {
    msg_.estimated_pose = std::move(arg);
    return Init_ObjectEstimatedPose_id(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_point_cloud
{
public:
  explicit Init_ObjectEstimatedPose_point_cloud(::vojext_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  Init_ObjectEstimatedPose_estimated_pose point_cloud(::vojext_msgs::msg::ObjectEstimatedPose::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return Init_ObjectEstimatedPose_estimated_pose(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_header
{
public:
  Init_ObjectEstimatedPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectEstimatedPose_point_cloud header(::vojext_msgs::msg::ObjectEstimatedPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectEstimatedPose_point_cloud(msg_);
  }

private:
  ::vojext_msgs::msg::ObjectEstimatedPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::ObjectEstimatedPose>()
{
  return vojext_msgs::msg::builder::Init_ObjectEstimatedPose_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__BUILDER_HPP_
