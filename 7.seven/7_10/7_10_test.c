#include <stdio.h>
// 测试putchar(), getchar() 输出 输入的相关功能
int main(void)
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != '\t')
        putchar(ch);
    printf("\n");
    return 0;
}
