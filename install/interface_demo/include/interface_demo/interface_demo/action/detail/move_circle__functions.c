// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_demo:action/MoveCircle.idl
// generated code does not contain a copyright notice
#include "interface_demo/action/detail/move_circle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface_demo__action__MoveCircle_Goal__init(interface_demo__action__MoveCircle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
interface_demo__action__MoveCircle_Goal__fini(interface_demo__action__MoveCircle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

bool
interface_demo__action__MoveCircle_Goal__are_equal(const interface_demo__action__MoveCircle_Goal * lhs, const interface_demo__action__MoveCircle_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_Goal__copy(
  const interface_demo__action__MoveCircle_Goal * input,
  interface_demo__action__MoveCircle_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

interface_demo__action__MoveCircle_Goal *
interface_demo__action__MoveCircle_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Goal * msg = (interface_demo__action__MoveCircle_Goal *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_Goal));
  bool success = interface_demo__action__MoveCircle_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_Goal__destroy(interface_demo__action__MoveCircle_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_Goal__Sequence__init(interface_demo__action__MoveCircle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Goal * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_Goal *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_Goal__Sequence__fini(interface_demo__action__MoveCircle_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_Goal__Sequence *
interface_demo__action__MoveCircle_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Goal__Sequence * array = (interface_demo__action__MoveCircle_Goal__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_Goal__Sequence__destroy(interface_demo__action__MoveCircle_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_Goal__Sequence__are_equal(const interface_demo__action__MoveCircle_Goal__Sequence * lhs, const interface_demo__action__MoveCircle_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_Goal__Sequence__copy(
  const interface_demo__action__MoveCircle_Goal__Sequence * input,
  interface_demo__action__MoveCircle_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_Goal * data =
      (interface_demo__action__MoveCircle_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interface_demo__action__MoveCircle_Result__init(interface_demo__action__MoveCircle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // finish
  return true;
}

void
interface_demo__action__MoveCircle_Result__fini(interface_demo__action__MoveCircle_Result * msg)
{
  if (!msg) {
    return;
  }
  // finish
}

bool
interface_demo__action__MoveCircle_Result__are_equal(const interface_demo__action__MoveCircle_Result * lhs, const interface_demo__action__MoveCircle_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // finish
  if (lhs->finish != rhs->finish) {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_Result__copy(
  const interface_demo__action__MoveCircle_Result * input,
  interface_demo__action__MoveCircle_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // finish
  output->finish = input->finish;
  return true;
}

interface_demo__action__MoveCircle_Result *
interface_demo__action__MoveCircle_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Result * msg = (interface_demo__action__MoveCircle_Result *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_Result));
  bool success = interface_demo__action__MoveCircle_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_Result__destroy(interface_demo__action__MoveCircle_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_Result__Sequence__init(interface_demo__action__MoveCircle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Result * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_Result *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_Result__Sequence__fini(interface_demo__action__MoveCircle_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_Result__Sequence *
interface_demo__action__MoveCircle_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Result__Sequence * array = (interface_demo__action__MoveCircle_Result__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_Result__Sequence__destroy(interface_demo__action__MoveCircle_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_Result__Sequence__are_equal(const interface_demo__action__MoveCircle_Result__Sequence * lhs, const interface_demo__action__MoveCircle_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_Result__Sequence__copy(
  const interface_demo__action__MoveCircle_Result__Sequence * input,
  interface_demo__action__MoveCircle_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_Result * data =
      (interface_demo__action__MoveCircle_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interface_demo__action__MoveCircle_Feedback__init(interface_demo__action__MoveCircle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
interface_demo__action__MoveCircle_Feedback__fini(interface_demo__action__MoveCircle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
interface_demo__action__MoveCircle_Feedback__are_equal(const interface_demo__action__MoveCircle_Feedback * lhs, const interface_demo__action__MoveCircle_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_Feedback__copy(
  const interface_demo__action__MoveCircle_Feedback * input,
  interface_demo__action__MoveCircle_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

interface_demo__action__MoveCircle_Feedback *
interface_demo__action__MoveCircle_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Feedback * msg = (interface_demo__action__MoveCircle_Feedback *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_Feedback));
  bool success = interface_demo__action__MoveCircle_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_Feedback__destroy(interface_demo__action__MoveCircle_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_Feedback__Sequence__init(interface_demo__action__MoveCircle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Feedback * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_Feedback *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_Feedback__Sequence__fini(interface_demo__action__MoveCircle_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_Feedback__Sequence *
interface_demo__action__MoveCircle_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_Feedback__Sequence * array = (interface_demo__action__MoveCircle_Feedback__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_Feedback__Sequence__destroy(interface_demo__action__MoveCircle_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_Feedback__Sequence__are_equal(const interface_demo__action__MoveCircle_Feedback__Sequence * lhs, const interface_demo__action__MoveCircle_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_Feedback__Sequence__copy(
  const interface_demo__action__MoveCircle_Feedback__Sequence * input,
  interface_demo__action__MoveCircle_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_Feedback * data =
      (interface_demo__action__MoveCircle_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "interface_demo/action/detail/move_circle__functions.h"

bool
interface_demo__action__MoveCircle_SendGoal_Request__init(interface_demo__action__MoveCircle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interface_demo__action__MoveCircle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!interface_demo__action__MoveCircle_Goal__init(&msg->goal)) {
    interface_demo__action__MoveCircle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
interface_demo__action__MoveCircle_SendGoal_Request__fini(interface_demo__action__MoveCircle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  interface_demo__action__MoveCircle_Goal__fini(&msg->goal);
}

bool
interface_demo__action__MoveCircle_SendGoal_Request__are_equal(const interface_demo__action__MoveCircle_SendGoal_Request * lhs, const interface_demo__action__MoveCircle_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!interface_demo__action__MoveCircle_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_SendGoal_Request__copy(
  const interface_demo__action__MoveCircle_SendGoal_Request * input,
  interface_demo__action__MoveCircle_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!interface_demo__action__MoveCircle_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

interface_demo__action__MoveCircle_SendGoal_Request *
interface_demo__action__MoveCircle_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_SendGoal_Request * msg = (interface_demo__action__MoveCircle_SendGoal_Request *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_SendGoal_Request));
  bool success = interface_demo__action__MoveCircle_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_SendGoal_Request__destroy(interface_demo__action__MoveCircle_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_SendGoal_Request__Sequence__init(interface_demo__action__MoveCircle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_SendGoal_Request * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_SendGoal_Request *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_SendGoal_Request__Sequence__fini(interface_demo__action__MoveCircle_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_SendGoal_Request__Sequence *
interface_demo__action__MoveCircle_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_SendGoal_Request__Sequence * array = (interface_demo__action__MoveCircle_SendGoal_Request__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_SendGoal_Request__Sequence__destroy(interface_demo__action__MoveCircle_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_SendGoal_Request__Sequence__are_equal(const interface_demo__action__MoveCircle_SendGoal_Request__Sequence * lhs, const interface_demo__action__MoveCircle_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_SendGoal_Request__Sequence__copy(
  const interface_demo__action__MoveCircle_SendGoal_Request__Sequence * input,
  interface_demo__action__MoveCircle_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_SendGoal_Request * data =
      (interface_demo__action__MoveCircle_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interface_demo__action__MoveCircle_SendGoal_Response__init(interface_demo__action__MoveCircle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interface_demo__action__MoveCircle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
interface_demo__action__MoveCircle_SendGoal_Response__fini(interface_demo__action__MoveCircle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
interface_demo__action__MoveCircle_SendGoal_Response__are_equal(const interface_demo__action__MoveCircle_SendGoal_Response * lhs, const interface_demo__action__MoveCircle_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_SendGoal_Response__copy(
  const interface_demo__action__MoveCircle_SendGoal_Response * input,
  interface_demo__action__MoveCircle_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

interface_demo__action__MoveCircle_SendGoal_Response *
interface_demo__action__MoveCircle_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_SendGoal_Response * msg = (interface_demo__action__MoveCircle_SendGoal_Response *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_SendGoal_Response));
  bool success = interface_demo__action__MoveCircle_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_SendGoal_Response__destroy(interface_demo__action__MoveCircle_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_SendGoal_Response__Sequence__init(interface_demo__action__MoveCircle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_SendGoal_Response * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_SendGoal_Response *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_SendGoal_Response__Sequence__fini(interface_demo__action__MoveCircle_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_SendGoal_Response__Sequence *
interface_demo__action__MoveCircle_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_SendGoal_Response__Sequence * array = (interface_demo__action__MoveCircle_SendGoal_Response__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_SendGoal_Response__Sequence__destroy(interface_demo__action__MoveCircle_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_SendGoal_Response__Sequence__are_equal(const interface_demo__action__MoveCircle_SendGoal_Response__Sequence * lhs, const interface_demo__action__MoveCircle_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_SendGoal_Response__Sequence__copy(
  const interface_demo__action__MoveCircle_SendGoal_Response__Sequence * input,
  interface_demo__action__MoveCircle_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_SendGoal_Response * data =
      (interface_demo__action__MoveCircle_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
interface_demo__action__MoveCircle_GetResult_Request__init(interface_demo__action__MoveCircle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interface_demo__action__MoveCircle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
interface_demo__action__MoveCircle_GetResult_Request__fini(interface_demo__action__MoveCircle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
interface_demo__action__MoveCircle_GetResult_Request__are_equal(const interface_demo__action__MoveCircle_GetResult_Request * lhs, const interface_demo__action__MoveCircle_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_GetResult_Request__copy(
  const interface_demo__action__MoveCircle_GetResult_Request * input,
  interface_demo__action__MoveCircle_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

interface_demo__action__MoveCircle_GetResult_Request *
interface_demo__action__MoveCircle_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_GetResult_Request * msg = (interface_demo__action__MoveCircle_GetResult_Request *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_GetResult_Request));
  bool success = interface_demo__action__MoveCircle_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_GetResult_Request__destroy(interface_demo__action__MoveCircle_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_GetResult_Request__Sequence__init(interface_demo__action__MoveCircle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_GetResult_Request * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_GetResult_Request *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_GetResult_Request__Sequence__fini(interface_demo__action__MoveCircle_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_GetResult_Request__Sequence *
interface_demo__action__MoveCircle_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_GetResult_Request__Sequence * array = (interface_demo__action__MoveCircle_GetResult_Request__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_GetResult_Request__Sequence__destroy(interface_demo__action__MoveCircle_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_GetResult_Request__Sequence__are_equal(const interface_demo__action__MoveCircle_GetResult_Request__Sequence * lhs, const interface_demo__action__MoveCircle_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_GetResult_Request__Sequence__copy(
  const interface_demo__action__MoveCircle_GetResult_Request__Sequence * input,
  interface_demo__action__MoveCircle_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_GetResult_Request * data =
      (interface_demo__action__MoveCircle_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "interface_demo/action/detail/move_circle__functions.h"

bool
interface_demo__action__MoveCircle_GetResult_Response__init(interface_demo__action__MoveCircle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!interface_demo__action__MoveCircle_Result__init(&msg->result)) {
    interface_demo__action__MoveCircle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
interface_demo__action__MoveCircle_GetResult_Response__fini(interface_demo__action__MoveCircle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  interface_demo__action__MoveCircle_Result__fini(&msg->result);
}

bool
interface_demo__action__MoveCircle_GetResult_Response__are_equal(const interface_demo__action__MoveCircle_GetResult_Response * lhs, const interface_demo__action__MoveCircle_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!interface_demo__action__MoveCircle_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_GetResult_Response__copy(
  const interface_demo__action__MoveCircle_GetResult_Response * input,
  interface_demo__action__MoveCircle_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!interface_demo__action__MoveCircle_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

interface_demo__action__MoveCircle_GetResult_Response *
interface_demo__action__MoveCircle_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_GetResult_Response * msg = (interface_demo__action__MoveCircle_GetResult_Response *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_GetResult_Response));
  bool success = interface_demo__action__MoveCircle_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_GetResult_Response__destroy(interface_demo__action__MoveCircle_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_GetResult_Response__Sequence__init(interface_demo__action__MoveCircle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_GetResult_Response * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_GetResult_Response *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_GetResult_Response__Sequence__fini(interface_demo__action__MoveCircle_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_GetResult_Response__Sequence *
interface_demo__action__MoveCircle_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_GetResult_Response__Sequence * array = (interface_demo__action__MoveCircle_GetResult_Response__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_GetResult_Response__Sequence__destroy(interface_demo__action__MoveCircle_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_GetResult_Response__Sequence__are_equal(const interface_demo__action__MoveCircle_GetResult_Response__Sequence * lhs, const interface_demo__action__MoveCircle_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_GetResult_Response__Sequence__copy(
  const interface_demo__action__MoveCircle_GetResult_Response__Sequence * input,
  interface_demo__action__MoveCircle_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_GetResult_Response * data =
      (interface_demo__action__MoveCircle_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "interface_demo/action/detail/move_circle__functions.h"

bool
interface_demo__action__MoveCircle_FeedbackMessage__init(interface_demo__action__MoveCircle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interface_demo__action__MoveCircle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!interface_demo__action__MoveCircle_Feedback__init(&msg->feedback)) {
    interface_demo__action__MoveCircle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
interface_demo__action__MoveCircle_FeedbackMessage__fini(interface_demo__action__MoveCircle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  interface_demo__action__MoveCircle_Feedback__fini(&msg->feedback);
}

bool
interface_demo__action__MoveCircle_FeedbackMessage__are_equal(const interface_demo__action__MoveCircle_FeedbackMessage * lhs, const interface_demo__action__MoveCircle_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!interface_demo__action__MoveCircle_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
interface_demo__action__MoveCircle_FeedbackMessage__copy(
  const interface_demo__action__MoveCircle_FeedbackMessage * input,
  interface_demo__action__MoveCircle_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!interface_demo__action__MoveCircle_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

interface_demo__action__MoveCircle_FeedbackMessage *
interface_demo__action__MoveCircle_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_FeedbackMessage * msg = (interface_demo__action__MoveCircle_FeedbackMessage *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_demo__action__MoveCircle_FeedbackMessage));
  bool success = interface_demo__action__MoveCircle_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_demo__action__MoveCircle_FeedbackMessage__destroy(interface_demo__action__MoveCircle_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_demo__action__MoveCircle_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_demo__action__MoveCircle_FeedbackMessage__Sequence__init(interface_demo__action__MoveCircle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_FeedbackMessage * data = NULL;

  if (size) {
    data = (interface_demo__action__MoveCircle_FeedbackMessage *)allocator.zero_allocate(size, sizeof(interface_demo__action__MoveCircle_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_demo__action__MoveCircle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_demo__action__MoveCircle_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_demo__action__MoveCircle_FeedbackMessage__Sequence__fini(interface_demo__action__MoveCircle_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_demo__action__MoveCircle_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_demo__action__MoveCircle_FeedbackMessage__Sequence *
interface_demo__action__MoveCircle_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_demo__action__MoveCircle_FeedbackMessage__Sequence * array = (interface_demo__action__MoveCircle_FeedbackMessage__Sequence *)allocator.allocate(sizeof(interface_demo__action__MoveCircle_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_demo__action__MoveCircle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_demo__action__MoveCircle_FeedbackMessage__Sequence__destroy(interface_demo__action__MoveCircle_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_demo__action__MoveCircle_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_demo__action__MoveCircle_FeedbackMessage__Sequence__are_equal(const interface_demo__action__MoveCircle_FeedbackMessage__Sequence * lhs, const interface_demo__action__MoveCircle_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_demo__action__MoveCircle_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_demo__action__MoveCircle_FeedbackMessage__Sequence__copy(
  const interface_demo__action__MoveCircle_FeedbackMessage__Sequence * input,
  interface_demo__action__MoveCircle_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_demo__action__MoveCircle_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_demo__action__MoveCircle_FeedbackMessage * data =
      (interface_demo__action__MoveCircle_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_demo__action__MoveCircle_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_demo__action__MoveCircle_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_demo__action__MoveCircle_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
