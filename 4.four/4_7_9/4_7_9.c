// 4.7.9
#include <stdio.h>
int main(void)
{
	// a. 101
	int num ;
	scanf("101 is %d\n", &num);
	// b. 22.32 8.34E-09
	float flt ;
	double eee ;
	scanf("22.32 is %.2f, 8.34E-09 is %.2E\n", &flt, &eee);
	// c. linguini
	char name[10];
	scanf("linguini is %s\n", name);
	// d. catch 22
	char zifu[10];
	short int shuzi;
	scanf("catch is %s %hd\n", zifu, &shuzi);
	// c. catch 22 (但是跳过catch)
	char zifu1[10];
	int shu;
	scanf("%*s %d\n",  &shu);

	return 0;
}
