// 4.8.6
#include <stdio.h>
int main(void)
{
	char firstname[40];
	char lastname[40];
	unsigned int widthfirstname;
	unsigned int widthlastname;

	printf("请输入名：");
	scanf("%s", firstname);
	printf("请输入姓：");
	scanf("%s", lastname);
	widthfirstname = strlen(firstname);
	printf("%d\n", widthfirstname);
    widthlastname = strlen(lastname);
	printf("%s %s\n", firstname, lastname);
	printf("%*d %*d\n", widthfirstname, widthfirstname, widthlastname, widthlastname);  
	//重点在于你要匹配格式和变量类型一致

	printf("%s %s\n", firstname, lastname);
	printf("%-*d %-*d\n", widthfirstname, widthfirstname, widthlastname, widthlastname);


	return 0;
}

