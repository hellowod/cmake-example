set(LIB_SRC 
    libtst.c
)

add_definitions("-DLIBTST_BUILD")
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build/lib)
add_library(libtst SHARED ${LIB_SRC})