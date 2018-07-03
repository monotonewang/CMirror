cmake_minimum_required(VERSION 3.7)
project(CMirror)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c imporve/socketClients/socketclient.c imporve/socketClients/socketclient.h imporve/socketClients/socketclient.h imporve/socketClients/socketclient.c imporve/chooseSort/chooseSort.h imporve/chooseSort/chooseSort.c imporve/testVariables/sizeof/sizeOf.h imporve/testVariables/sizeof/sizeOf.c imporve/typedefTest/testTypedef.h imporve/typedefTest/testTypedef.c imporve/testVariables/chooseSort.h imporve/testVariables/testVariable.c imporve/testStatic/testStatic.h imporve/testStatic/testStatic.c imporve/testPointer/testPointer.h imporve/testPointer/testPointer.c imporve/testRadix/testRadix.h imporve/testRadix/testRadix.c imporve/testStruct/testStuct.h imporve/testStruct/testStruct.c imporve/testArray/testArray.h imporve/testArray/testArray.c imporve/testHelloWorld/testHelloWorld.h imporve/testHelloWorld/testHelloWorld.c imporve/testConstant/testConstant.h imporve/testConstant/testConstant.c)
add_executable(CMirror ${SOURCE_FILES})