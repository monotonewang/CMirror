#include <stdio.h>//是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
#include <float.h>
#include <print.h>

// 变量声明
extern int a, b;
extern int c;
extern float f;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

void testExtern();

void testSizeOf();

void testCharacter();

void testConst();

int main()
{
    printHello();
    /* this is my first c program */
    printf("Hello, World! \n");
//    testSizeOf();
    testExtern();
    testCharacter();
    testConst();

    return 0;
}

void testConst() {
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
}

void testCharacter() { printf("Hello\tWorld\n\n"); }

void testSizeOf() {
    printf("int 存储大小 : %lu \n", sizeof(int));
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );
}

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