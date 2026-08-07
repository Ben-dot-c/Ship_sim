cmake_minimum_required(VERSION 3.10)
project(managment_sim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main
    src/main.cpp
    src/Crew.cpp
    src/Room.cpp
    src/Ship.cpp
    src/Savegame.cpp
    src/Stats/Repair_stat.cpp
    src/Stats/Strength_stat.cpp
    src/Stats/Medicine_stat.cpp
    src/Stats/Weapons_stat.cpp
    src/Stats/Intelligence_stat.cpp
)

target_include_directories(main PRIVATE include lib/json/single_include)
