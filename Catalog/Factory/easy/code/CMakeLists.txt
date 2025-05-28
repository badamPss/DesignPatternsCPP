cmake_minimum_required(VERSION 3.15)
project(FactoryMethod LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(factory STATIC
        src/creator.cpp
        src/product.cpp
)

add_executable(main_exec
        src/main.cpp
)

target_link_libraries(main_exec factory)

enable_testing()

set(TEST_SOURCES
        tests/test_concrete_product1.cpp
        tests/test_concrete_product2.cpp
        tests/test_creator1.cpp
        tests/test_creator2.cpp
        tests/test_some_operation.cpp
)

foreach(test_src ${TEST_SOURCES})
    get_filename_component(test_name ${test_src} NAME_WE)
    add_executable(${test_name} ${test_src})
    target_link_libraries(${test_name} factory)
    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach()

set(CPACK_PACKAGE_NAME "factory-method-app")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Игнат Ващило")
set(CPACK_PACKAGE_CONTACT "ignatvaschilo@yandex.ru")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.7)")

include(CPack)