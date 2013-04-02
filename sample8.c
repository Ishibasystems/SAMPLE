/* sample8.c */
/* NORMAL: 1-4より一つを選択 */
/* 2012.11.28, @FujishiroSeiran, 藤代晴嵐 */

#include <stdio.h>

/* 関数宣言 */
char sentou_command(void);	/* 質問する用関数 */

void main(void)
{
	char n;

	n = sentou_command();

	printf("%dが選択されました。\n", n);

	return;
}

char sentou_command(void)
{
	char n;

	do {	/* 入力ループ */
		printf("なにをする?\n");

		printf("1. たたかう\n");
		printf("2. アイテム\n");
		printf("3. チェンジ\n");
		printf("4. にげる\n");

		printf("> ");

		scanf("%c", &n);	/* 入力受け付け、1文字読取る */

		printf("\n");

	} while(n < '1' || n > '4');	/* 5とか日本語とか、選択肢以外が入力なら再度質問へ戻る(ループ) */

	return n - '0';
}