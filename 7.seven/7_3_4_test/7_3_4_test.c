//  这里用到了ctype.h中的函数
//  7.3.4 test
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    
    if (islower(getchar()))
        printf("That's a lowercase character.\n");

    return 0;
}
