// 7.11.4
#include <stdio.h>
int main(void)
{
    printf("a. 5 > 2 is %d\n", 5 > 2);  // 1
    printf("b. 3 + 4 > 2 && 3 < 2 is %d\n", 3 + 4 > 2 && 3 < 2); // 0
    printf("c. x >= y || y > x is %d\n", x >= y || y > x); // 1
    printf("d. d = 5 + (6 > 2) is %d\n", d = 5 + (6 > 2)); // 6
    printf("e.'X' > 'T' ? 10 : 5 is %d\n", 'X' > 'T' ? 10 : 5); // 10
    printf("f. x > y ? y > x : x > y is %d\n", x > y ? y > x : x > y);
                // 0
    return 0;
}
