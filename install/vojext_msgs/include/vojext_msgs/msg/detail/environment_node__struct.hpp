// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__STRUCT_HPP_

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
// Member 'image_rgb'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'image_3d'
#include "sensor_msgs/msg/detail/point_cloud__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__EnvironmentNode __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__EnvironmentNode __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvironmentNode_
{
  using Type = EnvironmentNode_<ContainerAllocator>;

  explicit EnvironmentNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image_rgb(_init),
    image_3d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
    }
  }

  explicit EnvironmentNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image_rgb(_alloc, _init),
    image_3d(_alloc, _init),
    class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_rgb_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_rgb_type image_rgb;
  using _image_3d_type =
    sensor_msgs::msg::PointCloud_<ContainerAllocator>;
  _image_3d_type image_3d;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_rgb(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image_rgb = _arg;
    return *this;
  }
  Type & set__image_3d(
    const sensor_msgs::msg::PointCloud_<ContainerAllocator> & _arg)
  {
    this->image_3d = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::EnvironmentNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::EnvironmentNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::EnvironmentNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::EnvironmentNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__EnvironmentNode
    std::shared_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__EnvironmentNode
    std::shared_ptr<vojext_msgs::msg::EnvironmentNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvironmentNode_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_rgb != other.image_rgb) {
      return false;
    }
    if (this->image_3d != other.image_3d) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvironmentNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvironmentNode_

// alias to use template instance with default allocator
using EnvironmentNode =
  vojext_msgs::msg::EnvironmentNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__STRUCT_HPP_
