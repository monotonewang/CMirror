
void testSizeOf() {
    printf("int 存储大小 : %lu \n", sizeof(int));
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );

    printf("char的长度：%d\n",sizeof(char));//1 java 2
    printf("int的长度：%d\n",sizeof(int));//4  java 4
    printf("float的长度：%d\n",sizeof(float));//4 java 4
    printf("double的长度：%d\n",sizeof(double));//8 java 8
    printf("long的长度：%d\n",sizeof(long));//4 java 8 在c语音中的数据long long
    printf("short的长度：%d\n",sizeof(short));//2 java 2
    printf("long long的长度%d\n",sizeof(long long)); //8
    printf("short int的长度%d\n",sizeof(short int)); //8
    system("pause");
}