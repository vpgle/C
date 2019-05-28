// talkback.c -- 演示与用户交互
#include <stdio.h>
#include <string.h>			// 提供strlen() 的函数原型
#define DENSITY 62.4 		// 人体密度（单位：磅/立方英尺）
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];  // name是一个可容容纳40个字符的数组
	int printfleng;

	printf("Hi! What's your first name?\n");
	scanf("%s", name);		// 取字符串时变量时不需要  & 符号
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);		// 字符串长度不包括\0
	printfleng = printf("vicence");
	printf("\nprintfleng is %d\n", printfleng);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n",
		name, volume);
	printf("Also, your first name has %d letters, \n",
		letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}

