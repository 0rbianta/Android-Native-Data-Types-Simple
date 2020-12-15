cmake_minimum_required(VERSION 3.10.2)

project("data_types_native")

add_library(
             native_1
             SHARED
        native_1.cpp)



find_library(
        log-lib
        log )


target_link_libraries(
                        native_1
                       ${log-lib} )