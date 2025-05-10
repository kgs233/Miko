unset(ANTLR_INCLUDE_DIRS CACHE)
unset(ANTLR_LIBRARIES CACHE)

find_path(ANTLR_INCLUDE_DIRS
          NAMES antlr4-runtime.h
          HINTS /usr/include/antlr4-runtime /usr/local/include/antlr4-runtime
          DOC "Antlr4 include directory"
)

if(${ANTLR_INCLUDE_DIRS} STREQUAL "ANTLR_INCLUDE_DIRS-NOTFOUND")
  message(FATAL_ERROR "Unable to find Antlr4 include directory")
endif()

find_library(ANTLR_LIBRARIES
             NAMES antlr4-runtime
             HINTS /usr/lib /usr/local/lib
             DOC "Antlr4 library"
)

if(${ANTLR_LIBRARIES} STREQUAL "ANTLR_LIBRARIES-NOTFOUND")
  message(FATAL_ERROR "Unable to find Antlr4 library")
endif()

find_program(ANTLR_BINARY
             NAMES antlr4 antlr
             HINTS /bin /usr/bin /usr/local/bin
             DOC "Antlr4 Binary File"
)

if(${ANTLR_BINARY} STREQUAL "ANTLR_BINARY-NOTFOUND")
  message(FATAL_ERROR "Unable to find Antlr4 Binary File")
endif()