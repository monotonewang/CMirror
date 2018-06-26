//
// Created by wang on 2018/6/26.
//



typedef unsigned int u32;

struct MyStruct {
    int a;
    short b;
};

//结构体别名
typedef struct MyStruct2 {
    int a;
    short b;
} TMP;

/**
 * void，无类型
 * 1.函数参数为空，可以用void修饰
 * 2.函数没有返回值
 * 3.可以定义void *变量，称为万能指针
 */

void testTypedef() {
    u32 t;// unsigned int

    //定义结构体变量，一定要加上struct关键字
    struct MyStruct m1;

    struct TMP mx;

    //省略了 struct
    TMP m2;

}