    // 6.16.15
    #include <stdio.h>
    #include <string.h>
    int main(void)
    {
        char character[255];
        int i, length;

            scanf("%s", character);
            
        length = strlen(character); // 定义数组后，只需数组名即可知道长度

        for (i = length - 1;i >= 0; i--)
        {
            printf("%c", character[i]);
        }
        printf("\n");
        return 0;

    }
