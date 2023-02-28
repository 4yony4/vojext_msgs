// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/ObjectEstimatedPose.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__BUILDER_HPP_

#include "april_msgs/msg/detail/object_estimated_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectEstimatedPose_sclass
{
public:
  explicit Init_ObjectEstimatedPose_sclass(::april_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::ObjectEstimatedPose sclass(::april_msgs::msg::ObjectEstimatedPose::_sclass_type arg)
  {
    msg_.sclass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_id
{
public:
  explicit Init_ObjectEstimatedPose_id(::april_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  Init_ObjectEstimatedPose_sclass id(::april_msgs::msg::ObjectEstimatedPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectEstimatedPose_sclass(msg_);
  }

private:
  ::april_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_estimated_pose
{
public:
  explicit Init_ObjectEstimatedPose_estimated_pose(::april_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  Init_ObjectEstimatedPose_id estimated_pose(::april_msgs::msg::ObjectEstimatedPose::_estimated_pose_type arg)
  {
    msg_.estimated_pose = std::move(arg);
    return Init_ObjectEstimatedPose_id(msg_);
  }

private:
  ::april_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_point_cloud
{
public:
  explicit Init_ObjectEstimatedPose_point_cloud(::april_msgs::msg::ObjectEstimatedPose & msg)
  : msg_(msg)
  {}
  Init_ObjectEstimatedPose_estimated_pose point_cloud(::april_msgs::msg::ObjectEstimatedPose::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return Init_ObjectEstimatedPose_estimated_pose(msg_);
  }

private:
  ::april_msgs::msg::ObjectEstimatedPose msg_;
};

class Init_ObjectEstimatedPose_header
{
public:
  Init_ObjectEstimatedPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectEstimatedPose_point_cloud header(::april_msgs::msg::ObjectEstimatedPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectEstimatedPose_point_cloud(msg_);
  }

private:
  ::april_msgs::msg::ObjectEstimatedPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::ObjectEstimatedPose>()
{
  return april_msgs::msg::builder::Init_ObjectEstimatedPose_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__BUILDER_HPP_
