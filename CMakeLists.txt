cmake_minimum_required(VERSION 3.7)
project(CMirror)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c imporve/socketclient/socketclient.c imporve/socketclient/socketclient.h imporve/socketclient/socketclient.h imporve/socketclient/socketclient.c imporve/chooseSort/chooseSort.h imporve/chooseSort/testVariable.c imporve/sizeof/sizeOf.h imporve/sizeof/sizeOf.c imporve/typedefTest/testTypedef.h imporve/typedefTest/testTypedef.c imporve/testvariable/testVariable.h imporve/testvariable/testVariable.c)
add_executable(CMirror ${SOURCE_FILES})