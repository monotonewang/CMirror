//
// Created by wang on 2018/6/26.
//

#include <printf.h>

//https://www.cnblogs.com/spring-hailong/p/6110685.html
//如果数组作为函数参数，数组形参退化为指针
void sortArray(int *a, int len) {

//    int a[] = {10, 9, 2, 1, 9, 4, 3, 2, 0};

    int n;
    int i = 0;
    printf("排序前\n");
    n = sizeof(a) / sizeof(a[0]);//获取元素个数
    n = len;

    printf("n=%d" + n);
//    printf("sizeof(a)=%d" + sizeof(a));
    printf("\n");

    for (int j = 0; j < n; ++j) {

        for (int k = j + 1; k < n; ++k) {

            int temp;

            if (a[j] > a[k]) {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
        printf("%d--", a[j]);
    }

    printf("\n");
}


/**
 * 求阶乘
 */
void sum() {
    int sum = 1;

    if (sum == 0) {
        printf("sum=%d\n", 0);
        return;
    }
//    9*8*7*6*5*4*3*2*1;

    for (int i = 1; i < 5; i++) {
//        for (int j = i + 1; j < 10; j++) {
        sum = i * sum;
//        }
    }

    printf("sum=%d\n", sum);
}
