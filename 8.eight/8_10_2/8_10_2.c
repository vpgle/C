// # 8.10.2
#include <stdio.h>
int main(void)
{
    // a.putchar('H');
    printf("a.putchar('H'); 打印字符H\n");
    putchar('H');
    putchar('\n');
    // b.putchar('\007');
    printf("b.putchar('\\007'); 如果系统使用ASCII，则发出一声警报\n");
//    putchar('\007');
    putchar('\n');
    // c.putchar('\n');
    printf("c.putchar('\\n'); 把光标移至下一行的开始\n");
    putchar('\n');
    putchar('\n');
    // d.putchar('\b');
    printf("d.putchar('\\b'); 退后一格\n");
    putchar('A');
    putchar('\b');
    putchar('\n');

    return 0;

}

