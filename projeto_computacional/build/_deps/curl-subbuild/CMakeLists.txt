# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.22.1)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(curl-populate NONE)



include(ExternalProject)
ExternalProject_Add(curl-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/curl/curl/releases/download/curl-8_7_1/curl-8.7.1.tar.xz" "URL_HASH" "SHA256=6fea2aac6a4610fbd0400afb0bcddbe7258a64c63f1f68e5855ebc0c659710cd"
                    SOURCE_DIR          "/home/ideapad/Desktop/AED/build/_deps/curl-src"
                    BINARY_DIR          "/home/ideapad/Desktop/AED/build/_deps/curl-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


