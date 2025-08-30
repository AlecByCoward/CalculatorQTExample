cmake_minimum_required(VERSION 3.16)
project(CalcQT)

set(CMAKE_CXX_STANDARD 17)

set(Qt6_DIR "/opt/homebrew/opt/qt/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(First src/First.cpp src/calcfunc.cpp include/calcfunc.h)

target_include_directories(First PRIVATE include)

target_link_libraries(First Qt6::Widgets)

set_target_properties(First PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)
