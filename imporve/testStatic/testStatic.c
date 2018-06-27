//
// Created by wang on 2018/6/27.
//

int *getA(){
    static int a=10;
    return &a;
}