// 4.7.4
#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age;
	char name[200];
	printf("Please enter your first name.");
	scanf("%s", name);
	printf("All right, %s, what's your age?\n", name);
	scanf("%d", &age);		// 年龄应该是整数。%hu
//	xp = age + X;
	printf("That's a %s! You must be at least %d.\n",
		B, age + X);
	return 0;  //return
}
