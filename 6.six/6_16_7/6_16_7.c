// 6.16.7
#include <stdio.h>
int main(void)
{
    char word[100];
    int length;

    scanf("%s", word);
    printf("word is %d\n", strlen(word));
    

    for (length = strlen(word) - 1;length >= 0; length--)
    {
        printf("%c", word[length]);
    }
    printf("\n");
    return 0;
}
