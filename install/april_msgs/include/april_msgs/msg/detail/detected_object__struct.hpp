// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_HPP_

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
// Member 'bounding_box'
#include "april_msgs/msg/detail/bounding_box__struct.hpp"
// Member 'segmentation_mask'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__DetectedObject __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__DetectedObject __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObject_
{
  using Type = DetectedObject_<ContainerAllocator>;

  explicit DetectedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bounding_box(_init),
    segmentation_mask(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
      this->detected_id = 0;
      this->tracked_id = 0;
      this->class_id = 0;
      this->class_name = "";
    }
  }

  explicit DetectedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    bounding_box(_alloc, _init),
    segmentation_mask(_alloc, _init),
    class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
      this->detected_id = 0;
      this->tracked_id = 0;
      this->class_id = 0;
      this->class_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bounding_box_type =
    april_msgs::msg::BoundingBox_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _segmentation_mask_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _segmentation_mask_type segmentation_mask;
  using _probability_type =
    double;
  _probability_type probability;
  using _detected_id_type =
    int16_t;
  _detected_id_type detected_id;
  using _tracked_id_type =
    int16_t;
  _tracked_id_type tracked_id;
  using _class_id_type =
    int16_t;
  _class_id_type class_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const april_msgs::msg::BoundingBox_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__segmentation_mask(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->segmentation_mask = _arg;
    return *this;
  }
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__detected_id(
    const int16_t & _arg)
  {
    this->detected_id = _arg;
    return *this;
  }
  Type & set__tracked_id(
    const int16_t & _arg)
  {
    this->tracked_id = _arg;
    return *this;
  }
  Type & set__class_id(
    const int16_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::DetectedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::DetectedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::DetectedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::DetectedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__DetectedObject
    std::shared_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__DetectedObject
    std::shared_ptr<april_msgs::msg::DetectedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->segmentation_mask != other.segmentation_mask) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->detected_id != other.detected_id) {
      return false;
    }
    if (this->tracked_id != other.tracked_id) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObject_

// alias to use template instance with default allocator
using DetectedObject =
  april_msgs::msg::DetectedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_HPP_
