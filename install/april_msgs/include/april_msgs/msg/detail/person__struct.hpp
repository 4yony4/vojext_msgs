// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PERSON__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__PERSON__STRUCT_HPP_

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
// Member 'left_hand'
// Member 'right_hand'
#include "april_msgs/msg/detail/hand__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__Person __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__Person __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Person_
{
  using Type = Person_<ContainerAllocator>;

  explicit Person_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_dynamic_left = "";
      this->result_dynamic_right = "";
      this->result_static_left = "";
      this->result_static_right = "";
      this->final_result_left = "";
      this->final_result_right = "";
    }
  }

  explicit Person_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    result_dynamic_left(_alloc),
    result_dynamic_right(_alloc),
    result_static_left(_alloc),
    result_static_right(_alloc),
    final_result_left(_alloc),
    final_result_right(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_dynamic_left = "";
      this->result_dynamic_right = "";
      this->result_static_left = "";
      this->result_static_right = "";
      this->final_result_left = "";
      this->final_result_right = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _result_dynamic_left_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_dynamic_left_type result_dynamic_left;
  using _result_dynamic_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_dynamic_right_type result_dynamic_right;
  using _result_static_left_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_static_left_type result_static_left;
  using _result_static_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_static_right_type result_static_right;
  using _final_result_left_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _final_result_left_type final_result_left;
  using _final_result_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _final_result_right_type final_result_right;
  using _left_hand_type =
    std::vector<april_msgs::msg::Hand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::Hand_<ContainerAllocator>>>;
  _left_hand_type left_hand;
  using _right_hand_type =
    std::vector<april_msgs::msg::Hand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::Hand_<ContainerAllocator>>>;
  _right_hand_type right_hand;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__result_dynamic_left(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_dynamic_left = _arg;
    return *this;
  }
  Type & set__result_dynamic_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_dynamic_right = _arg;
    return *this;
  }
  Type & set__result_static_left(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_static_left = _arg;
    return *this;
  }
  Type & set__result_static_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_static_right = _arg;
    return *this;
  }
  Type & set__final_result_left(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->final_result_left = _arg;
    return *this;
  }
  Type & set__final_result_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->final_result_right = _arg;
    return *this;
  }
  Type & set__left_hand(
    const std::vector<april_msgs::msg::Hand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::Hand_<ContainerAllocator>>> & _arg)
  {
    this->left_hand = _arg;
    return *this;
  }
  Type & set__right_hand(
    const std::vector<april_msgs::msg::Hand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::Hand_<ContainerAllocator>>> & _arg)
  {
    this->right_hand = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::Person_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::Person_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::Person_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::Person_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::Person_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::Person_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::Person_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::Person_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::Person_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::Person_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__Person
    std::shared_ptr<april_msgs::msg::Person_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__Person
    std::shared_ptr<april_msgs::msg::Person_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Person_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->result_dynamic_left != other.result_dynamic_left) {
      return false;
    }
    if (this->result_dynamic_right != other.result_dynamic_right) {
      return false;
    }
    if (this->result_static_left != other.result_static_left) {
      return false;
    }
    if (this->result_static_right != other.result_static_right) {
      return false;
    }
    if (this->final_result_left != other.final_result_left) {
      return false;
    }
    if (this->final_result_right != other.final_result_right) {
      return false;
    }
    if (this->left_hand != other.left_hand) {
      return false;
    }
    if (this->right_hand != other.right_hand) {
      return false;
    }
    return true;
  }
  bool operator!=(const Person_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Person_

// alias to use template instance with default allocator
using Person =
  april_msgs::msg::Person_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__PERSON__STRUCT_HPP_
