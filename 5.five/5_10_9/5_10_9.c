#include <stdio.h>
#define COUNTER 103             //   明示常量
int main(void)
{
    char a = 96;

    while (a++ < COUNTER)       //   这步完成了，先比较大小，然后再加一
        printf("%c\n", a);
    printf("\n");

    return 0;
}
