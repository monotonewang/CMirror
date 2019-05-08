//
// Created by wang on 2018/6/27.
//

#include <printf.h>
#include <memory.h>
#include <stdlib.h>

void printArray();

void printArrays(char *pString[2], int n);

void freePointer()
{
    //	char arr[20] ="hello";
    //    int i = 3;
    //    int arr[10];
    //    int *p = malloc(10);
    //    *p = 10;
    //    *(p + 1) = 20;
    //    printf("%d--%d\n", *p, &p);
    //    //释放堆内存空间 ,p指针为野指针，之前地址还是保存。
    ////	free(p);
    //    printf("%d==%d\n", *(p + 1), &(p));
    //    system("pause");
}

//void printArray(char **p,int n) {
//

//}

double getArrayAverage(int *p, int size)
{
    int sum=0;
    double avg;

    for (int i = 0; i < size; ++i)
    {
        sum += p[i];
        printf(" array  i=%d,value=%d,sum=%d\n", i, p[i],sum);

    }

    printf(" array  sum=%d,size=%d\n", sum, size);
    avg = sum / size;

    printf(" array  sum=%f\n",avg);

    return avg;
}
/**
 *二级指针作为输入
 * @param p
 * @param n
 */
void printArrays(char **p, int n)
{
    for (int i = 0; i < n; i++)
    { //遍历数组
        printf("child=%s\n", p[i]);
    }
    return;
}

/**
 * 数组指针
 */
void testSecondPointerArray()
{
    char *p0 = "12121212";
    char *p1 = "abcdefg";
    char *p2 = "12121212";
    char *p3 = "12121212";

    char a[30] = "xxx"; //s
    char *p[] = {"12121212", "abcdefg"};
    char *pLength[10] = {"12121212", "abcdefg"};
    int n = sizeof(p) / sizeof(p[0]);
    int npLength = sizeof(pLength) / sizeof(pLength[0]);

    for (int i = 0; i < n; i++)
    { //遍历数组
        printf("child=%s\n", p[i]);
    }

    printf("child first end=\n");

    int alength = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < alength; i++)
    { //遍历数组
        printf("child=%c\n", a[i]);
    }

    printf("child second end=\n");

    printArrays(p, n);

    int array[] = {1, 2, 3, 4, 5};
    int *p_array = &array;
    int p_size=sizeof(array)/sizeof(array[0]);
    double avg = getArrayAverage(p_array, p_size);

    printf("array avg=%0.2f\n", avg);

    printf("sizeOf n=%d,npLength=%d,alength=%d\n", n, npLength, alength);
}

void testSecondArray()
{
    //遍历二位数组
    int a2[3][4] = {
        {0, 1, 2, 3},  /*  初始化索引号为 0 的行 */
        {4, 5, 6, 7},  /*  初始化索引号为 1 的行 */
        {8, 9, 10, 11} /*  初始化索引号为 2 的行 */
    };

    int i, j;

    /* 输出数组中每个元素的值 */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a2[i][j]);
        }
    }

    //4个 a[30]的一维数组
    char a[4][30] = {"aaaaa", "111111", "bbbbbbbbbbb"};
    int alength = sizeof(a) / sizeof(a[0]);

    printf("a=%d\n,a+1=%d\n", a, a + 1);   //30 首行和 首元素区别
    printf("a=%d\n,a+1=%d\n", &a, &a + 1); //120
    for (int i = 0; i < alength; i++)
    { //遍历数组
        printf("child=%s\n", a[i]);
    }
}

void testPointer()
{

    int a = 0;
    int *p;

    printf("a=%d\n", a);

    p = &a;

    *p = 22;

    printf("after a=%d\n", a);

    //读内存操作
    printf("p=%d\n", *p);
}

void testSecondPointer()
{

    int  *ptr = NULL;

   printf("ptr 的值是 %x\n", ptr  );

    int i = 3;
    //定义一个保存int类型数据的指针,p中存放内存地址，地址所放的数据是int类型的
    int *p = &i;
    //二级指针
    int **q = &p;
    printf("i的地址%#x\n", p);
    //取出p中地址存放的数据
    printf("i的值%#x\n", *p);
    printf("q的存放地址%#x\n", *q);
    printf("q的值%#x\n", **q);
    system("pause");
}

void fun2(int *pq)
{
    pq = (int *)0xaaaa;
    printf("fun2 b%p=\n", pq);
}

void fun3(int *pq)
{
    *pq = (int)(int *)0xaaaa;
    printf("fun3 b%p=\n", *pq);
}

/**
 * 二级指针间接赋值
 */
void testSecondPointerValue()
{
    int *pq = 0x21212;
    printf("p1=%p\n", pq);
    //调用不声明的函数，需要放到前面
    fun2(pq);

    printf("after fun2=%p\n", pq);

    printf("\n");
    printf("\n");
    printf("\n");

    fun3(&pq);

    printf("after fun3=%p\n", pq);
}

void testMemCpy()
{
    char str[] = "abc";

    char dst[100];

    memcpy(dst, str, sizeof(str));

    printf("dst=%s\n", dst);

    char *p = 0x1212;

    strcpy(p, "test");

    printf("p=%s", p);
}