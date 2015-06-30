cmake_minimum_required(VERSION 2.8)
project(trash)

set(BOOST_ROOT "${CMAKE_SOURCE_DIR}/submodule/boost")
set(BOOST_INCLUDE_DIRS "${BOOST_ROOT}")
set(BOOST_LIBRARY_DIRS "${BOOST_ROOT}/stage/lib")

set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)

find_package(Boost REQUIRED system filesystem)
include_directories(${BOOST_INCLUDE_DIRS})


aux_source_directory(src SRC_LIST)
add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
