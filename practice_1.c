#include <stdio.h>
#define NUM 5

int main(void)
{
	int test[NUM];
	int top;
	int i;

	printf("テストの点数を入力してください。\n");
	for (i = 0; i < NUM; i++)
	{
		scanf_s("%d", &test[i]);
		if (i == 0)
			top = test[i];
		else if (test[i] > top)
			top = test[i];
	}
	for (i = 0; i< NUM; i++)
	{
		printf("%d番目の人は%d点です。\n", i + 1, test[i]);
	}

	printf("最高点は%d点です。\n", top);

	return 0;
}