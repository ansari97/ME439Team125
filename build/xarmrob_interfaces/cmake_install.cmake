# Install script for directory: /home/pi/ME439Team125/src/xarmrob_interfaces

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/pi/ME439Team125/install/xarmrob_interfaces")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pi/ME439Team125/build/xarmrob_interfaces/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so"
         OLD_RPATH "/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_fastrtps_cpp/lib:/home/pi/ros2_jazzy/install/rmw/lib:/home/pi/ros2_jazzy/install/rosidl_dynamic_typesupport/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_fastrtps_c/lib:/home/pi/ros2_jazzy/install/fastcdr/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_fastrtps_cpp/lib:/home/pi/ros2_jazzy/install/fastcdr/lib:/home/pi/ros2_jazzy/install/rmw/lib:/home/pi/ros2_jazzy/install/rosidl_dynamic_typesupport/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_introspection_c/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so"
         OLD_RPATH "/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_c/lib:/home/pi/ros2_jazzy/install/rcpputils/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_introspection_cpp/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_introspection_c/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_cpp/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_c/lib:/home/pi/ros2_jazzy/install/rcpputils/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/pi/ME439Team125/install/xarmrob_interfaces/lib/python3.11/site-packages/xarmrob_interfaces"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/libxarmrob_interfaces__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so"
         OLD_RPATH "/home/pi/ME439Team125/build/xarmrob_interfaces:/home/pi/ros2_jazzy/install/std_msgs/lib:/home/pi/ros2_jazzy/install/action_msgs/lib:/home/pi/ros2_jazzy/install/unique_identifier_msgs/lib:/home/pi/ros2_jazzy/install/service_msgs/lib:/home/pi/ros2_jazzy/install/builtin_interfaces/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_fastrtps_c/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_introspection_cpp/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_introspection_c/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_fastrtps_cpp/lib:/home/pi/ros2_jazzy/install/fastcdr/lib:/home/pi/ros2_jazzy/install/rmw/lib:/home/pi/ros2_jazzy/install/rosidl_dynamic_typesupport/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_cpp/lib:/home/pi/ros2_jazzy/install/rosidl_typesupport_c/lib:/home/pi/ros2_jazzy/install/rosidl_runtime_c/lib:/home/pi/ros2_jazzy/install/rcpputils/lib:/home/pi/ros2_jazzy/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxarmrob_interfaces__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cppExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cppExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/xarmrob_interfaces__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/xarmrob_interfaces__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_pyExport.cmake"
         "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake/export_xarmrob_interfaces__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xarmrob_interfaces/cmake" TYPE FILE FILES "/home/pi/ME439Team125/build/xarmrob_interfaces/CMakeFiles/Export/26cb61279bef39dfbedda87c69dea23b/export_xarmrob_interfaces__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/pi/ME439Team125/build/xarmrob_interfaces/xarmrob_interfaces__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/pi/ME439Team125/build/xarmrob_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
