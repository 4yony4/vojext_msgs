// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/ActionCommon.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ACTION_COMMON__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__ACTION_COMMON__BUILDER_HPP_

#include "april_msgs/msg/detail/action_common__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionCommon_force_limits
{
public:
  explicit Init_ActionCommon_force_limits(::april_msgs::msg::ActionCommon & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::ActionCommon force_limits(::april_msgs::msg::ActionCommon::_force_limits_type arg)
  {
    msg_.force_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::ActionCommon msg_;
};

class Init_ActionCommon_target_id
{
public:
  explicit Init_ActionCommon_target_id(::april_msgs::msg::ActionCommon & msg)
  : msg_(msg)
  {}
  Init_ActionCommon_force_limits target_id(::april_msgs::msg::ActionCommon::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_ActionCommon_force_limits(msg_);
  }

private:
  ::april_msgs::msg::ActionCommon msg_;
};

class Init_ActionCommon_action_type
{
public:
  explicit Init_ActionCommon_action_type(::april_msgs::msg::ActionCommon & msg)
  : msg_(msg)
  {}
  Init_ActionCommon_target_id action_type(::april_msgs::msg::ActionCommon::_action_type_type arg)
  {
    msg_.action_type = std::move(arg);
    return Init_ActionCommon_target_id(msg_);
  }

private:
  ::april_msgs::msg::ActionCommon msg_;
};

class Init_ActionCommon_header
{
public:
  Init_ActionCommon_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionCommon_action_type header(::april_msgs::msg::ActionCommon::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActionCommon_action_type(msg_);
  }

private:
  ::april_msgs::msg::ActionCommon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::ActionCommon>()
{
  return april_msgs::msg::builder::Init_ActionCommon_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ACTION_COMMON__BUILDER_HPP_
