// 7.11.2
#include <stdio.h>
int main(void)
{

    printf("a.number等于或大于90， 但是小于100\n");
    printf("((number >= 90) && (number < 100))\n\n");

    printf("b.ch不是字符q或k\n");
    printf(" ((ch != 'q') && (ch != 'k')) \n\n");      /*注意分析题  */

    printf("c.number在1~9之间（包括1和9），但不是5\n");
    printf(" ((number >= 1) && (number <= 9)) && (number != 5) \n\n");

    printf("d.number不在1~9之间\n");
    printf(" ((number < 1) || (number > 9)) \n\n");

    return 0;
}
