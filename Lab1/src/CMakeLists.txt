add_executable(elect ${CMAKE_CURRENT_LIST_DIR}/elect.cpp)
add_executable(task2 ${CMAKE_CURRENT_LIST_DIR}/task2.cpp)
add_executable(task3 ${CMAKE_CURRENT_LIST_DIR}/task3.cpp)
add_executable(task4 ${CMAKE_CURRENT_LIST_DIR}/task4.cpp)

add_subdirectory(election)
add_subdirectory(utils)

target_link_libraries(elect
    PRIVATE
        electionlib
)
target_link_libraries(task2
    PRIVATE
        electionlib
        utilslib
)
target_link_libraries(task3
    PRIVATE
        electionlib
        utilslib
)
target_link_libraries(task4
    PRIVATE
        electionlib
        utilslib
)
