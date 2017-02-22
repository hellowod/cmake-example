include_directories(
    ${PROJECT_SOURCE_DIR}/libtst
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build/bin)
set(TST_SRC main.c)

add_executable(cmake-study ${TST_SRC})
target_link_libraries(cmake-study libtst)