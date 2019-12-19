INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_SSS1 sss1)

FIND_PATH(
    SSS1_INCLUDE_DIRS
    NAMES sss1/api.h
    HINTS $ENV{SSS1_DIR}/include
        ${PC_SSS1_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    SSS1_LIBRARIES
    NAMES gnuradio-sss1
    HINTS $ENV{SSS1_DIR}/lib
        ${PC_SSS1_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SSS1 DEFAULT_MSG SSS1_LIBRARIES SSS1_INCLUDE_DIRS)
MARK_AS_ADVANCED(SSS1_LIBRARIES SSS1_INCLUDE_DIRS)

