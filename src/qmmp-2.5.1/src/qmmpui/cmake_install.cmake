# Install script for directory: /home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmmpui.so.2.5.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmmpui.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/libqmmpui.so.2.5.1"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/libqmmpui.so.2"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmmpui.so.2.5.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmmpui.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmp:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/libqmmpui.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qmmpui" TYPE FILE FILES
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/colorwidget.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/commandlinehandler.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/commandlinemanager.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/configdialog.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/detailsdialog.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/filedialogfactory.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/filedialog.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/generalfactory.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/general.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/mediaplayer.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/metadataformatter.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/metadataformattermenu.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistdownloader.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistformat.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistgroup.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistheadermodel.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistitem.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistmanager.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistmodel.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlistparser.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/playlisttrack.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/qmmpui_export.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/qmmpuisettings.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/shortcutdialog.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/templateeditor.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/uifactory.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/uihelper.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/uiloader.h"
    "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/visualmenu.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/qmmpui.pc")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/chris/qmmp-all/src/qmmp-2.5.1/src/qmmpui/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
