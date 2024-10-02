# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

set(MCHP_LIB_DIR  ${CMAKE_CURRENT_SOURCE_DIR}/mchplib)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE src/main.c)


add_library(other3party_lib STATIC IMPORTED GLOBAL)
set_target_properties(other3party_lib PROPERTIES IMPORTED_LOCATION ${MCHP_LIB_DIR}/pic32cx_bz2_device_support.a)

target_link_libraries(app PUBLIC other3party_lib)

#zephyr_library_link_libraries(${MCHP_LIB_DIR}/pic32cx_bz2_device_support.a)

