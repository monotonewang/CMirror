#include <stdio.h>
#include <stdlib.h>

void function(int *p)
{
    int i=3;
    printf("i的地址为%#x\n",&i);
    *p = &i;
}
void funAddr()
{
    int *mainp;
    function(&mainp);
    //数据幻影
    printf("主函数中获取的i的值为%#d\n=",*mainp);
    printf("主函数中获取的i的地址为%#x\n=",mainp);
    system("pause");
}
