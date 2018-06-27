//
// Created by wang on 2018/6/26.
//

#include <printf.h>
#include <memory.h>
#include <stdlib.h>

void testVariable() {
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

char *testGlobal() {
    char *p = "a";
    return p;
}

char *testGlobal2() {
    char *p = "a";
    return p;
}

char *testGlobal3() {
    char *p = "ab";
    return p;
}

//返回字符数组。
char *getStr() {
    return "this is a number";
}

char *getStr2(){
    char *temp=(char *)malloc(100);
    if(temp==NULL){
        return NULL;
    }
    strcpy(temp,"this is from ");
    return temp;
}

/**
 * 堆
 */
void testHeap() {
    char buf[128] = {0};

    char newBuf[] = {0};
    char *p = NULL;
    p = getStr2();//getStr()执行完，空间回收，出现乱码。
    strcpy(buf,p);

    if(p!=NULL){
        printf("buf=%s\n", buf);
        printf("p=%s\n", &p);

        free(p);
        p=NULL;

    }

}

/**
 * 栈
 */
void testStack() {
    char buf[128] = {0};

    char newBuf[] = {0};
    char *p = NULL;
    p = getStr();//getStr()执行完，空间回收，出现乱码。
    strcpy(buf,p);

    printf("buf=%s\n", buf);
    printf("p=%s\n", &p);
}