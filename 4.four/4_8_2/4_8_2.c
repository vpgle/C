// 4.8.2	编写一个程序，提示用户输入名字，并执行以下操作：
#include <stdio.h>
int main(void)
{
	char name[40];
	printf("Please enter your name\n");
	scanf("%s" , name);
	// a.打印名字，包括双引号；
	printf("\"%s\"\n", name);
	// b.在宽度为20的字段右端打印名字，包括双引号；
	printf("\"%20s\"\n", name);
	// c.在宽度为20的字段左端打印名字，包括双引号；
	printf("\"%-20s\"\n", name);

	int charlong;
	int printflong;
	charlong = strlen(name);

/*	printf("%s 长度是 %d\n\n", name, charlong);
	printflong = printf("name\n");
	printf("printf打印长度是 %d\n",  printflong);
*/
	printf("%*s\n", charlong + 3, name);

	printf("");

	return 0;
}
