// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/PersonList.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'person_list'
#include "vojext_msgs/msg/detail/person__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__PersonList __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__PersonList __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonList_
{
  using Type = PersonList_<ContainerAllocator>;

  explicit PersonList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image_header(_init)
  {
    (void)_init;
  }

  explicit PersonList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image_header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _image_header_type image_header;
  using _person_list_type =
    std::vector<vojext_msgs::msg::Person_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::Person_<ContainerAllocator>>>;
  _person_list_type person_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->image_header = _arg;
    return *this;
  }
  Type & set__person_list(
    const std::vector<vojext_msgs::msg::Person_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::Person_<ContainerAllocator>>> & _arg)
  {
    this->person_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::PersonList_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::PersonList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::PersonList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::PersonList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__PersonList
    std::shared_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__PersonList
    std::shared_ptr<vojext_msgs::msg::PersonList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_header != other.image_header) {
      return false;
    }
    if (this->person_list != other.person_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonList_

// alias to use template instance with default allocator
using PersonList =
  vojext_msgs::msg::PersonList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__STRUCT_HPP_
