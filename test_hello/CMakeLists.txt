link_directories(${CMAKE_BINARY_DIR}/make_static_lib ${CMAKE_BINARY_DIR}/make_shared_lib)
add_executable(test_hello test_hello.cpp)
target_include_directories(test_hello PRIVATE ${CMAKE_SOURCE_DIR}/make_static_lib PRIVATE ${CMAKE_SOURCE_DIR}/make_shared_lib)
target_link_libraries(test_hello PRIVATE static_lib shared_lib)