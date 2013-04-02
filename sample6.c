/* sample6.c */
/* NORMAL: はじめに1つの数値を入力、素数かどうかを出力 */
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
	unsigned long min, max, count;

	/* 数値入力 */
	printf("検索範囲の最小数値を入力してください。\n> ");
	scanf("%d", &min);

	printf("検索範囲の最大数値を入力してください。\n> ");
	scanf("%d", &max);

	if (max < min) return;	/* 無効な入力 */

	if (min % 2 == 0) min++;

	while(min < max)
	{
		if (sosu(min)) printf("%d\n", min);
		min += 2;
	}
	return;
}