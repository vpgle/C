// 8.12.5
#include <stdio.h>
int main(void)
{
    int rangebig, rangesmall, input;
    int defaultnum = 67;

    while(scanf("%d", &input))
    {
        if (input < defaultnum)
        {
            rangesmall = input;
            printf("input小于默认值\n");
        }
        else if (input > defaultnum)
        {
            rangebig = input;
            printf("input大于默认值\n");
        }
        else if (input == defaultnum)
        {
            printf("defaultnum = %d\n", input);       
            break;
        }
        
    }

    return 0;
}
