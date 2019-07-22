cmake_minimum_required(VERSION 2.7)
project(pal_sigslot)

find_package(catkin)  

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES 
  CATKIN_DEPENDS
  DEPENDS 
)


install(DIRECTORY include/sigslot/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "signal.hpp"
)


