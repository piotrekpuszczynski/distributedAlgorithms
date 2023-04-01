add_library(electionlib "")

target_sources(electionlib
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Node.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Network.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Election.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Node.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Network.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Election.hpp
    )

target_include_directories(electionlib
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
