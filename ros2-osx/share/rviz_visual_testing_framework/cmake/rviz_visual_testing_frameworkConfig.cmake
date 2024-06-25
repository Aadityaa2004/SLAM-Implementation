# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rviz_visual_testing_framework_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rviz_visual_testing_framework_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rviz_visual_testing_framework_FOUND FALSE)
  elseif(NOT rviz_visual_testing_framework_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rviz_visual_testing_framework_FOUND FALSE)
  endif()
  return()
endif()
set(_rviz_visual_testing_framework_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rviz_visual_testing_framework_FIND_QUIETLY)
  message(STATUS "Found rviz_visual_testing_framework: 8.2.1 (${rviz_visual_testing_framework_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rviz_visual_testing_framework' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rviz_visual_testing_framework_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rviz_visual_testing_framework_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${rviz_visual_testing_framework_DIR}/${_extra}")
endforeach()
