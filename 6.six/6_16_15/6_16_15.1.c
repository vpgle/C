    // 6.16.15
    #include <stdio.h>
    #include <string.h>
    int main(void)
    {
        char character[255];
        int i, length;

        for (i = 0;i < 255;i++)
        {
            scanf("%c", &character[i]);
        }
        for (i = 0;i < 255;i++)
        {
            printf("%c", character[i]);
        }

        printf("\n");
        length = strlen(character); // 定义数组后，只需数组名即可知道长度
        printf("length is %d\n", length);

        for (i = 254;i >= 0; i--)
        {
            printf("%c", character[i]);
        }
        printf("\n");
        return 0;

    }
