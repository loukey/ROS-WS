// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_demo:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_DEMO__MSG__DETAIL__NUM__BUILDER_HPP_
#define INTERFACE_DEMO__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_demo/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_demo
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::msg::Num>()
{
  return ::interface_demo::msg::Num(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interface_demo

#endif  // INTERFACE_DEMO__MSG__DETAIL__NUM__BUILDER_HPP_
