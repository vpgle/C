// 5.10.8
#include <stdio.h>
#define TEN 10          //      明示常量  （符号常量）
int main(void)
{
    int n = 0;

    while (n++ < TEN)           //      这行完成的是比较大小，然后加一
        printf("%5d", n);
    //  ****0****1****2****3****4****5****6****7****8****9);
    //  为了更明显的观察列宽，用星号代替空格
    return 0;
    printf("\n");
    return 0;
}
