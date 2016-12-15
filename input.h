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