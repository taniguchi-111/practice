#include <stdio.h>

int main(void)
{
	int num;

	printf("正方形の辺の長さを入力してください。\n");
	scanf_s("%d", &num);

	printf("正方形の面積は%dです。\n", toi2(num));

	return 0;
}

int toi2(int edge)
{
	return edge * edge;
}