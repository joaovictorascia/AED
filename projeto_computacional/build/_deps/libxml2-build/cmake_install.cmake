# Install script for directory: /home/ideapad/Desktop/AED/build/_deps/libxml2-src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libxml2/libxml" TYPE FILE FILES
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/c14n.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/catalog.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/chvalid.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/debugXML.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/dict.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/encoding.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/entities.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/globals.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/hash.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/HTMLparser.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/HTMLtree.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/list.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/nanoftp.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/nanohttp.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/parser.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/parserInternals.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/pattern.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/relaxng.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/SAX.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/SAX2.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/schemasInternals.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/schematron.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/threads.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/tree.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/uri.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/valid.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xinclude.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xlink.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlIO.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlautomata.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlerror.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlexports.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlmemory.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlmodule.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlreader.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlregexp.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlsave.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlschemas.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlschemastypes.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlstring.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlunicode.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xmlwriter.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xpath.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xpathInternals.h"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/include/libxml/xpointer.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xruntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so.2.14.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2.so.2.14.0"
    "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2.so.2"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so.2.14.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxml2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xprogramsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/xmlcatalog")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog"
         OLD_RPATH "/home/ideapad/Desktop/AED/build/_deps/libxml2-build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmlcatalog")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xprogramsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/xmllint")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint"
         OLD_RPATH "/home/ideapad/Desktop/AED/build/_deps/libxml2-build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xmllint")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xruntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/python/libxml2mod.so.2.14.0")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/python" TYPE SHARED_LIBRARY FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2mod.so.2.14.0")
  if(EXISTS "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0"
         OLD_RPATH "/home/ideapad/Desktop/AED/build/_deps/libxml2-build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/python/libxml2mod.so.2.14.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/python/libxml2mod.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/python/libxml2mod.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/python/libxml2mod.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/python/libxml2mod.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/python" TYPE SHARED_LIBRARY FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2mod.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/python/libxml2mod.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/python/libxml2mod.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/local/python/libxml2mod.so"
         OLD_RPATH "/home/ideapad/Desktop/AED/build/_deps/libxml2-build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/python/libxml2mod.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xruntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/python/drv_libxml2.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/python" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/python/drv_libxml2.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xruntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/python/libxml2.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/python" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocumentationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/doc/xml2-config.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocumentationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/doc/xmlcatalog.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocumentationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/doc/xmllint.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocumentationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/libxml2" TYPE DIRECTORY FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-src/doc/" REGEX "/Makefile\\.[^/]*$" EXCLUDE REGEX "/meson\\.build$" EXCLUDE REGEX "/[^/]*\\.1$" EXCLUDE REGEX "/[^/]*\\.py$" EXCLUDE REGEX "/[^/]*\\.res$" EXCLUDE REGEX "/[^/]*\\.xml$" EXCLUDE REGEX "/[^/]*\\.xsl$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2-config.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml2-config-version.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0/libxml2-export.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0/libxml2-export.cmake"
         "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/CMakeFiles/Export/lib/cmake/libxml2-2.14.0/libxml2-export.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0/libxml2-export-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0/libxml2-export.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/CMakeFiles/Export/lib/cmake/libxml2-2.14.0/libxml2-export.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/libxml2-2.14.0" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/CMakeFiles/Export/lib/cmake/libxml2-2.14.0/libxml2-export-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libxml2/libxml" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml/xmlversion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/libxml-2.0.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/ideapad/Desktop/AED/build/_deps/libxml2-build/xml2-config")
endif()

