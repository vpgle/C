// 6.15.8 a.
// Go west, young man!
#include <stdio.h>
int main(void)
{
    char ch;
    scanf("%c",  &ch);
    while (ch != 'g')
    {
        printf("%c", ch);
        scanf("%c", &ch);
    }
    // Go west, youn
    return 0;
}
