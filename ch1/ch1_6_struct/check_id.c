#include <stdio.h>
#include <string.h>

/* 结构体类型定义: */
struct studentT
{
    char name[64];
    int age;
    float gpa;
    int grad_yr;
};

/* 函数原型（声明checkID函数的原型，以便main函数调用它，
 * 其完整定义列在structfunc.c文件中的main函数之后)
 */
int checkID(struct studentT s1, int min_age);

int main()
{
    int can_vote;
    struct studentT student;

    strcpy(student.name, "Ruth");
    student.age = 17;
    student.gpa = 3.5;
    student.grad_yr = 2021;
    printf("%p\n", student.name);
    can_vote = checkID(student, 18);
    printf("%p\n", student.name);
    if (can_vote)
    {
        printf("%s is %d years old and can vote.\n",
               student.name, student.age);
    }
    else
    {
        printf("%s is only %d years old and cannot vote.\n", student.name, student.age);
    }

    return 0;
}

/* 检查学生是否达到最小年龄
 *   s:学生
 *   min_age:最小年龄
 *   returns:如果学生达到最小年龄，则返回1，否则返回0
 */
int checkID(struct studentT s, int min_age)
{
    int ret = 1; // 初始化返回值为1 (true)
    printf("%p\n", s.name);
    if (s.age < min_age)
    {
        ret = 0; // 更新返回值为0 (false)

        // 尝试修改学生的年龄
        s.age = min_age + 1;
        strcpy(s.name, "James");
        printf("%p\n", s.name);
    }

    printf("%s is %d years old\n", s.name, s.age);
    printf("%p\n", s.name);
    return ret;
}
