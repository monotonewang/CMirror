
#include <printf.h>
#include <string.h>

void testChars()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o'};

    char str3[12];
    printf("Greeting message: %s\n", greeting);

    printf("length=%d\n",strlen(greeting));

    strcpy(str3,greeting);

    printf("str3=%s\n",str3);
    strcat(str3," C");
    printf("str3=%s\n",str3);

}