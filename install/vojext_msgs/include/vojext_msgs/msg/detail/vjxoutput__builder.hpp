// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Vjxoutput.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__VJXOUTPUT__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__VJXOUTPUT__BUILDER_HPP_

#include "vojext_msgs/msg/detail/vjxoutput__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Vjxoutput_velocity
{
public:
  explicit Init_Vjxoutput_velocity(::vojext_msgs::msg::Vjxoutput & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Vjxoutput velocity(::vojext_msgs::msg::Vjxoutput::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Vjxoutput msg_;
};

class Init_Vjxoutput_pose
{
public:
  explicit Init_Vjxoutput_pose(::vojext_msgs::msg::Vjxoutput & msg)
  : msg_(msg)
  {}
  Init_Vjxoutput_velocity pose(::vojext_msgs::msg::Vjxoutput::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Vjxoutput_velocity(msg_);
  }

private:
  ::vojext_msgs::msg::Vjxoutput msg_;
};

class Init_Vjxoutput_timestamp
{
public:
  Init_Vjxoutput_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vjxoutput_pose timestamp(::vojext_msgs::msg::Vjxoutput::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Vjxoutput_pose(msg_);
  }

private:
  ::vojext_msgs::msg::Vjxoutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Vjxoutput>()
{
  return vojext_msgs::msg::builder::Init_Vjxoutput_timestamp();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__VJXOUTPUT__BUILDER_HPP_
