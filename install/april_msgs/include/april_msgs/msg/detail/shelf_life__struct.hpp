// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/ShelfLife.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__SHELF_LIFE__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__SHELF_LIFE__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__ShelfLife __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__ShelfLife __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShelfLife_
{
  using Type = ShelfLife_<ContainerAllocator>;

  explicit ShelfLife_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ul;
      this->shelf_life = 0ul;
    }
  }

  explicit ShelfLife_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ul;
      this->shelf_life = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_id_type =
    uint32_t;
  _object_id_type object_id;
  using _shelf_life_type =
    uint32_t;
  _shelf_life_type shelf_life;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_id(
    const uint32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__shelf_life(
    const uint32_t & _arg)
  {
    this->shelf_life = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::ShelfLife_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::ShelfLife_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::ShelfLife_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::ShelfLife_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__ShelfLife
    std::shared_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__ShelfLife
    std::shared_ptr<april_msgs::msg::ShelfLife_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShelfLife_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->shelf_life != other.shelf_life) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShelfLife_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShelfLife_

// alias to use template instance with default allocator
using ShelfLife =
  april_msgs::msg::ShelfLife_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__SHELF_LIFE__STRUCT_HPP_
