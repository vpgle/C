/*一个参数打印行，一个参数打印列
 第一行循环一次，
 第二行循环二次，
 第三行循环三次，
 第四行循环四次，
 第五行循环五次
   i       j
   */
#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
           printf("$");
        }
        printf("\n");
    }
}
