//
// Created by wang on 2018/6/27.
//


#include <printf.h>
#include <memory.h>
#include <stdlib.h>

void freePointer(){
    //	char arr[20] ="hello";
    int i=3;
    int arr[10];
    int *p=malloc(10);
    *p = 10;
    *(p+1) = 20;
    printf("%d--%d\n",*p,&p);
    //释放堆内存空间 ,p指针为野指针，之前地址还是保存。
//	free(p);
    printf("%d==%d\n",*(p+1),&(p));
    system("pause");
}

void testPointer() {


    int a = 0;
    int *p ;

    printf("a=%d\n", a);

    p = &a;

    *p=22;


    printf("after a=%d\n", a);

    //读内存操作
    printf("p=%d\n", *p);

}

void testSecondPointer(){

    int i=3;
    //定义一个保存int类型数据的指针,p中存放内存地址，地址所放的数据是int类型的
    int *p = &i;
    //二级指针
    int **q =&p;
    printf("i的地址%#x\n",p);
    //取出p中地址存放的数据
    printf("i的值%#x\n",*p);
    printf("q的存放地址%#x\n",*q);
    printf("q的值%#x\n",**q);
    system("pause");

}

void testMemCpy(){
    char str[]="abc";

    char dst[100];

    memcpy(dst,str, sizeof(str));

    printf("dst=%s\n",dst);

    char *p=0x1212;

    strcpy(p,"test");

    printf("p=%s",p);

}