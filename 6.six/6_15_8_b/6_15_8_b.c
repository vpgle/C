// 6.15.8.b 
// Go west, young man!
#include <stdio.h>
int main(void)
{
    char ch;

    scanf("%c", &ch);
    while (ch != 'g')
    {
        printf("%c", ++ch);
        scanf("%c",  &ch);
    }
    // Hp!xftu-!zpvo

//    printf("\n44 is %c, 45 is %c, 46 is %c", 44,45,46);
    return 0;
}
