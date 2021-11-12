cmake_minimum_required(VERSION 3.1)
# add options for compiler
SET(GCC_COVERAGE_COMPILE_FLAGS "-fopenmp -std=c++11")
# specify your compiler, you can do it in command line using -DCMAKE_CXX_COMPILER
# set(CMAKE_CXX_COMPILER "g++-11")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
project(parallel_ray_tracing)

# Project sources
add_executable(${PROJECT_NAME}
	src/main.cpp
	src/utils.h
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
	src/texture.h
	src/perlin.h
	src/rtw_stb_image.h
	src/aarect.h
	src/box.h
	src/constant_medium.h
)

# Include Eigen for linear algebra, stb and gif-h to export images, json to parse the json files
target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/external/eigen" "${CMAKE_CURRENT_SOURCE_DIR}/external/stb")

# Use C++11 version of the standard
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)

# Place the output binary at the root of the build folder
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")


