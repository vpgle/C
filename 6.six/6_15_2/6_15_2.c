// *36*18**9**4**2**1
/* 6.15.2 假设value是int类型，下面
循环的输出是什么？ */
#include <stdio.h>
int main(void)
{
    double value;
    for (value = 36; value > 0; value /= 2)
        printf("%.29lf\n", value);

    return 0;
}
