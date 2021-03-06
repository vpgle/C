// # 8.10.8
#include <stdio.h>
int main(void)
{
    printf("使用getchar函数之前记得处理换行符");
    putchar('\n');
    printf("在使用缓冲输入的系统中，");
    printf("把数值和字符混合输入会遇到");
    printf("什么潜在问题？");
    putchar('\n');

    printf("假设数字用scanf函数处理");
    printf("字符用getchar函数处理");
    printf("getchar读取空格，换行符，制表符");
    printf("scanf会跳过空格，换行符，制表符，把它放在输入中");
    printf("getchar会读取多余的字符。");
    
    printf("数值输入会跳过空格和换行符，但是字符输入不会。");
    int score;
    char grade;

    printf("Enter the score.\n");
    scanf("%s", &score);
    printf("Enter the letter grade.\n");
    grade = getchar();
    
    printf("如果输入分数98，然后按下Enter键把分数发送给程序，");
    printf("其实还发送了一个换行符。\n这个换行符会留在输入的序列");
    printf("中，成为下一个读取的值(grade)。");
    printf("如果在字符输入之前输入了数字，就应该在处理字符输入");
    printf("之前添加删除换行符的代码");

    return 0;
}
