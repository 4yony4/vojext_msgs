// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_

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
// Member 'objects_list'
#include "april_msgs/msg/detail/physical_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__Environment __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__Environment __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Environment_
{
  using Type = Environment_<ContainerAllocator>;

  explicit Environment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
      this->semantictag = "";
    }
  }

  explicit Environment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    semantictag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
      this->semantictag = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _semantictag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _semantictag_type semantictag;
  using _objects_list_type =
    std::vector<april_msgs::msg::PhysicalObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::PhysicalObject_<ContainerAllocator>>>;
  _objects_list_type objects_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__semantictag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->semantictag = _arg;
    return *this;
  }
  Type & set__objects_list(
    const std::vector<april_msgs::msg::PhysicalObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::PhysicalObject_<ContainerAllocator>>> & _arg)
  {
    this->objects_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::Environment_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::Environment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::Environment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::Environment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::Environment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::Environment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::Environment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::Environment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::Environment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::Environment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__Environment
    std::shared_ptr<april_msgs::msg::Environment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__Environment
    std::shared_ptr<april_msgs::msg::Environment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Environment_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->semantictag != other.semantictag) {
      return false;
    }
    if (this->objects_list != other.objects_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Environment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Environment_

// alias to use template instance with default allocator
using Environment =
  april_msgs::msg::Environment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
