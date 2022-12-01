CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
project(STDY_CMAKE CXX)

set(PROJECT_VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)


find_package(nlohmann_json 3.11.2 REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED PATHS ../install/lib/cmake) 

message("oioi : ${JSON_INCLUDE_DIR}")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE nlohmann_json::nlohmann_json)



