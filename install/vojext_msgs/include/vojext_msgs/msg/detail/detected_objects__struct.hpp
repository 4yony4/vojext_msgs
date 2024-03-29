// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detected_objects'
#include "vojext_msgs/msg/detail/detected_object__struct.hpp"
// Member 'rgb_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__DetectedObjects __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__DetectedObjects __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjects_
{
  using Type = DetectedObjects_<ContainerAllocator>;

  explicit DetectedObjects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    rgb_image(_init)
  {
    (void)_init;
  }

  explicit DetectedObjects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rgb_image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detected_objects_type =
    std::vector<vojext_msgs::msg::DetectedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::DetectedObject_<ContainerAllocator>>>;
  _detected_objects_type detected_objects;
  using _rgb_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _rgb_image_type rgb_image;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detected_objects(
    const std::vector<vojext_msgs::msg::DetectedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::DetectedObject_<ContainerAllocator>>> & _arg)
  {
    this->detected_objects = _arg;
    return *this;
  }
  Type & set__rgb_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->rgb_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::DetectedObjects_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::DetectedObjects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::DetectedObjects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::DetectedObjects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__DetectedObjects
    std::shared_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__DetectedObjects
    std::shared_ptr<vojext_msgs::msg::DetectedObjects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjects_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detected_objects != other.detected_objects) {
      return false;
    }
    if (this->rgb_image != other.rgb_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjects_

// alias to use template instance with default allocator
using DetectedObjects =
  vojext_msgs::msg::DetectedObjects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_HPP_
