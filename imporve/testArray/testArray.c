//
// Created by wang on 2018/6/27.
//

#include <printf.h>
#include <stdlib.h>

void testArray() {
    //	char arr[20] ="hello";
    int arr[] = {1, 2, 3, 4, 51};
    printf("%#x\n", &arr[0]);
    printf("%#x\n", &arr[1]);
    printf("%#x\n", &arr[2]);
    system("pause");
}
