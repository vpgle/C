// 5.11.5
#include <stdio.h>
int main(void)
{
    int total = 0;
    int days;
    int init = 1;

    printf("请输入天数：");
    scanf("%d", &days);
    while (init <= days)
    {
        total = init + total;
        init++;
    }
    printf("total is %d\n", total);

    return 0;

}
