//
// Created by wang on 2018/6/28.
//



#include <printf.h>

void testConstant() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    char *p = &LENGTH;

    *p = 20;


    area = LENGTH * WIDTH;
    printf("LENGTH=%d,*p=%d,value of area : %d",LENGTH,*p, area);
    printf("%c", NEWLINE);


    char buf[] = "ab";
    const char *p1 = buf;

//    p1[1]="a"; error

    //p2指针不能变，值可以变。
    char *const p2 = buf;

    p2[0] = 'x';

    printf("buf=%s\n", buf);
    printf("a=%d", 1);
    return;
}