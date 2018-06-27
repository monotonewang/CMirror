//
// Created by wang on 2018/6/27.
//

#include <printf.h>
#include <stdlib.h>

void testRadix(){
    int i;
    i = 4;
    printf("%#x\n", &i);//打印地址
    printf("%#x\n", i);//16进制
    printf("%d\n", i);
    system("pause");
}