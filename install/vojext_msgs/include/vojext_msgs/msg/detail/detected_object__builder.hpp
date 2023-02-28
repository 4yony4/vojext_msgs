// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include "vojext_msgs/msg/detail/detected_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_class_name
{
public:
  explicit Init_DetectedObject_class_name(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::DetectedObject class_name(::vojext_msgs::msg::DetectedObject::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_class_id
{
public:
  explicit Init_DetectedObject_class_id(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_class_name class_id(::vojext_msgs::msg::DetectedObject::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_DetectedObject_class_name(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_tracked_id
{
public:
  explicit Init_DetectedObject_tracked_id(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_class_id tracked_id(::vojext_msgs::msg::DetectedObject::_tracked_id_type arg)
  {
    msg_.tracked_id = std::move(arg);
    return Init_DetectedObject_class_id(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_detected_id
{
public:
  explicit Init_DetectedObject_detected_id(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_tracked_id detected_id(::vojext_msgs::msg::DetectedObject::_detected_id_type arg)
  {
    msg_.detected_id = std::move(arg);
    return Init_DetectedObject_tracked_id(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_probability
{
public:
  explicit Init_DetectedObject_probability(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_detected_id probability(::vojext_msgs::msg::DetectedObject::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_DetectedObject_detected_id(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_segmentation_mask
{
public:
  explicit Init_DetectedObject_segmentation_mask(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_probability segmentation_mask(::vojext_msgs::msg::DetectedObject::_segmentation_mask_type arg)
  {
    msg_.segmentation_mask = std::move(arg);
    return Init_DetectedObject_probability(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_bounding_box
{
public:
  explicit Init_DetectedObject_bounding_box(::vojext_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_segmentation_mask bounding_box(::vojext_msgs::msg::DetectedObject::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_DetectedObject_segmentation_mask(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_header
{
public:
  Init_DetectedObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_bounding_box header(::vojext_msgs::msg::DetectedObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObject_bounding_box(msg_);
  }

private:
  ::vojext_msgs::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::DetectedObject>()
{
  return vojext_msgs::msg::builder::Init_DetectedObject_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
