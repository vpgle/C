// 4.7.5
#define BOOK "War and Peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;

	printf("This copy of \"War and Peace\" sells for $%.2f.\n", cost);
	//  打印"用\" 
	printf("That is %2.0f%% of list.\n", percent);
	//  打印% 用%%
	return 0;
}
