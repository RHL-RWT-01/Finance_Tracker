cmake_minimum_required(VERSION 3.29)
project(Finance_Tracker)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Finance_Tracker
        src/UserProfile.cpp
        src/UserProfile.h
    src/main.cpp
        src/CSVHandler.cpp
        src/CSVHandler.h
        src/DataStructures.cpp
        src/DataStructures.h
        src/DataStructures.h
)
