#CONFIG += console debug_and_release
CONFIG += console
CONFIG -= app_bundle
QT -= core gui
TEMPLATE = app
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

CONFIG(release, debug|release) {
  DEFINES += NDEBUG
}

HEADERS += my_functions.h
SOURCES += my_functions.cpp \
    main_test.cpp \
    my_functions_test.cpp

# C++11
win32 {
  # Windows only
  message("Console application, built for Windows")
  QMAKE_CXXFLAGS += -Wall
}

unix:!macx{
  # Linux only
  message("Console application, built for Linux")
  message(Host name: $$QMAKE_HOST.name)

  QMAKE_CXX = g++-5
  QMAKE_LINK = g++-5
  QMAKE_CC = gcc-5
  QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror -std=c++11
}

# Boost.Test
LIBS += -lboost_unit_test_framework

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
