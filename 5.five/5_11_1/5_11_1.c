// 5.11.1
#include <stdio.h>
#define M_TO_H 60
int main(void)
{
     int timenum;
     int min;
     int hour;

    printf("请输入分钟:");
    scanf("%d", &timenum);
    while (timenum > 0)
    {
        min = timenum % M_TO_H;
        hour = timenum / M_TO_H;
        printf("%d 分钟 等于 %d小时%d分钟", timenum, hour, min);
        printf("\n请再次输入分钟：");
        scanf("%d", &timenum);
    }

    return 0;

}
