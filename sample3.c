/* sample3.c */
/* NORMAL: �͂��߂�1�̐��l����́A���̂��Ƃ̘A������10�̐��𑫂��Ă��̓������o�� */
/* 2012.09.07, @FujishiroSeiran, ���㐰�� */

#include <stdio.h>

long sowa(long n)
{
	return (n * n + n) / 2;
}

void main(void)
{
	long n;

	do {	/* ���l���� */
		printf("���l����͂��Ă��������B\n> ");
		scanf("%d", &n);
	} while(n < 0);

	printf("%d�̂��Ƃ̘A������10�̐�(%d�`%d)�𑫂��܂��B\n", n, n + 1, n + 10);
	printf("ANS: %d\n", sowa(n + 10) - sowa(n));

	return;
}