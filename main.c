#include <stdio.h>//��Ԥ������ָ����� C ��������ʵ�ʱ���֮ǰҪ���� stdio.h �ļ���
#include <float.h>
#include <print.h>

// ��������
extern int a, b;
extern int c;
extern float f;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

void testExtern();

void testSizeOf();

void testCharacter();

void testConst();

int main()
{
    printHello();
    /* this is my first c program */
    printf("Hello, World! \n");
//    testSizeOf();
    testExtern();
    testCharacter();
    testConst();

    return 0;
}

void testConst() {
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
}

void testCharacter() { printf("Hello\tWorld\n\n"); }

void testSizeOf() {
    printf("int �洢��С : %lu \n", sizeof(int));
    printf("float �洢����ֽ��� : %lu \n", sizeof(float));
    printf("float ��Сֵ: %E\n", FLT_MIN );
    printf("float ���ֵ: %E\n", FLT_MAX );
    printf("����ֵ: %d\n", FLT_DIG );
}

void testExtern() {/* �������� */
    int a, b;
    int c;
    float f;

    /* ��ʼ�� */
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = (float) (70.0 / 3.0);
    printf("value of f : %f \n", f);
}