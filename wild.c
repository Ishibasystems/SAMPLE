/* wild.c */
/* �uN�l�̑g�����Ȃ����v�ƌ���ꂽ���A�������N�ȊO�̐l�͑g�����܂��B */
/* ���̎�N��2�ȏ�MAX�ȉ��ł��B�������N�̃N���X�̐l���͉��l�ł��傤��? */
/* 2012.03.21, @FujishiroSeiran, ���㐰�� */

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