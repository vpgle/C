//      5.10.6   
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
    int num = 10;

    printf("FORMAT,FORMAT");
    printf("\n");
    printf(FORMAT,FORMAT);
    //     printf("%s! C is cool!\n", "%s! C is cool!\n");
    /*      ("%s! C is cool!\n", FORMAT);
    打印出的内容是
            %s! C is cool!
            ! C is cool!
    */

    printf("%d\n",  ++num);
    //              11      num = 11;

    printf("%d\n",  num++);
    //              11      num = 12;
    printf("%d\n",  num--);
    //              12      num = 11;

    printf("%d\n",  num);
    //              11      num = 11;
    return 0;
}
