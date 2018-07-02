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

void testInitArray() {
    char buf8[]="adfafdsafda";
    printf("strlen=%d,sizeOf=%d\n",strlen(buf8), sizeof(buf8));

    char buf9[100]="dfsadfasfaf";
    printf("strlen=%d,sizeOf=%d\n",strlen(buf9), sizeof(buf9));
}
