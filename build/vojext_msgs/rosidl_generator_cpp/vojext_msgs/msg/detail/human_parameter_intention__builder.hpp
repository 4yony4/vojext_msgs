// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_

#include "vojext_msgs/msg/detail/human_parameter_intention__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanParameterIntention_humanmotion_list
{
public:
  explicit Init_HumanParameterIntention_humanmotion_list(::vojext_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::HumanParameterIntention humanmotion_list(::vojext_msgs::msg::HumanParameterIntention::_humanmotion_list_type arg)
  {
    msg_.humanmotion_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_mood_level
{
public:
  explicit Init_HumanParameterIntention_mood_level(::vojext_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_humanmotion_list mood_level(::vojext_msgs::msg::HumanParameterIntention::_mood_level_type arg)
  {
    msg_.mood_level = std::move(arg);
    return Init_HumanParameterIntention_humanmotion_list(msg_);
  }

private:
  ::vojext_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_cognitive_level
{
public:
  explicit Init_HumanParameterIntention_cognitive_level(::vojext_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_mood_level cognitive_level(::vojext_msgs::msg::HumanParameterIntention::_cognitive_level_type arg)
  {
    msg_.cognitive_level = std::move(arg);
    return Init_HumanParameterIntention_mood_level(msg_);
  }

private:
  ::vojext_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_engagement_level
{
public:
  explicit Init_HumanParameterIntention_engagement_level(::vojext_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_cognitive_level engagement_level(::vojext_msgs::msg::HumanParameterIntention::_engagement_level_type arg)
  {
    msg_.engagement_level = std::move(arg);
    return Init_HumanParameterIntention_cognitive_level(msg_);
  }

private:
  ::vojext_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_motion_prediction
{
public:
  explicit Init_HumanParameterIntention_motion_prediction(::vojext_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_engagement_level motion_prediction(::vojext_msgs::msg::HumanParameterIntention::_motion_prediction_type arg)
  {
    msg_.motion_prediction = std::move(arg);
    return Init_HumanParameterIntention_engagement_level(msg_);
  }

private:
  ::vojext_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_header
{
public:
  Init_HumanParameterIntention_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanParameterIntention_motion_prediction header(::vojext_msgs::msg::HumanParameterIntention::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanParameterIntention_motion_prediction(msg_);
  }

private:
  ::vojext_msgs::msg::HumanParameterIntention msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::HumanParameterIntention>()
{
  return vojext_msgs::msg::builder::Init_HumanParameterIntention_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_
