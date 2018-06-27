#include <stdio.h>//是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
#include <float.h>
#include <stdlib.h>
#include "hello.h"
#include "input.h"
#include "array.h"
#include "structs.h"
#include "dynicMemory.h"
#include "memoryAddr.h"
#include "testStudent.h"
#include "imporve/cycle.h"
#include "pointer.h"
#include "funAddr.h"
#include "imporve/socketclient/socketclient.h"
#include "imporve/chooseSort/chooseSort.h"
#include "imporve/sizeof/sizeOf.h"
#include "imporve/testvariable/testVariable.h"

// 变量声明
extern int a, b;
extern int c;
extern float f;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

void testExtern();

void testCharacter();

void testConst();


int main() {


//    int a[] = {10, 9, 2, 1, 9, 4, 3, 2, 0};
//    sortArray(a, sizeof(a)/ sizeof(a[0]));

//    testSizeOf();

//    testVariable();

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

    testHeap();

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
//    printf("Hello, World! \n");
//    testExtern();
//    testCharacter();
//    testConst();

    return 0;
}



void testConst() {
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
}

void testCharacter() { printf("Hello\tWorld\n\n"); }


void testExtern() {/* 变量定义 */
    int a, b;
    int c;
    float f;

    /* 初始化 */
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = (float) (70.0 / 3.0);
    printf("value of f : %f \n", f);
}