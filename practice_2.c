#include <stdio.h>

int main(void)
{
	int num;

	printf("�����`�̕ӂ̒�������͂��Ă��������B\n");
	scanf_s("%d", &num);

	printf("�����`�̖ʐς�%d�ł��B\n", toi2(num));

	return 0;
}

int toi2(int edge)
{
	return edge * edge;
}