/* sample5.c */
/* NORMAL: はじめに1つの数値を入力、素数かどうかを出力 */
/* 2012.09.13, @FujishiroSeiran, 藤代晴嵐 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	unsigned long n, count;

	/* 数値入力 */
	printf("数値を入力してください。\n> ");
	scanf("%d", &n);

	/* 演算 */
	for (count = 2; count < sqrt(n);count++)
		if (n % count == 0) break;

	/* 結果出力 */
	printf("ANS: 素数%sでした。\n", n % count == 0 && n != 2 ? "ではありません" : "");

	return;
}