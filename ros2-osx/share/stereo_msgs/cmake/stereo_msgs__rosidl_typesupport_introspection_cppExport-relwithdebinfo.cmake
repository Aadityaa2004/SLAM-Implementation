#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "stereo_msgs::stereo_msgs__rosidl_typesupport_introspection_cpp" for configuration "RelWithDebInfo"
set_property(TARGET stereo_msgs::stereo_msgs__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(stereo_msgs::stereo_msgs__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libstereo_msgs__rosidl_typesupport_introspection_cpp.dylib"
  IMPORTED_SONAME_RELWITHDEBINFO "@rpath/libstereo_msgs__rosidl_typesupport_introspection_cpp.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS stereo_msgs::stereo_msgs__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_stereo_msgs::stereo_msgs__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/libstereo_msgs__rosidl_typesupport_introspection_cpp.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
