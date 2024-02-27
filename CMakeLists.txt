cmake_minimum_required(VERSION 3.10)

project (VamSuv)

add_executable( ${PROJECT_NAME} main.cpp)

include(FetchContent)
FetchContent_Declare(
  SFML
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

target_link_libraries( ${PROJECT_NAME} PRIVATE sfml-graphics)