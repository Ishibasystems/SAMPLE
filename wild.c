/* wild.c */
/* 「N人の組を作りなさい」と言われた時、たかし君以外の人は組を作れます。 */
/* この時Nは2以上MAX以下です。たかし君のクラスの人数は何人でしょうか? */
/* 2012.03.21, @FujishiroSeiran, 藤代晴嵐 */

#include <stdio.h>

#define MAX 100

void main(void)
{
	char s[MAX] = {0}, sp = 0, i, j;
	unsigned long N;

	s[sp++] = 2;

	for (i = 3; i <= MAX ; i++)
	{
		for (j = 0; j < sp; j++)
			if (i % s[j] == 0)
			{
				s[j] = i;
				break;
			}
		if (s[j] != i) s[sp++] = i;
	}

	for (sp = 0; sp < MAX && s[sp] != 0; printf("%d*", s[sp++]));

	printf("1+1\n");
	return;
}