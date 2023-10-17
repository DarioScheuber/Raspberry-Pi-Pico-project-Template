cmake_minimum_required(VERSION 3.15.3)

# initialize pico-sdk from submodule
# note: this must happen before project()
include(pico_sdk_import.cmake)

#need to chance for other project
project(pico-project-template)   

pico_sdk_init()

add_executable(main
    main.c
)


target_link_libraries(blink_led pico_stdlib)

pico_add_extra_outputs(blink_led)