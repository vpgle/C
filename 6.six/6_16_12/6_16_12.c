    // 6.16.12
    #include <stdio.h>
    #include <math.h>
    int main(void)
    {
        int loop;
        double sum = 0;
        double signedsum = 0;
        int maxloop;

        printf("请输入次数（即项数）： ");
        while (scanf("%d", &maxloop) == 1 && maxloop > 0)
        {
            for (loop = 1;loop <= maxloop;loop++)
            {
                sum = sum + 1.0/(loop * 1.0);
                signedsum = signedsum + 1.0/(loop * 1.0) * pow(-1, (loop - 1));
            }
            printf("sum is %.20f\n", sum);
            printf("signedsum is %.20f\n", signedsum);
        }
        return 0;
    }
