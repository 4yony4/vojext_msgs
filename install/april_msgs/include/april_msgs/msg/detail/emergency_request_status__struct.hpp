// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__EmergencyRequestStatus __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__EmergencyRequestStatus __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyRequestStatus_
{
  using Type = EmergencyRequestStatus_<ContainerAllocator>;

  explicit EmergencyRequestStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_progress = "";
      this->request_result = "";
    }
  }

  explicit EmergencyRequestStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    request_progress(_alloc),
    request_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_progress = "";
      this->request_result = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _request_progress_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_progress_type request_progress;
  using _request_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_result_type request_result;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__request_progress(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_progress = _arg;
    return *this;
  }
  Type & set__request_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__EmergencyRequestStatus
    std::shared_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__EmergencyRequestStatus
    std::shared_ptr<april_msgs::msg::EmergencyRequestStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyRequestStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->request_progress != other.request_progress) {
      return false;
    }
    if (this->request_result != other.request_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyRequestStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyRequestStatus_

// alias to use template instance with default allocator
using EmergencyRequestStatus =
  april_msgs::msg::EmergencyRequestStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__STRUCT_HPP_
