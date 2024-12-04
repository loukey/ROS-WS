# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ebot_URDF_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ebot_URDF_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ebot_URDF_FOUND FALSE)
  elseif(NOT ebot_URDF_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ebot_URDF_FOUND FALSE)
  endif()
  return()
endif()
set(_ebot_URDF_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ebot_URDF_FIND_QUIETLY)
  message(STATUS "Found ebot_URDF: 1.0.0 (${ebot_URDF_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ebot_URDF' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ebot_URDF_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ebot_URDF_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ebot_URDF_DIR}/${_extra}")
endforeach()