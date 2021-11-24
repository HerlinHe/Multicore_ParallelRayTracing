cmake_minimum_required ( VERSION 3.11 )

project ( RTWeekendCuda
  VERSION 2.95.0
  )

# Set to c++11
set ( CMAKE_CXX_STANDARD 11 )

include(CheckLanguage)
check_language(CUDA)
if(CMAKE_CUDA_COMPILER)
  enable_language(CUDA)
  if(NOT DEFINED CMAKE_CUDA_STANDARD)
    set(CMAKE_CUDA_STANDARD 11)
    set(CMAKE_CUDA_STANDARD_REQUIRED ON)
  endif()
  set(CMAKE_CUDA_SEPARABLE_COMPILATION ON) # for multi-target pre-compilations
else()
  message(STATUS "No CUDA support")
endif()



set ( COMMON_ALL_CUDA
  src/rtweekend.cuh
  src/camera.cuh
  src/ray.cuh
  src/vec3.cuh
)


set ( SOURCE_NEXT_WEEK_CUDA
  ${COMMON_ALL_CUDA}
  src/aabb.cuh
  # commonCuda/external/stb_image.h
  # commonCuda/perlin.h
  # commonCuda/rtw_stb_image.h
  src/texture.cuh
  # TheNextWeekCuda/aarect.h
  # TheNextWeekCuda/box.h
  # TheNextWeekCuda/bvh.cuh
  # TheNextWeekCuda/constant_medium.h
  src/moving_sphere.cuh
  src/hittable.cuh
  src/hittable_list.cuh
  src/material.cuh
  src/sphere.cuh
  src/main.cu
  )

add_executable(theNextWeekCuda   ${SOURCE_NEXT_WEEK_CUDA})