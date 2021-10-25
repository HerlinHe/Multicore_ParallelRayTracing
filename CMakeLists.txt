cmake_minimum_required(VERSION 3.1)
project(parallel_ray_tracing)

# Project sources
add_executable(${PROJECT_NAME}
	src/main.cpp
	src/color.h
	src/vec3.h
	src/ray.h
	src/hittable.h
	src/hittable_list.h
	src/sphere.h
	src/moving_sphere.h
	src/camera.h
	src/aabb.h
	src/bvh.h
	src/constants.h
	src/material.h
)

# Include Eigen for linear algebra, stb and gif-h to export images, json to parse the json files
target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../ext/eigen" "${CMAKE_CURRENT_SOURCE_DIR}/../ext/stb" "${CMAKE_CURRENT_SOURCE_DIR}/../ext/gif-h" "${CMAKE_CURRENT_SOURCE_DIR}/../ext/json")

# Use C++11 version of the standard
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

# Place the output binary at the root of the build folder
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
