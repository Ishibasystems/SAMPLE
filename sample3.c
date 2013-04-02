/* sample3.c */
/* NORMAL: はじめに1つの数値を入力、そのあとの連続する10個の数を足してその答えを出力 */
/* 2012.09.07, @FujishiroSeiran, 藤代晴嵐 */

#include <stdio.h>

long sowa(long n)
{
	return (n * n + n) / 2;
}

void main(void)
{
	long n;

	do {	/* 数値入力 */
		printf("数値を入力してください。\n> ");
		scanf("%d", &n);
	} while(n < 0);

	printf("%dのあとの連続する10個の数(%d～%d)を足します。\n", n, n + 1, n + 10);
	printf("ANS: %d\n", sowa(n + 10) - sowa(n));

	return;
}