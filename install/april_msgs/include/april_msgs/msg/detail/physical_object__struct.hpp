// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/PhysicalObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__PhysicalObject __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__PhysicalObject __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PhysicalObject_
{
  using Type = PhysicalObject_<ContainerAllocator>;

  explicit PhysicalObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape = "";
      this->size = 0ll;
      this->position = "";
      this->orientation = "";
    }
  }

  explicit PhysicalObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    shape(_alloc),
    position(_alloc),
    orientation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape = "";
      this->size = 0ll;
      this->position = "";
      this->orientation = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _shape_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shape_type shape;
  using _size_type =
    int64_t;
  _size_type size;
  using _position_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_type position;
  using _orientation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__shape(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__size(
    const int64_t & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__position(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::PhysicalObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::PhysicalObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::PhysicalObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::PhysicalObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__PhysicalObject
    std::shared_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__PhysicalObject
    std::shared_ptr<april_msgs::msg::PhysicalObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PhysicalObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PhysicalObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PhysicalObject_

// alias to use template instance with default allocator
using PhysicalObject =
  april_msgs::msg::PhysicalObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__STRUCT_HPP_
