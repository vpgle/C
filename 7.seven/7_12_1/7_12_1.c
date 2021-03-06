// # 7.12.1
#include <stdio.h>
int main(void)
{
    char ch;
    int space_count = 0;
    int linebreak_count = 0;
    int other_count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space_count++;
        else if (ch == '\n')
            linebreak_count++;
        else
            other_count++;
    }
    printf("space is %d, line break is %d, other char is %d\n",
                    space_count, linebreak_count, other_count);

    printf("Done!\n");
    return 0;
}
