/* sample7.c */
/* NORMAL: �͂��߂Ɍ����͈͂���́A�����͈͓��̑f�����o�� */
/* 2012.09.14, @FujishiroSeiran, ���㐰�� */

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
	unsigned long min, max, count, cnt = 0;

	/* ���l���� */
	printf("�����͈͂̍ŏ����l����͂��Ă��������B\n> ");
	scanf("%d", &min);

	printf("�����͈͂̍ő吔�l����͂��Ă��������B\n> ");
	scanf("%d", &max);

	if (max < min) return;	/* �����ȓ��� */

	if (min % 2 == 0) min++;

	while(min <= max)
	{
		if (sosu(min))
		{
			printf("%d\n", min);
			cnt++;
		}
		if (min == 1 && 2 < max) 
		{
			printf("2\n");
			cnt++;
		}
		min += 2;
	}
	printf("ALL: %d\n", cnt);
	return;
}