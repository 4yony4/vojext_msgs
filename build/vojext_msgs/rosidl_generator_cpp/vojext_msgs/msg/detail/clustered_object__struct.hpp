// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/ClusteredObject.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_HPP_

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
// Member 'clustered_point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__ClusteredObject __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__ClusteredObject __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusteredObject_
{
  using Type = ClusteredObject_<ContainerAllocator>;

  explicit ClusteredObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    clustered_point_cloud(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->sclass = "";
    }
  }

  explicit ClusteredObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    clustered_point_cloud(_alloc, _init),
    sclass(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->sclass = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _clustered_point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _clustered_point_cloud_type clustered_point_cloud;
  using _id_type =
    int16_t;
  _id_type id;
  using _sclass_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sclass_type sclass;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__clustered_point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->clustered_point_cloud = _arg;
    return *this;
  }
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__sclass(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sclass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::ClusteredObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::ClusteredObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::ClusteredObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::ClusteredObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__ClusteredObject
    std::shared_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__ClusteredObject
    std::shared_ptr<vojext_msgs::msg::ClusteredObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusteredObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->clustered_point_cloud != other.clustered_point_cloud) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->sclass != other.sclass) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusteredObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusteredObject_

// alias to use template instance with default allocator
using ClusteredObject =
  vojext_msgs::msg::ClusteredObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_HPP_
