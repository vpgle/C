// 6.16.3
/* 第一行打印一个
   第二行打印二个
   第三行打印三个
   第四行打印四个
   第五行打印五个   */
#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 69; i >= 64; i--)       // 逻辑错误
    {
        for (j = 70; j > i; j--)
        {
            printf("%c", j);
        }
  
      printf("\n");
    }
  
    return 0;
}
