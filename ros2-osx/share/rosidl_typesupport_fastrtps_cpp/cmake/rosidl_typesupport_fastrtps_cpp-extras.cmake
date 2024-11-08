# generated from
# rosidl_typesupport_fastrtps_cpp/
#   rosidl_typesupport_fastrtps_cpp-extras.cmake.in

find_package(fastrtps_cmake_module QUIET)
find_package(fastcdr REQUIRED CONFIG)
find_package(fastrtps REQUIRED CONFIG)
find_package(FastRTPS REQUIRED MODULE)

if(NOT FastRTPS_FOUND)
  message(STATUS
    "Could not find eProsima Fast-RTPS - skip rosidl_typesupport_fastrtps_cpp"
  )
else()
  find_package(ament_cmake_core QUIET REQUIRED)
  ament_register_extension(
    "rosidl_generate_idl_interfaces"
    "rosidl_typesupport_fastrtps_cpp"
    "rosidl_typesupport_fastrtps_cpp_generate_interfaces.cmake")

  set(rosidl_typesupport_fastrtps_cpp_BIN
    "${rosidl_typesupport_fastrtps_cpp_DIR}/../../../lib/rosidl_typesupport_fastrtps_cpp/rosidl_typesupport_fastrtps_cpp")
  normalize_path(rosidl_typesupport_fastrtps_cpp_BIN
    "${rosidl_typesupport_fastrtps_cpp_BIN}")

  set(rosidl_typesupport_fastrtps_cpp_GENERATOR_FILES
    "${rosidl_typesupport_fastrtps_cpp_DIR}/../../../lib/python3.8/site-packages/rosidl_typesupport_fastrtps_cpp/__init__.py")
  normalize_path(rosidl_typesupport_fastrtps_cpp_GENERATOR_FILES
    "${rosidl_typesupport_fastrtps_cpp_GENERATOR_FILES}")

  set(rosidl_typesupport_fastrtps_cpp_TEMPLATE_DIR
    "${rosidl_typesupport_fastrtps_cpp_DIR}/../resource")
  normalize_path(rosidl_typesupport_fastrtps_cpp_TEMPLATE_DIR
    "${rosidl_typesupport_fastrtps_cpp_TEMPLATE_DIR}")
endif()
