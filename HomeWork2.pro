TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        MemoryType.cpp \
        computercase.cpp \
        cpu.cpp \
        gpu.cpp \
        main.cpp \
        ram.cpp

HEADERS += \
    MemoryType.hpp \
    PostCodes.hpp \
    computercase.hpp \
    cpu.hpp \
    gpu.hpp \
    ram.hpp
