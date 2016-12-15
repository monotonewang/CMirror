#include <stdio.h>
#include <stdlib.h>

void pointer()
{
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

