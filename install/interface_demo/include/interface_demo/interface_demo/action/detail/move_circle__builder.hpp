// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_demo:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_DEMO__ACTION__DETAIL__MOVE_CIRCLE__BUILDER_HPP_
#define INTERFACE_DEMO__ACTION__DETAIL__MOVE_CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_demo/action/detail/move_circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_Goal_enable
{
public:
  Init_MoveCircle_Goal_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_demo::action::MoveCircle_Goal enable(::interface_demo::action::MoveCircle_Goal::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_Goal>()
{
  return interface_demo::action::builder::Init_MoveCircle_Goal_enable();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_Result_finish
{
public:
  Init_MoveCircle_Result_finish()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_demo::action::MoveCircle_Result finish(::interface_demo::action::MoveCircle_Result::_finish_type arg)
  {
    msg_.finish = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_Result>()
{
  return interface_demo::action::builder::Init_MoveCircle_Result_finish();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_Feedback_state
{
public:
  Init_MoveCircle_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_demo::action::MoveCircle_Feedback state(::interface_demo::action::MoveCircle_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_Feedback>()
{
  return interface_demo::action::builder::Init_MoveCircle_Feedback_state();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_SendGoal_Request_goal
{
public:
  explicit Init_MoveCircle_SendGoal_Request_goal(::interface_demo::action::MoveCircle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interface_demo::action::MoveCircle_SendGoal_Request goal(::interface_demo::action::MoveCircle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_SendGoal_Request msg_;
};

class Init_MoveCircle_SendGoal_Request_goal_id
{
public:
  Init_MoveCircle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_SendGoal_Request_goal goal_id(::interface_demo::action::MoveCircle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveCircle_SendGoal_Request_goal(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_SendGoal_Request>()
{
  return interface_demo::action::builder::Init_MoveCircle_SendGoal_Request_goal_id();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_SendGoal_Response_stamp
{
public:
  explicit Init_MoveCircle_SendGoal_Response_stamp(::interface_demo::action::MoveCircle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interface_demo::action::MoveCircle_SendGoal_Response stamp(::interface_demo::action::MoveCircle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_SendGoal_Response msg_;
};

class Init_MoveCircle_SendGoal_Response_accepted
{
public:
  Init_MoveCircle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_SendGoal_Response_stamp accepted(::interface_demo::action::MoveCircle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveCircle_SendGoal_Response_stamp(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_SendGoal_Response>()
{
  return interface_demo::action::builder::Init_MoveCircle_SendGoal_Response_accepted();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_GetResult_Request_goal_id
{
public:
  Init_MoveCircle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_demo::action::MoveCircle_GetResult_Request goal_id(::interface_demo::action::MoveCircle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_GetResult_Request>()
{
  return interface_demo::action::builder::Init_MoveCircle_GetResult_Request_goal_id();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_GetResult_Response_result
{
public:
  explicit Init_MoveCircle_GetResult_Response_result(::interface_demo::action::MoveCircle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interface_demo::action::MoveCircle_GetResult_Response result(::interface_demo::action::MoveCircle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_GetResult_Response msg_;
};

class Init_MoveCircle_GetResult_Response_status
{
public:
  Init_MoveCircle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_GetResult_Response_result status(::interface_demo::action::MoveCircle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveCircle_GetResult_Response_result(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_GetResult_Response>()
{
  return interface_demo::action::builder::Init_MoveCircle_GetResult_Response_status();
}

}  // namespace interface_demo


namespace interface_demo
{

namespace action
{

namespace builder
{

class Init_MoveCircle_FeedbackMessage_feedback
{
public:
  explicit Init_MoveCircle_FeedbackMessage_feedback(::interface_demo::action::MoveCircle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interface_demo::action::MoveCircle_FeedbackMessage feedback(::interface_demo::action::MoveCircle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_FeedbackMessage msg_;
};

class Init_MoveCircle_FeedbackMessage_goal_id
{
public:
  Init_MoveCircle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_FeedbackMessage_feedback goal_id(::interface_demo::action::MoveCircle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveCircle_FeedbackMessage_feedback(msg_);
  }

private:
  ::interface_demo::action::MoveCircle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_demo::action::MoveCircle_FeedbackMessage>()
{
  return interface_demo::action::builder::Init_MoveCircle_FeedbackMessage_goal_id();
}

}  // namespace interface_demo

#endif  // INTERFACE_DEMO__ACTION__DETAIL__MOVE_CIRCLE__BUILDER_HPP_
