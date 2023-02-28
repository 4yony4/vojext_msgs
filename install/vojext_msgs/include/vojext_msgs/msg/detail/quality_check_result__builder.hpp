// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/QualityCheckResult.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__BUILDER_HPP_

#include "vojext_msgs/msg/detail/quality_check_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_QualityCheckResult_msg
{
public:
  explicit Init_QualityCheckResult_msg(::vojext_msgs::msg::QualityCheckResult & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::QualityCheckResult msg(::vojext_msgs::msg::QualityCheckResult::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::QualityCheckResult msg_;
};

class Init_QualityCheckResult_result
{
public:
  explicit Init_QualityCheckResult_result(::vojext_msgs::msg::QualityCheckResult & msg)
  : msg_(msg)
  {}
  Init_QualityCheckResult_msg result(::vojext_msgs::msg::QualityCheckResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_QualityCheckResult_msg(msg_);
  }

private:
  ::vojext_msgs::msg::QualityCheckResult msg_;
};

class Init_QualityCheckResult_object_id
{
public:
  explicit Init_QualityCheckResult_object_id(::vojext_msgs::msg::QualityCheckResult & msg)
  : msg_(msg)
  {}
  Init_QualityCheckResult_result object_id(::vojext_msgs::msg::QualityCheckResult::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_QualityCheckResult_result(msg_);
  }

private:
  ::vojext_msgs::msg::QualityCheckResult msg_;
};

class Init_QualityCheckResult_header
{
public:
  Init_QualityCheckResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QualityCheckResult_object_id header(::vojext_msgs::msg::QualityCheckResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QualityCheckResult_object_id(msg_);
  }

private:
  ::vojext_msgs::msg::QualityCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::QualityCheckResult>()
{
  return vojext_msgs::msg::builder::Init_QualityCheckResult_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__BUILDER_HPP_
