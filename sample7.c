/* sample7.c */
/* NORMAL: はじめに検索範囲を入力、検索範囲内の素数を出力 */
/* 2012.09.14, @FujishiroSeiran, 藤代晴嵐 */

#include <stdio.h>
#include <math.h>

char sosu(unsigned long n)
{
	unsigned long count, max = (unsigned long) sqrt(n);

	for (count = 2; count < max; count++)
		if (n % count == 0) break;

	return n % count != 0 || n == 2;
}

void main(void)
{
	unsigned long min, max, count, cnt = 0;

	/* 数値入力 */
	printf("検索範囲の最小数値を入力してください。\n> ");
	scanf("%d", &min);

	printf("検索範囲の最大数値を入力してください。\n> ");
	scanf("%d", &max);

	if (max < min) return;	/* 無効な入力 */

	if (min % 2 == 0) min++;

	while(min <= max)
	{
		if (sosu(min))
		{
			printf("%d\n", min);
			cnt++;
		}
		if (min == 1 && 2 < max) 
		{
			printf("2\n");
			cnt++;
		}
		min += 2;
	}
	printf("ALL: %d\n", cnt);
	return;
}