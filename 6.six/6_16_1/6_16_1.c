// 6.16.1
#include <stdio.h>
int main(void)
{
    char Alphabet[26];

    int index = 0;
    int a = 97;
    for (index = 0; index < 26; index++, a++)
    {
//      scanf("%c", &Alphabet[index]);
        Alphabet[index] = a;

        printf("Alphabet is %c\n", Alphabet[index]);
        
    }
    printf("\n");

    return 0;


}
