#include <stdio.h>
#define NUM 5

int main(void)
{
	int test[NUM];
	int top;
	int i;

	printf("�e�X�g�̓_������͂��Ă��������B\n");
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
		printf("%d�Ԗڂ̐l��%d�_�ł��B\n", i + 1, test[i]);
	}

	printf("�ō��_��%d�_�ł��B\n", top);

	return 0;
}