/* sample8.c */
/* NORMAL: 1-4�����I�� */
/* 2012.11.28, @FujishiroSeiran, ���㐰�� */

#include <stdio.h>

/* �֐��錾 */
char sentou_command(void);	/* ���₷��p�֐� */

void main(void)
{
	char n;

	n = sentou_command();

	printf("%d���I������܂����B\n", n);

	return;
}

char sentou_command(void)
{
	char n;

	do {	/* ���̓��[�v */
		printf("�Ȃɂ�����?\n");

		printf("1. ��������\n");
		printf("2. �A�C�e��\n");
		printf("3. �`�F���W\n");
		printf("4. �ɂ���\n");

		printf("> ");

		scanf("%c", &n);	/* ���͎󂯕t���A1�����ǎ�� */

		printf("\n");

	} while(n < '1' || n > '4');	/* 5�Ƃ����{��Ƃ��A�I�����ȊO�����͂Ȃ�ēx����֖߂�(���[�v) */

	return n - '0';
}