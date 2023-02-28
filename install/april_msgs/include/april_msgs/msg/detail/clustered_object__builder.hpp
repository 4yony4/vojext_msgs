// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/ClusteredObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__BUILDER_HPP_

#include "april_msgs/msg/detail/clustered_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusteredObject_sclass
{
public:
  explicit Init_ClusteredObject_sclass(::april_msgs::msg::ClusteredObject & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::ClusteredObject sclass(::april_msgs::msg::ClusteredObject::_sclass_type arg)
  {
    msg_.sclass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::ClusteredObject msg_;
};

class Init_ClusteredObject_id
{
public:
  explicit Init_ClusteredObject_id(::april_msgs::msg::ClusteredObject & msg)
  : msg_(msg)
  {}
  Init_ClusteredObject_sclass id(::april_msgs::msg::ClusteredObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ClusteredObject_sclass(msg_);
  }

private:
  ::april_msgs::msg::ClusteredObject msg_;
};

class Init_ClusteredObject_clustered_point_cloud
{
public:
  explicit Init_ClusteredObject_clustered_point_cloud(::april_msgs::msg::ClusteredObject & msg)
  : msg_(msg)
  {}
  Init_ClusteredObject_id clustered_point_cloud(::april_msgs::msg::ClusteredObject::_clustered_point_cloud_type arg)
  {
    msg_.clustered_point_cloud = std::move(arg);
    return Init_ClusteredObject_id(msg_);
  }

private:
  ::april_msgs::msg::ClusteredObject msg_;
};

class Init_ClusteredObject_header
{
public:
  Init_ClusteredObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusteredObject_clustered_point_cloud header(::april_msgs::msg::ClusteredObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClusteredObject_clustered_point_cloud(msg_);
  }

private:
  ::april_msgs::msg::ClusteredObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::ClusteredObject>()
{
  return april_msgs::msg::builder::Init_ClusteredObject_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__BUILDER_HPP_
