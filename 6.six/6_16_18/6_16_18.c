    // 6.16.18
    #include <stdio.h>
    int main(void)
    {
        int sum = 5, week = 1;

        for (week = 1, sum = 5;sum <= 150;week++)
        {
            sum = (sum - week) * 2;
            printf("第%d周是 %d人\n", week, sum);
        }
    }
