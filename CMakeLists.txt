cmake_minimum_required(VERSION 3.24)
project(Raytracing)

set(CMAKE_CXX_STANDARD 20)

add_executable(Raytracing main.cpp camera.cpp camera.h colour.h hittable.cpp hittable.h hittable_list.cpp hittable_list.h material.cpp material.h ray.cpp ray.h rtweekend.h sphere.cpp sphere.h vec3.cpp vec3.h)
