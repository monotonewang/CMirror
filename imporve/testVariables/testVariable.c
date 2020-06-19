//
// Created by wang on 2018/6/26.
//

#include <printf.h>
#include <memory.h>
#include <stdlib.h>

//char int short long
//long long
//unsigned chart
//unsigned int
//unsigned short
//unsigned long
//unsigned long long
void defineVariable()
{
    int a, b;
    int c;
    float f;

    /* 初始化 */
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = (float)(70.0 / 3.0);
    printf("value of f : %f \n", f);
}

void testStorage()
{
    auto int month; //auto 只能用在函数内，即 auto 只能修饰局部变量。

    //register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。
    //这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）

    register int miles;

    //static 存储类指示编译器在程序的生命周期内保持局部变量的存在，
    //而不需要在每次它进入和离开作用域时进行创建和销毁。
    //因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
    static int count = 5; /* 全局变量 */

    //当您使用 'extern' 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置
    extern void write_extern();

    // extern void num;
}

/* 算术运算符*/
void testCountValue()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    printf("Line 1 - c 的值是 %d\n", c);
    c = a - b;
    printf("Line 2 - c 的值是 %d\n", c);
    c = a * b;
    printf("Line 3 - c 的值是 %d\n", c);
    c = a / b;
    printf("Line 4 - c 的值是 %d\n", c);
    c = a % b;
    printf("Line 5 - c 的值是 %d\n", c);
    c = a++;
    printf("Line 6 - c 的值是 %d\n", c);
    c = a--;
    printf("Line 7 - c 的值是 %d\n", c);

    c = a++;
    printf("先赋值后运算：\n");
    printf("Line 1 - c 的值是 %d\n", c);
    printf("Line 2 - a 的值是 %d\n", a);
    a = 10;
    c = a--;
    printf("Line 3 - c 的值是 %d\n", c);
    printf("Line 4 - a 的值是 %d\n", a);
    printf("先运算后赋值：\n");
    a = 10;
    c = ++a;
    printf("Line 5 - c 的值是 %d\n", c);
    printf("Line 6 - a 的值是 %d\n", a);
    a = 10;
    c = --a;
    printf("Line 7 - c 的值是 %d\n", c);
    printf("Line 8 - a 的值是 %d\n", a);
}

void testVariable()
{

    int d = 30ul; /* 无符号长整数 */

    printf("value of d=%d\n", d);
    printf("value of d=%d\n", 032);
    printf("value of d=%d\n", 032u); //无符号整数

    int a;
    a = 10;

    printf("a=%d\n", a);

    int *p;

    p = &a;

    //间接赋值
    *p = 22;

    printf("p=%d\n", p);
    printf("&p=%d\n", &p);
    printf("&a=%d\n", a);
}

char *testGlobal()
{
    char *p = "a";
    return p;
}

char *testGlobal2()
{
    char *p = "a";
    return p;
}

char *testGlobal3()
{
    char *p = "ab";
    return p;
}

//返回字符数组。
char *getStr()
{
    return "this is a number";
}

char *getStr2()
{
    char *temp = (char *)malloc(100);
    char *temp2 = (char *)malloc(100);

    //存储是从低地址到高地址生长
    printf("temp=%d---temp2=%d\n", &temp, &temp2);

    if (temp == NULL)
    {
        return NULL;
    }
    strcpy(temp, "this is from ");
    return temp;
}

/**
 * 堆
 */
void testHeap()
{
    char buf[128] = {0};

    char newBuf[] = {0};
    char *p = NULL;
    p = getStr2(); //getStr()执行完，空间回收，出现乱码。
    strcpy(buf, p);

    if (p != NULL)
    {
        printf("buf=%s\n", buf);
        printf("p=%s\n", &p);

        free(p);
        p = NULL;
    }
}

/**
 * 栈
 */
void testStack()
{
    char buf[128] = {0};

    //存储是从高地址到低地址生长
    int a = 10;
    int b = 10;

    printf("a=%d---d=%d\n", &a, &b);
    char newBuf[] = {0};
    char *p = NULL;
    p = getStr(); //getStr()执行完，空间回收，出现乱码。
    strcpy(buf, p);

    printf("buf=%s\n", buf);
    printf("p=%s\n", &p);
}