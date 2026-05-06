#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    char str2[10];
    int len;
    str1[0] = 'h';
    str1[1] = 'i';
    str1[2] = '\0';

    len = strlen(str1);
    printf("The str1 is: %s, the len of str1 is: %d\n", str1, len);

    strcpy(str2, str1);
    printf("The str2 is: %s\n", str2);

    strcpy(str2, "hijack");
    len = strlen(str2);
    printf("The str2 is: %s, has %d chars\n", str2, len);
}
