cmake_minimum_required(VERSION 3.23)
project(voronoi_world_gen)

set(CMAKE_CXX_STANDARD 14)

add_executable(voronoi_world_gen src/main.cpp
        src/utils/vec2.h src/utils/vec3.h
        src/objects/Point.cpp src/objects/Point.h
        src/objects/Line.cpp src/objects/Line.h
        src/objects/Cell.cpp src/objects/Cell.h
        )

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)


include_directories(headers c:/SFML/include)
