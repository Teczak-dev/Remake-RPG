cmake_minimum_required(VERSION 3.10)
project(Remake-RPG)

set(CMAKE_CXX_STANDARD 17)

# Tworzymy pustą bibliotekę, do której dodamy źródła w subdirach
add_library(GameLib "")

target_include_directories(GameLib PUBLIC include)

# Zbieramy pliki bezpośrednio z src/
file(GLOB ROOT_SOURCES CONFIGURE_DEPENDS src/*.cpp)
target_sources(GameLib PRIVATE ${ROOT_SOURCES})

# Podkatalogi
add_subdirectory(src/Characters)

# Program
add_executable(Game main.cpp)
target_link_libraries(Game PRIVATE GameLib)
