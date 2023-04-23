cmake_minimum_required(VERSION 3.14)

project(hospital_mng_sys LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/SQLiteCpp)

include_directories(include/)

add_executable(
    hospital_mng_sys
    app/main.cpp

    src/hospital.cpp
    src/person.cpp
    src/patient.cpp

    include/mng.hpp
    include/patient.h
    include/person.h
    include/hospital.h
    include/types.h
)


#link_directories(-L/usr/lib/x86_64-linux-gnu -lsqlite3 SQLiteCpp/build )


target_link_libraries(
    hospital_mng_sys
    Qt${QT_VERSION_MAJOR}::Core
    sqlite3
    pthread
    dl
    SQLiteCpp
)

install(TARGETS hospital_mng_sys
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
