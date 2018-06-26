//
// Created by wang on 2018/6/26.
//

#include <printf.h>

void testVariable() {
    int a;
    a = 10;

    printf("a=%d\n", a);

    int *p;

    p = &a;

    //间接赋值
    *p = 22;

    printf("p=%d\n", p);
    printf("&p=%d\n", &p);
    printf("&a=%d\n", a);

}

char *testGlobal() {
    char *p = "a";
    return p;
}

char *testGlobal2() {
    char *p = "a";
    return p;
}

char *testGlobal3(){
    char *p="ab";
    return p;
}