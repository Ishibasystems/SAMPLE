/* sample5.c */
/* NORMAL: �͂��߂�1�̐��l����́A�f�����ǂ������o�� */
/* 2012.09.13, @FujishiroSeiran, ���㐰�� */

#include <stdio.h>
#include <math.h>

void main(void)
{
	unsigned long n, count;

	/* ���l���� */
	printf("���l����͂��Ă��������B\n> ");
	scanf("%d", &n);

	/* ���Z */
	for (count = 2; count < sqrt(n);count++)
		if (n % count == 0) break;

	/* ���ʏo�� */
	printf("ANS: �f��%s�ł����B\n", n % count == 0 && n != 2 ? "�ł͂���܂���" : "");

	return;
}