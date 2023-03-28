cmake_minimum_required(VERSION 3.23)
project(voronoi_world_gen)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        voronoi-world-gen src/main.cpp
        src/objects/Point.cpp src/objects/Point.h
        src/objects/Cell.cpp src/objects/Cell.h
        src/utils/random.h
        src/utils/enums.cpp
        src/utils/FastNoiseLite.h
        src/objects/Line.cpp src/objects/Line.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

target_link_libraries(voronoi-world-gen sfml-graphics)

include_directories(headers c:/SFML/include)
