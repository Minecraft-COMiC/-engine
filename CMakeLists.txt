cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 99)

add_library(
        __COMiC_engine
        SHARED

        src/init.c
)

target_link_libraries(__COMiC_engine PUBLIC COMiC::os COMiC::logger)
target_include_directories(__COMiC_engine PUBLIC include)
set_target_properties(__COMiC_engine PROPERTIES LINKER_LANGUAGE C)

add_library(COMiC::engine ALIAS __COMiC_engine)