// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/QualityCheckResult.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__QualityCheckResult __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__QualityCheckResult __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QualityCheckResult_
{
  using Type = QualityCheckResult_<ContainerAllocator>;

  explicit QualityCheckResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ul;
      this->result = false;
      this->msg = "";
    }
  }

  explicit QualityCheckResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ul;
      this->result = false;
      this->msg = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_id_type =
    uint32_t;
  _object_id_type object_id;
  using _result_type =
    bool;
  _result_type result;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;

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
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::QualityCheckResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::QualityCheckResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::QualityCheckResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::QualityCheckResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__QualityCheckResult
    std::shared_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__QualityCheckResult
    std::shared_ptr<april_msgs::msg::QualityCheckResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QualityCheckResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const QualityCheckResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QualityCheckResult_

// alias to use template instance with default allocator
using QualityCheckResult =
  april_msgs::msg::QualityCheckResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__QUALITY_CHECK_RESULT__STRUCT_HPP_
