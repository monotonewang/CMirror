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

void testInitArray() {
    char buf8[] = "adfafdsafda";
    printf("strlen=%d,sizeOf=%d\n", strlen(buf8), sizeof(buf8));

    char buf9[100] = "dfsadfasfaf";
    printf("strlen=%d,sizeOf=%d\n", strlen(buf9), sizeof(buf9));

    char buf10 = "\1029";
    char buf11 = "\n9";

    printf("buf9=%d--buf10=%d\n", buf10, buf11);


    for (int i = 0; i < strlen(buf8); i++) {
        printf("%c", buf8[i]);
    }

    printf("\n");
    char *p = NULL;
    p = buf8;

    //利用指针
    for (int i = 0; i < strlen(buf8); i++) {
        printf("%c", p[i]);
    }

    printf("\n");

    for (int i = 0; i < strlen(buf8); i++) {
        printf("%c", *(p + i));
    }
    //buf8 是常量不能修改。

}
