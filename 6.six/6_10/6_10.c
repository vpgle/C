/*
    因此，这样做比将测试和更新组合放在一起（即使用count++ <= NUMBER)
    要好，但是计数器的初始化放在循环外，就有可能忘记初始化。实践告诉
我们可能会发生的事情终究会发生，所以我们来学习另一种控制语句，
可以避免这些问题。
*/
// sweetie1.c -- 一个计数循环
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;  // 初始化

    while (count <= NUMBER)     // 测试
    {
        printf("Be my Valentine!\n");
        count++;
    }

    return 0;
}
