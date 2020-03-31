#include <stdio.h> //是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
#include <float.h>
#include <stdlib.h>
// #include "imporve/testArray/cycle.h"
// #include "imporve/socketClients/socketclient.h"
// #include "imporve/chooseSort/chooseSort.h"
#include "imporve/testVariables/testVariable.h"
#include "test.h"
// #include "imporve/testStatic/testStatic.h"
// #include "imporve/testPointer/testPointer.h"
// #include "imporve/testConstant/testConstant.h"
// #include "imporve/testArray/testArray.h"
// #include "imporve/testChar/testChar.h"
// #include "imporve/testStruct/testStruct.h"
// #include "imporve/testUnion/testUnion.h"
// #include "imporve/testFile/testFile.h"
// #include "imporve/typedefTest/testTypedef.h"

// 变量声明
extern int a, b;
extern int c;
extern float f;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

void testCharacter();

void testConst();
void testC();

int main(int argc, char **argv)
{

    // testArray();
    //    testSecondPointerArray();
    // testSecondPointer();
    //    testSecondArray();
    //    testStrstr();
    //    testInitArray();

    //    int a[] = {10, 9, 2, 1, 9, 4, 3, 2, 0};
    //    sortArray(a, sizeof(a)/ sizeof(a[0]));

    //    testSizeOf();

    // testCountValue();

    //两个地址一致
    //    char *a=testGlobal();
    //    printf("a%s=%d\n",&a,a);
    //    char *p=testGlobal2();
    //
    //    printf("p%s=%d\n",&p,p);
    //    char *q=testGlobal3();
    //
    //    printf("q%s=%d\n",&q,q);

    //    testStack();

    //    testHeap();
    //    freePointer();
    //    testSecondPointerValue();
// testSecondPointer();
    //    testConstant();
    //    testPointer();
       
        //   testPointerArray();
    //    testMemCpy();

    //    int *a=getA();

    //    printf("a=%d--%d",a,&a);

    //    funAddr();

    //    socket_init();

    //    pointer();
    //    cycle();
    //    testMemoryAddr();
    //    testStudent();
    //    testDynicMemory();
    //    testArray();
    //    testInput();
    //    testStructs();
    //    fun();
    //    testSizeOf();
    /* this is my first c program */
       printf("Hello, World! \n");
    //    testExtern();
    //    testCharacter();
    //    testConst();
    // testChars();

        // testUnions();
        // testFiles();
        // testDefine();
        // testVariable();
        testC();

    return 0;
}

void testConst()
{
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
}
