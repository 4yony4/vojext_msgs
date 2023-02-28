// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/QualityCheckResult.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__BUILDER_HPP_

#include "april_msgs/msg/detail/quality_check_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_QualityCheckResult_msg
{
public:
  explicit Init_QualityCheckResult_msg(::april_msgs::msg::QualityCheckResult & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::QualityCheckResult msg(::april_msgs::msg::QualityCheckResult::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::QualityCheckResult msg_;
};

class Init_QualityCheckResult_result
{
public:
  explicit Init_QualityCheckResult_result(::april_msgs::msg::QualityCheckResult & msg)
  : msg_(msg)
  {}
  Init_QualityCheckResult_msg result(::april_msgs::msg::QualityCheckResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_QualityCheckResult_msg(msg_);
  }

private:
  ::april_msgs::msg::QualityCheckResult msg_;
};

class Init_QualityCheckResult_object_id
{
public:
  explicit Init_QualityCheckResult_object_id(::april_msgs::msg::QualityCheckResult & msg)
  : msg_(msg)
  {}
  Init_QualityCheckResult_result object_id(::april_msgs::msg::QualityCheckResult::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_QualityCheckResult_result(msg_);
  }

private:
  ::april_msgs::msg::QualityCheckResult msg_;
};

class Init_QualityCheckResult_header
{
public:
  Init_QualityCheckResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QualityCheckResult_object_id header(::april_msgs::msg::QualityCheckResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QualityCheckResult_object_id(msg_);
  }

private:
  ::april_msgs::msg::QualityCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::QualityCheckResult>()
{
  return april_msgs::msg::builder::Init_QualityCheckResult_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__BUILDER_HPP_
