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

int square(int x){
    return x*x;
}
//使用宏定义和上面效果一致。
#define square(x) (x*x)

void testDefine(){
    printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
}
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


    //省略了 struct
    TMP m2;

}