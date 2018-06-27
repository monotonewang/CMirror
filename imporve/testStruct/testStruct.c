//
// Created by wang on 2018/6/27.
//


#include <printf.h>
#include <stdlib.h>

void testStudent(){

    printf("请输入学生人数：\n");
    int count;
    scanf("%d",&count);
    printf("学生的人数=%d\n",count);


    //根据学生人数去动态申请堆内存
    int *p=malloc(sizeof(int) *count);
    int i;
    for(i=0;i<count;i++){
        printf("请输入第%d个学生学号",i);
        scanf("%d",p+i);
    }

    for(i=0;i<count;i++){
        printf("第%d个学生的学号是：%d\n",i,*(p+i));
    }

    system("pause");
}


struct student {
    int age;
    int height;
    char sex;
};

void testStructs() {
    struct student st = {20, 180, 'n'};
    printf("%d\n", st.age);
    printf("%d\n", sizeof(st));
    system("pause");
}