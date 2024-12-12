cmake_minimum_required(VERSION 3.22)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

# Create project
project(blink)

# Initialize the SDK
pico_sdk_init()

# Add your executable
add_executable(blink src/main.c)

# Link the standard Pico libraries
target_link_libraries(blink pico_stdlib)

# Create the binary and map files
pico_add_extra_outputs(blink)