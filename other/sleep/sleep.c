#include <stdio.h>
#include <unistd.h>
int main(void)
{
    unsigned int n;

    for (n = 0; n < 10; ++n)
    {
        printf("%d second\n", n);
        sleep(1000);
    }
/*           system("shutdown -f -s -t 20");
    */

    return 0;
}
