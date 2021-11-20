cmake_minimum_required(VERSION 3.20)
project(engine C)

set(CMAKE_C_STANDARD 99)

if (NOT TARGET COMiC::os)
    add_subdirectory(os)
endif ()
if (NOT TARGET COMiC::logger)
    add_subdirectory(logger)
endif ()


add_library(
        engine
        SHARED

        src/init.c
)

target_link_libraries(engine PUBLIC COMiC::os COMiC::logger)
target_include_directories(engine PUBLIC include)
set_target_properties(engine PROPERTIES LINKER_LANGUAGE C)

add_library(COMiC::engine ALIAS engine)