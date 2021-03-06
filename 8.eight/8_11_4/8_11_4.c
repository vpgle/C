// # 8.11.4.c
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int word = 0, ch_total = 0, nocharflag = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if ((isalpha(ch) == 4) || (isalpha(ch) == 8))
        {
            ++ch_total;
            nocharflag = 0;
        }

        else if ((isspace(ch) == 32) || (isspace(ch) == 64) || (ispunct(ch) == 128))
        {
            if (nocharflag == 1)
                nocharflag = 0;
            else
            {    nocharflag = 1;
                ++word;
            }
        }
    }
    printf("字符数%d\n", ch_total);
    printf("单词数%d\n", word);

    printf("平均每个单词有%.2f个字母\n", (float)(ch_total / word));
    return 0;

}
