// 一个小小测试
#include <stdio.h>
int main(void)
{

    int number;
    
    do
    {
        printf("请输入一个整数（1到100之间）: ");
        scanf("%d", &number);
        
    }    while (number != 20);
    printf("恭喜你答对了");

    return 0;
}
    
