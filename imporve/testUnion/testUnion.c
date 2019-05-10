#include <printf.h>
#include <float.h>
#include <stdlib.h>
#include <string.h>


union My_Data
{
    /* data */
    int i;
    float f;
    char str[20];
};

void testUnions(){
    union My_Data data;
    printf( "Memory size occupied by data : %lu\n", sizeof(data));
    
    data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);


}