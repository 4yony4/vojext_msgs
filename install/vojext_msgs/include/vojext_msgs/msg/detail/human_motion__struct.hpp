// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_HPP_

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
# define DEPRECATED__vojext_msgs__msg__HumanMotion __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__HumanMotion __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanMotion_
{
  using Type = HumanMotion_<ContainerAllocator>;

  explicit HumanMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_position = "";
      this->hand_velocity = "";
      this->hand_acceleration = "";
      this->body_position = "";
      this->body_velocity = "";
      this->body_acceleration = "";
      this->tools_position = "";
      this->tools_velocity = "";
      this->tools_acceleration = "";
    }
  }

  explicit HumanMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    hand_position(_alloc),
    hand_velocity(_alloc),
    hand_acceleration(_alloc),
    body_position(_alloc),
    body_velocity(_alloc),
    body_acceleration(_alloc),
    tools_position(_alloc),
    tools_velocity(_alloc),
    tools_acceleration(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_position = "";
      this->hand_velocity = "";
      this->hand_acceleration = "";
      this->body_position = "";
      this->body_velocity = "";
      this->body_acceleration = "";
      this->tools_position = "";
      this->tools_velocity = "";
      this->tools_acceleration = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hand_position_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hand_position_type hand_position;
  using _hand_velocity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hand_velocity_type hand_velocity;
  using _hand_acceleration_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hand_acceleration_type hand_acceleration;
  using _body_position_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_position_type body_position;
  using _body_velocity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_velocity_type body_velocity;
  using _body_acceleration_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_acceleration_type body_acceleration;
  using _tools_position_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tools_position_type tools_position;
  using _tools_velocity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tools_velocity_type tools_velocity;
  using _tools_acceleration_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tools_acceleration_type tools_acceleration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hand_position(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hand_position = _arg;
    return *this;
  }
  Type & set__hand_velocity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hand_velocity = _arg;
    return *this;
  }
  Type & set__hand_acceleration(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hand_acceleration = _arg;
    return *this;
  }
  Type & set__body_position(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_position = _arg;
    return *this;
  }
  Type & set__body_velocity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_velocity = _arg;
    return *this;
  }
  Type & set__body_acceleration(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_acceleration = _arg;
    return *this;
  }
  Type & set__tools_position(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tools_position = _arg;
    return *this;
  }
  Type & set__tools_velocity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tools_velocity = _arg;
    return *this;
  }
  Type & set__tools_acceleration(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tools_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::HumanMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::HumanMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::HumanMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::HumanMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__HumanMotion
    std::shared_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__HumanMotion
    std::shared_ptr<vojext_msgs::msg::HumanMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanMotion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hand_position != other.hand_position) {
      return false;
    }
    if (this->hand_velocity != other.hand_velocity) {
      return false;
    }
    if (this->hand_acceleration != other.hand_acceleration) {
      return false;
    }
    if (this->body_position != other.body_position) {
      return false;
    }
    if (this->body_velocity != other.body_velocity) {
      return false;
    }
    if (this->body_acceleration != other.body_acceleration) {
      return false;
    }
    if (this->tools_position != other.tools_position) {
      return false;
    }
    if (this->tools_velocity != other.tools_velocity) {
      return false;
    }
    if (this->tools_acceleration != other.tools_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanMotion_

// alias to use template instance with default allocator
using HumanMotion =
  vojext_msgs::msg::HumanMotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_HPP_
