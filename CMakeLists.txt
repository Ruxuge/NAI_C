cmake_minimum_required(VERSION 3.10)
project(NAI_C)
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS})


set(CMAKE_CXX_STANDARD 14)

add_executable(NAI_C main.cpp wykłady/wyk1/hill_climbing.h wykłady/wyk2/tabu_search.h zadania/zad1/lab1.h zadania/zad2/lab2.h zadania/zad1/lab1.cpp zadania/zad2/lab2.cpp wykłady/wyk1/hill_climbing.cpp wykłady/wyk2/tabu_search.cpp helpers.h zadania/functions/Beale/beale.cpp zadania/functions/Beale/beale.h zadania/functions/Booth/booth.cpp zadania/functions/Booth/booth.h zadania/functions/HimmelBlau/himmelBlau.cpp zadania/functions/HimmelBlau/himmelBlau.h wykłady/wyk3/sa.cpp wykłady/wyk3/sa.h zadania/zad3/lab3.cpp zadania/zad3/lab3.h zadania/functions/funcControler.cpp zadania/functions/funcControler.h zadania/zad4/lab4.cpp zadania/zad4/lab4.h zadania/zad4/hb_func.cpp zadania/zad4/hb_func.h zadania/zad5/lab5.cpp zadania/zad5/lab5.h zadania/zad6/lab6.cpp zadania/zad6/lab6.hpp zadania/zad7/lab7.cpp zadania/zad7/lab7.h zadania/zad8/lab8.cpp zadania/zad8/lab8.h zadania/zad9/lab9.cpp zadania/zad9/lab9.h)

target_link_libraries( NAI_C ${OpenCV_LIBS})