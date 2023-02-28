// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__NeuromorphicSensing __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__NeuromorphicSensing __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NeuromorphicSensing_
{
  using Type = NeuromorphicSensing_<ContainerAllocator>;

  explicit NeuromorphicSensing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point1_speed = "";
      this->point2_speed = "";
    }
  }

  explicit NeuromorphicSensing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    point1_speed(_alloc),
    point2_speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point1_speed = "";
      this->point2_speed = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _point1_speed_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _point1_speed_type point1_speed;
  using _point2_speed_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _point2_speed_type point2_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__point1_speed(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->point1_speed = _arg;
    return *this;
  }
  Type & set__point2_speed(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->point2_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::NeuromorphicSensing_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::NeuromorphicSensing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::NeuromorphicSensing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::NeuromorphicSensing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__NeuromorphicSensing
    std::shared_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__NeuromorphicSensing
    std::shared_ptr<april_msgs::msg::NeuromorphicSensing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NeuromorphicSensing_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->point1_speed != other.point1_speed) {
      return false;
    }
    if (this->point2_speed != other.point2_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const NeuromorphicSensing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NeuromorphicSensing_

// alias to use template instance with default allocator
using NeuromorphicSensing =
  april_msgs::msg::NeuromorphicSensing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_HPP_
