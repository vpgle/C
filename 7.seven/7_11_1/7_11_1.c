// 7.11.1 
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool a = 100 > 3 && 'a' > 'c';
    bool b = 100 > 3 || 'a' > 'c';
    bool c = !(100 > 3);

    printf("a. 100 > 3 && 'a' > 'c' is %c\n", a);
    /*   a. false  */
    printf("b. 100 > 3 || 'a' > 'c' is %c\n", b);
    /*   b. true   */
    printf("c. !(100 > 3) is %c\n", c);
    //   c. false
    return 0;
}
