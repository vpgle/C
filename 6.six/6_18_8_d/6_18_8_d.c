// 6.18.8.d  
// Go west, young man!
#include <stdio.h>
int main(void)
{
    char ch;

    scanf("%c", &ch);
    printf("%c\n", ch);
    for (ch = '$'; ch != 'g'; scanf("%c", &ch))
        printf("%c\n", ch);
    // $o west, youn
    return 0;
 }

/*
    这个程序在WINDOW10上用PELLES C 9.00.9版本执行会有bug
    按回车也会有输出  */
