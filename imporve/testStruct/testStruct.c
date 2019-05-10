//
// Created by wang on 2018/6/27.
//


#include <printf.h>
#include <stdlib.h>


void testStructPoint(){
    struct student *xiaomiao;

}



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
    char address[100];
    int age;
    int height;
    char sex;
};

typedef struct Books{
    char title[50];
}Book;

//通过指针来传递 结构体，注：结构体的声明必须在该方法前面
void printStudent(struct student * s_student){
    printf("printStudent address %s\n",s_student->address);
    
}

void testStructs() {
   char greeting[6] = "hellocdsdsa\0";

    printf("%s xx=",greeting);

    char address[100]="china";

    struct student st = {"china",20, 180, 'n'};

    printf("this is =%s\n", st.address);
    printf("%d\n", st.age);
    printf("%d\n", sizeof(st));

    printStudent(&st);

    // system("pause");
}