//
// Created by wang on 2018/6/27.
//

https://buyertrade.taobao.com/trade/itemlist/list_bought_items.htm?spm=a21bo.2017.1997525045.2.5af911d9vnZlZR
#include <printf.h>
#include <stdlib.h>

void testCharacter() { printf("Hello\tWorld\n\n"); }


int fun(){
    printf("hello world\n");
    system("pause");
    return 0;
};

int testInput() {
    printf("请输入班级的人数：\n");
    int number;
    scanf("%d", &number);
    printf("请输入班级的名称：\n");
    char name[4];
    scanf("%s", &name);
    printf("班级的人数=%d人,班级名称名称=%s\n", number, name);
    system("pause");
    return 0;
}