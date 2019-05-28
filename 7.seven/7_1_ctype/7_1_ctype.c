/* 表 7.1 ctype.h头文件中的字符测试函数
   */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
//    char ch;
//    int  num;

    printf("isalnum(-2) 字母数字（字母或数字）is %d\n", isalnum('0'));
    printf("isdigit(-2) 字母数字（字母或数字）is %d\n", isdigit('1'));
    printf("isalnum('z') 字母数字（字母或数字）is %d\n", isalnum('z'));
    printf("isalpha('z') 字母数字（字母或数字）is %d\n", isalpha('z'));
    printf("isalpha('Z') 字母数字（字母或数字）is %d\n", isalpha('Z'));
    printf("isblank(' ') 字母数字（字母或数字）is %d\n", isblank(' '));// 空格
    printf("isblank('\\t') 字母数字（字母或数字）is %d\n", isblank('\t'));// 制表符
    printf("isblank('\\n') 字母数字（字母或数字）is %d\n", isblank(getchar()));// 换行
    printf("tolower('') 字母数字（字母或数字）is %c\n", tolower(getchar()));// 换行
    printf("toupper('') 字母数字（字母或数字）is %c\n", toupper(getchar()));// 换行
    
    return 0;


}
