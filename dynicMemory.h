#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

void testDynicMemory()
{
//	char arr[20] ="hello";
    int i=3;
    int arr[10];
    int *p=malloc(10);
    *p = 10;
    *(p+1) = 20;
    printf("%d\n",*p);
    //释放堆内存空间
//	free(p);
    printf("%d\n",*(p+1));
    system("pause");
}
