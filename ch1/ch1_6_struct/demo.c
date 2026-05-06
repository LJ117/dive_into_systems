#include <stdio.h>
#include <string.h>
struct StudentT
{
    char name[100];
    int age;
    float gpa;
    unsigned int grad_yr;
};

int main()
{
    struct StudentT stu1;

    strcpy(stu1.name, "Seven");
    stu1.age = 18 + 12;
    stu1.gpa = 4.8;
    stu1.grad_yr = 2018;

    printf("The name is: %s, age: %d, gpa:%2.2f, grad year is:%d\n", stu1.name, stu1.age, stu1.gpa, stu1.grad_yr);

    // 注意: '%lu'格式占位符表示unsigned long值
    printf("number of bytes in student struct: %lu\n", sizeof(struct StudentT));

    return 0;
}
