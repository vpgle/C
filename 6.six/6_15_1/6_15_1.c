// 6.15.1  后5行中使用的是前一行生成的quack的值。
#include <stdio.h>
int main(void)
{
    int quack = 2;
    quack += 5;     // quack == 7;
    printf("quack is %d\n", quack);
    quack *= 10;   //  quack == 70;
    printf("quack is %d\n", quack);
    quack -= 6;     //  quack == 64;
    printf("quack is %d\n", quack);
    quack /= 8;     //  quack == 8;
    printf("quack is %d\n", quack);
    quack %= 3;     //  quack == 2;
    printf("quack is %d\n", quack);

    return 0;
}
