    // 6.16.17
    // 这个版本是在存满一年获得利息后再取10万，作为第二年的本金
    #include <stdio.h>
    int main(void)
    {
        int year;
        double sum = 1000000 * (1 + 0.08);  // 第一年的本息和
        
        // 从第二年开始计算    
        for (year = 2;sum > 0; year++)
        {
            printf("第%d年的本息和 is %f\n", year - 1, sum);
            sum = (sum - 100000) * (1 + 0.08);
            printf("第%d年的本息和 is %f\n", year, sum);
        }
        printf("%d年后 Chuckie 会 取 完 账户 的 钱\n", year - 1);
        return 0;
    }
