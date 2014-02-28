/* hinagesi.c */
/* NORMAL: https://twitter.com/hinagesi_708/status/439409794701467648/photo/1 */
/* 2014.02.28, 10RU004, 石橋祥太 */
#include <stdio.h>

/* 問題構造体(mondai型)の定義 */
typedef struct mon_tag
{
	char n;			/* 質問/終端判定フラグ (質問→0、終端→終端楽器の番号) */
	struct mon_tag *yes;	/* 質問→YES選択後の次の問題へのポインタ */
	struct mon_tag *no;		/* 質問→NO選択後の次の問題へのポインタ */
	char s[55];		/* 質問→問題文、終端→終端楽器の名前 */
} mondai;


void main()
{
	/* 終端(楽器)のデータ登録 */
	mondai gakki01 = { 1, NULL     , NULL     , "ﾌﾙｰﾄ"};
	mondai gakki02 = { 2, NULL     , NULL     , "ｵｰﾎﾞｴ"};
	mondai gakki03 = { 3, NULL     , NULL     , "ｸﾗﾘﾈｯﾄ"};
	mondai gakki04 = { 4, NULL     , NULL     , "ｻｸｿﾌｫﾝ"};
	mondai gakki05 = { 5, NULL     , NULL     , "ﾌｧｺﾞｯﾄ"};
	mondai gakki06 = { 6, NULL     , NULL     , "ﾎﾙﾝ"};
	mondai gakki07 = { 7, NULL     , NULL     , "ﾄﾗﾝﾍﾟｯﾄ"};
	mondai gakki08 = { 8, NULL     , NULL     , "ﾄﾛﾝﾎﾞｰﾝ"};
	mondai gakki09 = { 9, NULL     , NULL     , "ﾁｭｰﾊﾞ･ｺﾝﾄﾗﾊﾞｽ"};
	mondai gakki10 = {10, NULL     , NULL     , "ﾕｰﾌｫﾆｱﾑ"};
	mondai gakki11 = {11, NULL     , NULL     , "ﾊﾟｰｶｯｼｮﾝ"};
	mondai gakki12 = {12, NULL     , NULL     , "ｼｷｼｬ"};

	/* 質問(問題文)のデータ登録 */
	mondai mondai01 = {0, &gakki05 , &gakki03 , "ｺｳﾌｸﾓ ﾌｺｳﾓ ﾋﾄﾘﾃﾞ ｶﾐｼﾒﾃ ｱｼﾞﾜｳ ｺﾄﾆ ｼﾃｲﾙ"};
	mondai mondai02 = {0, &gakki10 , &gakki09 , "ｿﾌﾄﾎﾞｰﾙﾔ ﾅﾝｼｷﾔｷｭｳﾆ ｲｯｼｮｳｦ ｶｹﾙﾋﾄｶﾞ ｲﾃﾓｲｲ ﾄ ｵﾓｳ"};
	mondai mondai03 = {0, &gakki12 , &gakki11 , "ｿﾚｦ ｱｲｿｳﾖｸ ﾋｷｳｹﾃ ｼﾞﾂﾊ ﾎｶﾉｺﾄﾞﾓﾆ ﾔﾗｾﾃｼﾏｳﾖｳﾅ ｼﾞﾌﾞﾝﾀﾞｯﾀ"};
	mondai mondai04 = {0, &mondai01, &gakki04 , "ｴﾝﾋﾟﾂﾆ ﾌｼｷﾞﾄ ｱｲﾁｬｸｶﾞ ｱﾙ"};
	mondai mondai05 = {0, &gakki06 , &mondai01, "ｻｶﾞｼﾓﾉｦ ﾐﾂｹﾙﾉｶﾞ ﾊﾔｲ"};
	mondai mondai06 = {0, &gakki08 , &mondai02, "ｽｷｰ ｶ ｽｹｰﾄ ｶﾞ ﾃﾞｷﾙ"};
	mondai mondai07 = {0, &gakki08 , &mondai02, "ﾊﾟﾁﾝｺ ﾖﾘ ﾏｰｼﾞｬﾝ ﾉ ﾎｳｶﾞ ﾀﾉｼｿｳﾀﾞ ﾄ ｵﾓｳ"};
	mondai mondai08 = {0, &gakki02 , &mondai04, "ｻｻｲﾅｺﾄﾃﾞ ﾖｸ ｲﾗｲﾗｽﾙ"};
	mondai mondai09 = {0, &gakki03 , &mondai08, "ﾋﾞｰﾌﾝ ﾔ ﾔｷｿﾊﾞ ﾖﾘﾓ ﾆﾎﾝｿﾊﾞ ﾔ ｿｳﾒﾝ ﾉ ﾎｳｶﾞ ｽﾞｯﾄｽｷ"};
	mondai mondai10 = {0, &mondai07, &mondai05, "ｼﾝﾊﾂﾊﾞｲ ﾉ ﾋﾞｰﾙ ﾊ ｲﾁﾄﾞ ﾀﾒｼﾃﾐﾖｳ ﾄ ｵﾓｳ"};
	mondai mondai11 = {0, &gakki01 , &mondai08, "ﾏﾁｱﾜｾｼﾞｶﾝ ﾆﾊ ｶﾅﾗｽﾞ 10ﾌﾟﾝﾏｴ ﾆ ｲｸ"};
	mondai mondai12 = {0, &mondai10, &mondai09, "ﾙｽﾊﾞﾝﾃﾞﾝﾊ ﾆ ﾒｯｾｰｼﾞｦ ｲﾚﾙﾉｶﾞ ﾆｶﾞﾃ"};
	mondai mondai13 = {0, &mondai10, &mondai06, "ﾃﾞｼﾞﾀﾙﾄｹｲ ﾊ ｷﾗｲ"};
	mondai mondai14 = {0, &mondai12, &mondai11, "ｱｲｽｸﾘｰﾑ ﾖﾘ ｱｲｽｷｬﾝﾃﾞｨｰ ﾉ ﾎｳｶﾞ ｽｷ"};
	mondai mondai15 = {0, &mondai13, &mondai10, "ﾖｸ ﾐﾁ ﾆ ﾏﾖｳ"};
	mondai mondai16 = {0, &mondai15, &mondai12, "ｶﾞｿﾘﾝｽﾀﾝﾄﾞ ﾃﾞ ｱﾙﾊﾞｲﾄｦ ｼﾃﾐﾀｲ ﾄ ｵﾓｯﾀｺﾄｶﾞ ｱﾙ"};
	mondai mondai17 = {0, &gakki07 , &mondai16, "ﾕｳｼﾞｮｳ ﾆ ｱﾂｲ ﾎｳﾀﾞﾄ ｵﾓｳ"};
	mondai mondai18 = {0, &gakki11 , &mondai17, "ﾏﾗｿﾝ ｶﾞ ﾀﾞｲｷﾗｲ"};
	mondai mondai19 = {0, &mondai14, &mondai16, "ﾄﾞﾗﾏ ﾔ ｴｲｶﾞ ﾊ ｼｭﾔｸ ﾆ ｶﾝｼﾞｮｳｲﾆｭｳ ｼﾃ ﾐﾙｺﾄｶﾞ ｵｵｲ"};
	mondai mondai20 = {0, &mondai18, &mondai17, "ｼﾞｪｯﾄｺｰｽﾀｰｶﾞ ﾀﾞｲｽｷ"};
	mondai mondai21 = {0, &mondai20, &mondai19, "TVﾅﾄﾞﾃﾞ ｼｮｳｶｲｼﾃｲﾙ ｴｷﾍﾞﾝﾅﾄﾞｦ ﾀﾍﾞﾃﾐﾀｲ"};
	mondai mondai22 = {0, &mondai03, &mondai21, "ｺﾄﾞﾓﾉｺﾛ ｾﾝｾｲﾆ ｲﾔﾅﾖｳｼﾞｦ ｲｲﾂｹﾗﾚﾀ"};

	/* 開始地点での質問(問題文)のポインタ */
	mondai *now = &mondai22;

	/* キーボード入力用変数 */
	char in;

	/* 質問開始 */
	while(now->n == 0)
	{
		printf("ｼﾂﾓﾝ: %s\n", now->s);

		/* 入力ループ(yとn以外は入力をやり直しさせる) */
		do {
			printf("(y/n) ");
			in = getchar();
			while(getchar() != '\n');
		} while(in != 'y' && in != 'Y' && in != 'n' && in != 'N');

		/* 次の質問(終端)に現在のポインタを移動する */
		if (in == 'y' || in == 'Y') now = now->yes;
		else                        now = now->no;

		printf("\n");
	}

	/* 質問終了(番号と楽器を表示) */
	printf("ｹｯｶ: %d %s\n", now->n, now->s);

	/* ファイル操作処理がここに入るらしい。 */
	return;
}
