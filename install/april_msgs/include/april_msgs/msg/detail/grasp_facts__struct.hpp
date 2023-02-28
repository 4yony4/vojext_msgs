// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/GraspFacts.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__GRASP_FACTS__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__GRASP_FACTS__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__GraspFacts __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__GraspFacts __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspFacts_
{
  using Type = GraspFacts_<ContainerAllocator>;

  explicit GraspFacts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grasp_type = "";
      this->grasp_location = "";
      this->grasp_dimension = 0.0f;
    }
  }

  explicit GraspFacts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    grasp_type(_alloc),
    grasp_location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grasp_type = "";
      this->grasp_location = "";
      this->grasp_dimension = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _grasp_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grasp_type_type grasp_type;
  using _grasp_location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grasp_location_type grasp_location;
  using _grasp_dimension_type =
    float;
  _grasp_dimension_type grasp_dimension;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__grasp_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grasp_type = _arg;
    return *this;
  }
  Type & set__grasp_location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grasp_location = _arg;
    return *this;
  }
  Type & set__grasp_dimension(
    const float & _arg)
  {
    this->grasp_dimension = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::GraspFacts_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::GraspFacts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::GraspFacts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::GraspFacts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__GraspFacts
    std::shared_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__GraspFacts
    std::shared_ptr<april_msgs::msg::GraspFacts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspFacts_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->grasp_type != other.grasp_type) {
      return false;
    }
    if (this->grasp_location != other.grasp_location) {
      return false;
    }
    if (this->grasp_dimension != other.grasp_dimension) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspFacts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspFacts_

// alias to use template instance with default allocator
using GraspFacts =
  april_msgs::msg::GraspFacts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__GRASP_FACTS__STRUCT_HPP_
