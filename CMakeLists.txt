cmake_minimum_required(VERSION 3.30)
project(SimMedieval)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimMedieval main.cpp
        core/Core.h
        core/world/geo/Vector2F.cpp
        core/world/geo/Vector2F.h)
