// 6.16.5
#include <stdio.h>
int main(void)
{
    char zimu;
    int line;
    int interloop;
    int asc;
    int desc;

    printf("请输入一个大写字母：");
    scanf("%c", &zimu);
    for (line = 1; line <= 5; line++)
    {
         for (interloop = line; interloop <= ((int)zimu - 65);interloop++)
         {
             printf(" ");
         }
         for (asc = 65; asc <= 64 + line; asc ++)   // 注意后缀语法
         {
            printf("%c", asc);
         }
          asc = 65;
         for (desc = 64 + line; desc > 65; desc--)
         {
            printf("%c", desc - 1);     // 第一次写时不要使用前缀后缀，用最简单直观的
                                        // 语句来写，但优化时在简写。
         }
         printf("\n");

    }
    return 0;
}
