

#include "tArray.h"

void arrayPrint() {
    int array[] = { 10,20 };
    std::cout << "array(0) := " << array[1] << endl;
    cout << "array(0) := " << (long)&array[1] << endl;
    int array2[5] = { 30,20 };
    for (int i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        cout << "array2(" << i << ") := " << array2[i] << endl;
    }
    int* p = array2;
    for (int i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        cout << "p-->array2(" << i << ") := " << *p << endl;
        p++;
    }
}