// 5.11.3
#include <stdio.h>
#define WEEKINDAY 7     /*  明示常量 */
int main(void)
{
    int days;
    int week;
    int left;

    printf("请输入天数：");
    scanf("%d", &days);
    while (days >0)
    {
        week  =  days / WEEKINDAY;
        left  =  days % WEEKINDAY;
        printf("%d days are %d weeks, %d days.\n", days, week, left);
        printf("PLEASE INPUT THE DAYS : ");
        scanf("%d", &days);
    }

    return 0;
}
