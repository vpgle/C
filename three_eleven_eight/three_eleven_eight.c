#include <stdio.h>
int main(void)
{
	float beishu;

	printf("请输入杯数：");
	scanf("%f", &beishu);

	printf("等于%f品脱\n", beishu / 2);

	printf("等于%f盎司\n", beishu * 8);
	printf("等于%f大汤勺\n", beishu * 8 * 2);
	printf("等于%f茶勺\n", beishu * 8 * 2 * 3);

	return 0;
}
