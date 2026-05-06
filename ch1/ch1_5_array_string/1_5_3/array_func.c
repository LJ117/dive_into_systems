#include <stdio.h>
int some[5], more[10], i;
void print_array(int arr[], int idx);

int main()
{
    for (i = 0; i < 5; i++)
    { // 初始化每个数组的前5个元素
        some[i] = i * i;
        more[i] = some[i];
    }

    for (i = 5; i < 10; i++)
    { // 初始化more数组的后5个元素
        more[i] = more[i - 1] + more[i - 2];
    }
    print_array(some, 5);  // 输出some数组的所有5个元素
    print_array(more, 10); // 输出more数组的所有10个元素
    print_array(more, 8);  // 仅输出more数组的前8个元素
    return 0;
}

void print_array(int arr[], int idx)
{
    printf("Start print the arr, total number is: %d\n", idx);
    for (int i = 0; i < idx; i++)
    {
        printf("The %d num is: %d\n", i + 1, arr[i]);
    }
    printf("End print the arr\n");
}
