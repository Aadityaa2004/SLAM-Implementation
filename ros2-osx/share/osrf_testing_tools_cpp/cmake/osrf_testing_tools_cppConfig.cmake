# Copyright 2018 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set(__prefix_dir "${osrf_testing_tools_cpp_DIR}/../../..")
set(__share_dir "${__prefix_dir}/share/osrf_testing_tools_cpp")

include("${__share_dir}/cmake/memory_toolsExport.cmake")
include("${__share_dir}/cmake/memory_tools_interposeExport.cmake")
include("${__share_dir}/cmake/test_runnerExport.cmake")

include("${__share_dir}/cmake/osrf_testing_tools_cpp_add_test.cmake")
include("${__share_dir}/cmake/osrf_testing_tools_cpp_extract_and_build_googletest.cmake")
include("${__share_dir}/cmake/osrf_testing_tools_cpp_get_googletest_versions.cmake")
include("${__share_dir}/cmake/osrf_testing_tools_cpp_require_googletest.cmake")

# setup target property for memory_tool's library preload env var
define_property(TARGET
  PROPERTY LIBRARY_PRELOAD_ENVIRONMENT_VARIABLE
  BRIEF_DOCS "Environment variable needed to preload the associated library."
  FULL_DOCS "Environment variable needed to preload the associated library."
)
define_property(TARGET
  PROPERTY LIBRARY_PRELOAD_ENVIRONMENT_IS_AVAILABLE
  BRIEF_DOCS "Indicator of whether memory_tools is available in the current build configuration."
  FULL_DOCS "Indicator of whether memory_tools is available in the current build configuration."
)
string(REPLACE
  "memory_tools" "osrf_testing_tools_cpp::memory_tools"
  memory_tools_extra_test_env "DYLD_INSERT_LIBRARIES=$<TARGET_FILE:memory_tools_interpose>")
if(NOT memory_tools_extra_test_env)
  # On Windows, for example, this might be empty.
  set(memory_tools_extra_test_env "NO_LIBRARY_PRELOAD=1")
endif()
set_target_properties(osrf_testing_tools_cpp::memory_tools PROPERTIES
  LIBRARY_PRELOAD_ENVIRONMENT_VARIABLE ${memory_tools_extra_test_env})
set_target_properties(osrf_testing_tools_cpp::memory_tools PROPERTIES
  LIBRARY_PRELOAD_ENVIRONMENT_IS_AVAILABLE "TRUE")

# setup osrf_testing_tools_cpp_INCLUDE_DIRS so that header only things can be used without linking
set(osrf_testing_tools_cpp_INCLUDE_DIRS "${__prefix_dir}/include")

set(osrf_testing_tools_cpp_TARGETS
  osrf_testing_tools_cpp::memory_tools
  osrf_testing_tools_cpp::memory_tools_interpose)

unset(__share_dir)
unset(__prefix_dir)
