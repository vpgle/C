// 5.11.2
#include <stdio.h>
#define INIT 5
int main(void)
{
    int x = INIT;

    while (x <= 15)
    {
        printf("%d ", x);
        x = x + 1;
    }

    return 0;
}
