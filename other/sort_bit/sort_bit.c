/*  写出 unsigned int, signed int, 
*        unsigned short, signed short,
*       unsigned long, signed long,
*       unsigned long long, signed long long
*       unsigned char, signed char
*   最大值最小值
*/
#include <stdio.h>
#include <limits.h>
int main(void)
{
    printf("char bit is %llu %zd\n", sizeof(char), sizeof(char));
    // unsigned char
    printf("unsigned char max is %d, %#o, %#x, %#X\n", UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX);
    printf("unsigend char min is %d, %#o, %#x, %#X\n", _CHAR_UNSIGNED, CHAR_MIN, CHAR_MIN, CHAR_MIN, CHAR_MIN);

    // signed char
    printf("signed char max is %d\n", SCHAR_MAX);
    printf("signed char min is %d\n", SCHAR_MIN);

    return 0;
}
