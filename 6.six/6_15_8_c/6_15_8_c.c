// 6.15.8.c  
// Go west, young man!
#include <stdio.h>
int main(void)
{
    char ch;

    do {
       scanf("%c", &ch);
       printf("%c", ch);
    }    while (ch != 'g');
    //  Go west, young
    return 0;
}
