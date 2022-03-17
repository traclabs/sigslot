# cmake_minimum_required(VERSION 2.7)
# project(pal_sigslot)

# find_package(catkin)  

# catkin_package(
#   INCLUDE_DIRS include
#   LIBRARIES 
#   CATKIN_DEPENDS
#   DEPENDS 
# )


# install(DIRECTORY include/
#   DESTINATION ${CATKIN_GLOBAL_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "signal.hpp"
#   PATTERN "adapter" EXCLUDE
# )

cmake_minimum_required(VERSION 3.8)
project(pal_sigslot)

add_compile_options(-std=c++14)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


set(dependencies
  rclcpp
)

find_package(ament_cmake REQUIRED)

ament_export_dependencies(${dependencies})

include_directories(
  include
)

set(COMMON_H_FILES
  include/sigslot/signal.hpp
)

  
# add_library(pal_sigslot ${COMMON_H_FILES})
# target_link_libraries(pal_sigslot ${dependencies})
# ament_target_dependencies(pal_sigslot ${dependencies})

install(DIRECTORY include/
  DESTINATION include/
)

ament_export_include_directories(include)
ament_export_libraries(pal_sigslot)
ament_package()







