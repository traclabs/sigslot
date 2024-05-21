cmake_minimum_required(VERSION 3.5)
project(pal_sigslot)
find_package(ament_cmake REQUIRED)

  

ament_export_include_directories(include)
ament_export_libraries()
ament_export_dependencies()
ament_package()

install(DIRECTORY include/
  DESTINATION include
  FILES_MATCHING PATTERN "signal.hpp"
  PATTERN "adapter" EXCLUDE
)

