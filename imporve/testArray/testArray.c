//
// Created by wang on 2018/6/27.
//

#include <printf.h>
#include <stdlib.h>
#include <memory.h>

void testArray() {
    //	char arr[20] ="hello";
    int arr[] = {1, 2, 3, 4, 51};
    printf("%#x\n", &arr[0]);
    printf("%#x\n", &arr[1]);
    printf("%#x\n", &arr[2]);
    system("pause");
}

/**
 * 利用strstr函数找出abcd出现的次数
 */
void testStrstr() {
    char *p = "899abcd0000abcd";
    int n = 0;
//    do {
//        p = strstr(p, "abcd");
//        if (p != NULL) {
//            n++;
//            //重新设置查找的起点
//            p = p + strlen("abcd");
//        } else {
//            break;
//        }
//    } while (*p != 0);

    while ((p = strstr(p, "abcd")) != NULL) {
        //重新设置查找的起点
        p = p + strlen("abcd");

        n++;

        if (*p == 0) {
            break;
        }
    }

    printf("abcd count=%d\n", n);
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

    printf("a=%d\n-a+1=%d\n", a, a + 1);   //30 首行和 首元素区别
    printf("a=%d\n-a+1=%d\n", &a, &a + 1); //120
    for (int i = 0; i < alength; i++)
    { //遍历数组
        printf("child=%s\n", a[i]);
    }
}

//它会生成 10 个随机数，并使用数组来返回它们
int * getRandoms(){
    printf("getRandom start\n");
    static int r[10];
    int i;
    //https://baike.baidu.com/item/srand/796881?fr=aladdin
    //通常可以利用系统时间来改变系统的种子值，即srand(time(NULL))，可以为rand函数提供不同的种子值，进而产生不同的随机数序列
    srand((unsigned)time(NULL));

    for (int i=0;i<10;i++){
        r[i]=rand();
        printf( "r[%d] = %d\n", i, r[i]);
    }
    return r;
}

void testInitArray() {
    char buf8[] = "adfafdsafda";
    printf("strlen=%d,sizeOf=%d\n", strlen(buf8), sizeof(buf8));

    char buf9[100] = "dfsadfasfaf";
    printf("strlen=%d,sizeOf=%d\n", strlen(buf9), sizeof(buf9));

    char buf10 = "\1029";
    char buf11 = "\n9";

    printf("buf9=%d--buf10=%d\n", buf10, buf11);

    printf("pring get buf8[i]\n");

    for (int i = 0; i < strlen(buf8); i++) {
        printf("%c", buf8[i]);
    }

    printf("\n");
    char *p = NULL;
    p = buf8;

    printf("pring get p[i]\n");

    //利用指针
    for (int i = 0; i < strlen(buf8); i++) {
        printf("%c", p[i]);
    }

    printf("\n");

    for (int i = 0; i < strlen(buf8); i++) {
        printf("%c", *(p + i));
    }
    //buf8 是常量不能修改。
    printf("getRandom get start\n");

    int *px=getRandoms();
    for (int i=0;i<10;i++){
        printf( "*(px + %d) : %d\n", i, *(px + i)); 
    }
}

