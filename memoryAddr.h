#include <stdio.h>
#include <stdlib.h>

void testMemoryAddr() {
    int i;
    i = 4;
    printf("%#x\n", &i);//打印地址
    printf("%#x\n", i);//16进制
    printf("%d\n", i);
    system("pause");
}
