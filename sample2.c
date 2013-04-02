/* sample2.c */
/* NORMAL: はじめに1つの数値を入力、そのあとの連続する10個の数を足してその答えを出力 */
/* 2012.09.07, 10RU004, 石橋祥太 */

#include <stdio.h>

void main(void)
{
	long n;

	do {	/* 数値入力 */
		printf("数値を入力してください。\n> ");
		scanf("%d", &n);
	} while(n < 0);

	printf("%dのあとの連続する10個の数(%d～%d)を足します。\n", n, n + 1, n + 10);
	printf("ANS: %d\n", n * 10 + 55);

	return;
}