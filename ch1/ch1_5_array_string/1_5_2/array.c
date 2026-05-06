#include <stdio.h>

int i, num;
int arr[10];

int main()
{
    num = 6;
    for (i = 0; i < 5; i++)
    {
        /* code */
        arr[i] = i * 2;
    }
    arr[50] = 666;
    printf("idx.50 is:%.5d", arr[50]);
    return 0;
}
