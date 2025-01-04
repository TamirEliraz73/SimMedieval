cmake_minimum_required(VERSION 3.30)
project(SimMedieval)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimMedieval main.cpp
        core/Core.h
        core/world/geo/Vector2F.cpp
        core/world/geo/Vector2F.h
        core/world/sim/SimObject.cpp
        core/world/sim/SimObject.h
        core/world/sim/structure/Structure.cpp
        core/world/sim/structure/Structure.h
        core/world/sim/structure/Farm.cpp
        core/world/sim/structure/Farm.h
        core/world/sim/structure/Castle.cpp
        core/world/sim/structure/Castle.h)
