#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

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
