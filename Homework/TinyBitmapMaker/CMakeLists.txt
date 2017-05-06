PROJECT(TinyBitmapMaker)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)
file(COPY ./image DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

add_subdirectory(tinybmp_maker)
add_subdirectory(test_suite)
