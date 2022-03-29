cmake_minimum_required(VERSION 3.21)
project(untitled4)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled4 main.cpp interfaces/Figure.h interfaces/PhysObject.h interfaces/Vector2D.h interfaces/Printable.h interfaces/DialogInitiable.h interfaces/BaseObject.h Section.h Ellipse.h)
