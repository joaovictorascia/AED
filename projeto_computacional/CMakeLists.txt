cmake_minimum_required(VERSION 3.1)

project(aed)

add_executable(aed main.cpp)

# Para pegar as bibliotecas da internet
include(FetchContent)

# Buscar biblioteca cpr
FetchContent_Declare(cpr
    GIT_REPOSITORY https://github.com/libcpr/cpr.git
    GIT_TAG 923f83a5946f8d276be757d7808101aafc900dd6)
FetchContent_MakeAvailable(cpr)
target_link_libraries(aed PRIVATE cpr::cpr)

# Buscar biblioteca libxml2
FetchContent_Declare(LibXml2 GIT_REPOSITORY https://github.com/GNOME/libxml2.git GIT_TAG f51ad063a7fe01596745a6f330abf0f7991145c3)
FetchContent_MakeAvailable(LibXml2)
target_link_libraries(aed PRIVATE LibXml2::LibXml2)
