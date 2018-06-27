cmake_minimum_required(VERSION 3.7)
project(CMirror)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c imporve/socketclient/socketclient.c imporve/socketclient/socketclient.h imporve/socketclient/socketclient.h imporve/socketclient/socketclient.c imporve/chooseSort/chooseSort.h imporve/chooseSort/chooseSort.c imporve/sizeof/sizeOf.h imporve/sizeof/sizeOf.c imporve/typedefTest/testTypedef.h imporve/typedefTest/testTypedef.c imporve/testvariable/chooseSort.h imporve/testvariable/testVariable.c imporve/testStatic/testStatic.h imporve/testStatic/testStatic.c imporve/testPointer/testPointer.h imporve/testPointer/testPointer.c imporve/testRadix/testRadix.h imporve/testRadix/testRadix.c imporve/testStruct/testStuct.h imporve/testStruct/testStruct.c imporve/testArray/testArray.h imporve/testArray/testArray.c imporve/testHelloWorld/testHelloWorld.h imporve/testHelloWorld/testHelloWorld.c)
add_executable(CMirror ${SOURCE_FILES})