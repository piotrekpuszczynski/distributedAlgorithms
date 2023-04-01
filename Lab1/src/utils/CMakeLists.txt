add_library(utilslib "")

target_sources(utilslib
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Utils.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Utils.hpp
)

target_include_directories(utilslib
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
