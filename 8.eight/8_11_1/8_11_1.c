// # 8.11.1
#include <stdio.h>
int main(void)
{
    int num = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {    putchar(ch);
         ++num;
    }
    printf("文件共有%d字符\n", num);
}
