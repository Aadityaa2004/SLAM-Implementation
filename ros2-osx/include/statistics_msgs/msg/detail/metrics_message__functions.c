// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/metrics_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `measurement_source_name`
// Member `metrics_source`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `window_start`
// Member `window_stop`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `statistics`
#include "statistics_msgs/msg/detail/statistic_data_point__functions.h"

bool
statistics_msgs__msg__MetricsMessage__init(statistics_msgs__msg__MetricsMessage * msg)
{
  if (!msg) {
    return false;
  }
  // measurement_source_name
  if (!rosidl_runtime_c__String__init(&msg->measurement_source_name)) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
    return false;
  }
  // metrics_source
  if (!rosidl_runtime_c__String__init(&msg->metrics_source)) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
    return false;
  }
  // window_start
  if (!builtin_interfaces__msg__Time__init(&msg->window_start)) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
    return false;
  }
  // window_stop
  if (!builtin_interfaces__msg__Time__init(&msg->window_stop)) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
    return false;
  }
  // statistics
  if (!statistics_msgs__msg__StatisticDataPoint__Sequence__init(&msg->statistics, 0)) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
    return false;
  }
  return true;
}

void
statistics_msgs__msg__MetricsMessage__fini(statistics_msgs__msg__MetricsMessage * msg)
{
  if (!msg) {
    return;
  }
  // measurement_source_name
  rosidl_runtime_c__String__fini(&msg->measurement_source_name);
  // metrics_source
  rosidl_runtime_c__String__fini(&msg->metrics_source);
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
  // window_start
  builtin_interfaces__msg__Time__fini(&msg->window_start);
  // window_stop
  builtin_interfaces__msg__Time__fini(&msg->window_stop);
  // statistics
  statistics_msgs__msg__StatisticDataPoint__Sequence__fini(&msg->statistics);
}

statistics_msgs__msg__MetricsMessage *
statistics_msgs__msg__MetricsMessage__create()
{
  statistics_msgs__msg__MetricsMessage * msg = (statistics_msgs__msg__MetricsMessage *)malloc(sizeof(statistics_msgs__msg__MetricsMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(statistics_msgs__msg__MetricsMessage));
  bool success = statistics_msgs__msg__MetricsMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
statistics_msgs__msg__MetricsMessage__destroy(statistics_msgs__msg__MetricsMessage * msg)
{
  if (msg) {
    statistics_msgs__msg__MetricsMessage__fini(msg);
  }
  free(msg);
}


bool
statistics_msgs__msg__MetricsMessage__Sequence__init(statistics_msgs__msg__MetricsMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  statistics_msgs__msg__MetricsMessage * data = NULL;
  if (size) {
    data = (statistics_msgs__msg__MetricsMessage *)calloc(size, sizeof(statistics_msgs__msg__MetricsMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = statistics_msgs__msg__MetricsMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        statistics_msgs__msg__MetricsMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
statistics_msgs__msg__MetricsMessage__Sequence__fini(statistics_msgs__msg__MetricsMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      statistics_msgs__msg__MetricsMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

statistics_msgs__msg__MetricsMessage__Sequence *
statistics_msgs__msg__MetricsMessage__Sequence__create(size_t size)
{
  statistics_msgs__msg__MetricsMessage__Sequence * array = (statistics_msgs__msg__MetricsMessage__Sequence *)malloc(sizeof(statistics_msgs__msg__MetricsMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = statistics_msgs__msg__MetricsMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
statistics_msgs__msg__MetricsMessage__Sequence__destroy(statistics_msgs__msg__MetricsMessage__Sequence * array)
{
  if (array) {
    statistics_msgs__msg__MetricsMessage__Sequence__fini(array);
  }
  free(array);
}
