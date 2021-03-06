// 6.18.13
#include <stdio.h>
long squ(int n);
char squint(int n); 
    // 函数声明中的返回类型，只要主函数不使用，
// 即使声明类型错误也不会影响                
int main(void)
{
    int a = 5;

    printf("请输入一个整数: ");

    while     (scanf("%d", &a) == 1)
        {
            squint(a);
            printf("squint is %c\n", squint(a));
            printf("按q离开程序\n");
            printf("请重新输入一个整数: ");
        }
}

long squ(int n)
{
    // 需要说明这个系统long类型和int类型都是32位
    // 所以两个INT类型数据乘积存放在long类型中是
    // 不能存放数据的，因此改成存放在是LONG LONG
    // 中，要强制转换成LONG LONG类型。

    printf("n is %zd bits\n", sizeof(n) * 8);
    long long fs;
    printf("fs is %zd bits\n", sizeof(fs) * 8);
    fs = ((long long)n) * ((long long)n);
    printf("fs is %lld\n", fs);

    return fs;
}

char squint(int n)
{
    printf("n is %zd bits\n", sizeof(n) * 8);
    long long fs;
    printf("fs is %zd bits\n", sizeof(fs) * 8);
    fs = ((long long)n) * ((long long)n);
    printf("fs is %lld\n", fs);
    return fs;
}
