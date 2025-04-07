cmake_minimum_required(VERSION 3.12)

project(hello_world)

add_executable(
    hello_world
    main.cpp
    example.cpp
    move_me_out.cpp
    
)

set_target_properties(hello_world PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON 
)