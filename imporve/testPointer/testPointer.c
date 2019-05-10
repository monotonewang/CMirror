//
// Created by wang on 2018/6/27.
//

#include <printf.h>
#include <memory.h>
#include <stdlib.h>

void printArray();

void printArrays(char *pString[2], int n);

//指针数组
void testPointerArray(){
    const int MAX=3;
    int var[]={10,20,30};
    int i,*ptr[MAX];
    for(int i=0;i<MAX;i++){
        ptr[i]=&var[i];
    }
    for(int i=0;i<MAX;i++){
        printf("Value of var[%d] =%d-address-%p--%d\n",i,*ptr[i],ptr[i],ptr[i]);
    }

    printf("this is testPointerArray end\n");

    printf("int 存储大小 : %lu \n", sizeof(int));
    // printf(strlen(MAX)));
    // 指针存储的是8个字节，所以这里是24
    printf("ptr 存储大小 : %lu \n",sizeof(ptr));
}
//释放指针
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

//指针的基本概念
void testPointer()
{
    int a = 0;
    int *p;
    printf("a变量的值=%d\n", a);
    printf("a变量的地址=%d\n", &a);
    p = &a;
    *p = 22;
    printf("after a=%d\n", a);
    printf("&a 的地址 =%p\n", &a);
    // 这是p存的地址
    printf("p 指向的地址=%p\n", p);
    //这是 p内存真实的地址
    printf("p 指针的地址=%p\n", &p);

    //读内存操作
    printf("p=%d\n", *p);
}
//二级指针
void testSecondPointer()
{

// %x是16进制输出.
// %8x是输出8位
// %#x是带格式输出, 效果为在输出前加0x.

    int  *ptr = NULL;

   printf("ptr 的值是 %x\n", ptr  );

    int i = 3;
    i=200012;
    //定义一个保存int类型数据的指针,p中存放内存地址，地址所放的数据是int类型的
    int *p = &i;
    //二级指针
    int **q = &p;
    printf("i的地址%#x\n", p);
    //取出p中地址存放的数据
    printf("i的值%#x\n", *p);
    //下面
    printf("q的存放地址%#x\n", *q);
    printf("q的存放地址%p\n", *q);
    printf("q的存放地址%lu\n", *q);
    printf("q的存放地址%d\n", *q);

    //下面都是取值只不过表达的方式不一样
    printf("q的值%#x\n", **q);
    printf("q的值%x\n", **q);
    printf("q的值%lu\n", **q);
    printf("q的值%d\n", **q);
    system("pause");
}

void fun2(int *pq)
{
     /* 获取当前的秒数 */
    pq = (int *)time( NULL );
    printf("fun2 b=%p\n", pq);
}

void fun3(int *pq)
{
    *pq = (int)(int *)0xaaaa;
    printf("fun3 b=%p\n", *pq);
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