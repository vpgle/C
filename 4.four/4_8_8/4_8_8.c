// 4.8.8
#include <stdio.h>
#define MEIJIALUNXINGSHIYINGLISHU 
int main(void)
{
	const float xishu = (1/3.785)*(100/1.609);
	float juli;
	float qiyouliang;

	printf("旅行里程：");
	scanf("%f", &juli);
	printf("汽油量：");
	scanf("%f", &qiyouliang);
	printf("每加仑汽油行驶英里数：%.1f\n", juli / qiyouliang);

	printf("美国显示升/100公里：%.1f\n", (qiyouliang / juli) * xishu);

	return 0;
}
