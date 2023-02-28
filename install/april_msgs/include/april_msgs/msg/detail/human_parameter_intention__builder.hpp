// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_

#include "april_msgs/msg/detail/human_parameter_intention__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanParameterIntention_humanmotion_list
{
public:
  explicit Init_HumanParameterIntention_humanmotion_list(::april_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::HumanParameterIntention humanmotion_list(::april_msgs::msg::HumanParameterIntention::_humanmotion_list_type arg)
  {
    msg_.humanmotion_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_mood_level
{
public:
  explicit Init_HumanParameterIntention_mood_level(::april_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_humanmotion_list mood_level(::april_msgs::msg::HumanParameterIntention::_mood_level_type arg)
  {
    msg_.mood_level = std::move(arg);
    return Init_HumanParameterIntention_humanmotion_list(msg_);
  }

private:
  ::april_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_cognitive_level
{
public:
  explicit Init_HumanParameterIntention_cognitive_level(::april_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_mood_level cognitive_level(::april_msgs::msg::HumanParameterIntention::_cognitive_level_type arg)
  {
    msg_.cognitive_level = std::move(arg);
    return Init_HumanParameterIntention_mood_level(msg_);
  }

private:
  ::april_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_engagement_level
{
public:
  explicit Init_HumanParameterIntention_engagement_level(::april_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_cognitive_level engagement_level(::april_msgs::msg::HumanParameterIntention::_engagement_level_type arg)
  {
    msg_.engagement_level = std::move(arg);
    return Init_HumanParameterIntention_cognitive_level(msg_);
  }

private:
  ::april_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_motion_prediction
{
public:
  explicit Init_HumanParameterIntention_motion_prediction(::april_msgs::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_engagement_level motion_prediction(::april_msgs::msg::HumanParameterIntention::_motion_prediction_type arg)
  {
    msg_.motion_prediction = std::move(arg);
    return Init_HumanParameterIntention_engagement_level(msg_);
  }

private:
  ::april_msgs::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_header
{
public:
  Init_HumanParameterIntention_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanParameterIntention_motion_prediction header(::april_msgs::msg::HumanParameterIntention::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanParameterIntention_motion_prediction(msg_);
  }

private:
  ::april_msgs::msg::HumanParameterIntention msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::HumanParameterIntention>()
{
  return april_msgs::msg::builder::Init_HumanParameterIntention_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_
