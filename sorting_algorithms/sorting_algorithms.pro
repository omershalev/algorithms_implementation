TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    bubble_sort.cpp \
    runner.cpp \
    insertion_sort.cpp \
    merge_sort.cpp \
    heap_sort.cpp \
    quick_sort.cpp \
    bucket_sort.cpp

HEADERS += \
    sorting_algorithms.h
