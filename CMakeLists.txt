cmake_minimum_required(VERSION 2.7)
project(pal_sigslot)

find_package(catkin)  

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES 
  CATKIN_DEPENDS
  DEPENDS 
)


install(DIRECTORY include/
  DESTINATION ${CATKIN_GLOBAL_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "signal.hpp"
  PATTERN "adapter" EXCLUDE
)


