#include <stdio.h>
int main(void)
{
	unsigned short int somek;   //  水的夸脱数
	double   Water_molecule_quality = 3.0e-23;			// 类型定义不正确
	unsigned short int one_quart_water_quality = 950;
	double count;										// 类型定义不正确

	printf("请输入水的夸脱数： ");
	scanf("%d", &somek);
	printf("\n");
	printf("Water_molecule_quality = %e\n", Water_molecule_quality);

	count = (somek * one_quart_water_quality) /Water_molecule_quality;
	printf("somek = %ld\n", somek);

	printf("count: %e\n", count);
	printf("\n%d夸脱水的水分子数量是%lld\n", somek,  count);

	return 0;
}
