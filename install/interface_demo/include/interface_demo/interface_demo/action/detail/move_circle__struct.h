// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_demo:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_DEMO__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_
#define INTERFACE_DEMO__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_Goal
{
  bool enable;
} interface_demo__action__MoveCircle_Goal;

// Struct for a sequence of interface_demo__action__MoveCircle_Goal.
typedef struct interface_demo__action__MoveCircle_Goal__Sequence
{
  interface_demo__action__MoveCircle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_Result
{
  bool finish;
} interface_demo__action__MoveCircle_Result;

// Struct for a sequence of interface_demo__action__MoveCircle_Result.
typedef struct interface_demo__action__MoveCircle_Result__Sequence
{
  interface_demo__action__MoveCircle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_Feedback
{
  int32_t state;
} interface_demo__action__MoveCircle_Feedback;

// Struct for a sequence of interface_demo__action__MoveCircle_Feedback.
typedef struct interface_demo__action__MoveCircle_Feedback__Sequence
{
  interface_demo__action__MoveCircle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interface_demo/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_demo__action__MoveCircle_Goal goal;
} interface_demo__action__MoveCircle_SendGoal_Request;

// Struct for a sequence of interface_demo__action__MoveCircle_SendGoal_Request.
typedef struct interface_demo__action__MoveCircle_SendGoal_Request__Sequence
{
  interface_demo__action__MoveCircle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interface_demo__action__MoveCircle_SendGoal_Response;

// Struct for a sequence of interface_demo__action__MoveCircle_SendGoal_Response.
typedef struct interface_demo__action__MoveCircle_SendGoal_Response__Sequence
{
  interface_demo__action__MoveCircle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interface_demo__action__MoveCircle_GetResult_Request;

// Struct for a sequence of interface_demo__action__MoveCircle_GetResult_Request.
typedef struct interface_demo__action__MoveCircle_GetResult_Request__Sequence
{
  interface_demo__action__MoveCircle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interface_demo/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_GetResult_Response
{
  int8_t status;
  interface_demo__action__MoveCircle_Result result;
} interface_demo__action__MoveCircle_GetResult_Response;

// Struct for a sequence of interface_demo__action__MoveCircle_GetResult_Response.
typedef struct interface_demo__action__MoveCircle_GetResult_Response__Sequence
{
  interface_demo__action__MoveCircle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interface_demo/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package interface_demo.
typedef struct interface_demo__action__MoveCircle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_demo__action__MoveCircle_Feedback feedback;
} interface_demo__action__MoveCircle_FeedbackMessage;

// Struct for a sequence of interface_demo__action__MoveCircle_FeedbackMessage.
typedef struct interface_demo__action__MoveCircle_FeedbackMessage__Sequence
{
  interface_demo__action__MoveCircle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_demo__action__MoveCircle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_DEMO__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_
