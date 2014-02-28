/* hinagesi.c */
/* NORMAL: https://twitter.com/hinagesi_708/status/439409794701467648/photo/1 */
/* 2014.02.28, 10RU004, �΋��ˑ� */
#include <stdio.h>

/* ���\����(mondai�^)�̒�` */
typedef struct mon_tag
{
	char n;			/* ����/�I�[����t���O (���⁨0�A�I�[���I�[�y��̔ԍ�) */
	struct mon_tag *yes;	/* ���⁨YES�I����̎��̖��ւ̃|�C���^ */
	struct mon_tag *no;		/* ���⁨NO�I����̎��̖��ւ̃|�C���^ */
	char s[55];		/* ���⁨��蕶�A�I�[���I�[�y��̖��O */
} mondai;


void main()
{
	/* �I�[(�y��)�̃f�[�^�o�^ */
	mondai gakki01 = { 1, NULL     , NULL     , "�ٰ�"};
	mondai gakki02 = { 2, NULL     , NULL     , "���޴"};
	mondai gakki03 = { 3, NULL     , NULL     , "���ȯ�"};
	mondai gakki04 = { 4, NULL     , NULL     , "���̫�"};
	mondai gakki05 = { 5, NULL     , NULL     , "̧�ޯ�"};
	mondai gakki06 = { 6, NULL     , NULL     , "���"};
	mondai gakki07 = { 7, NULL     , NULL     , "����߯�"};
	mondai gakki08 = { 8, NULL     , NULL     , "����ް�"};
	mondai gakki09 = { 9, NULL     , NULL     , "����ޥ�����޽"};
	mondai gakki10 = {10, NULL     , NULL     , "հ̫Ʊ�"};
	mondai gakki11 = {11, NULL     , NULL     , "�߰�����"};
	mondai gakki12 = {12, NULL     , NULL     , "����"};

	/* ����(��蕶)�̃f�[�^�o�^ */
	mondai mondai01 = {0, &gakki05 , &gakki03 , "��̸� ̺�� ����� �м�� ���ܳ ��� �ò�"};
	mondai mondai02 = {0, &gakki10 , &gakki09 , "����ް�� �ݼ�Է��� ������ ����Ķ� ��Ӳ� � �ӳ"};
	mondai mondai03 = {0, &gakki12 , &gakki11 , "�ڦ ����ָ ˷��� ���� ζɺ���� �׾üϳֳ� ������ޯ�"};
	mondai mondai04 = {0, &mondai01, &gakki04 , "������ ̼��� ������� ��"};
	mondai mondai05 = {0, &gakki06 , &mondai01, "��޼�ɦ �¹�ɶ� �Բ"};
	mondai mondai06 = {0, &gakki08 , &mondai02, "��� � ���� �� �޷�"};
	mondai mondai07 = {0, &gakki08 , &mondai02, "���ݺ �� ϰ�ެ� � γ�� �ɼ���� � �ӳ"};
	mondai mondai08 = {0, &gakki02 , &mondai04, "���ź��� ָ �ײ׽�"};
	mondai mondai09 = {0, &gakki03 , &mondai08, "�ް�� � Է��� ��� ��ݿ�� � ���� � γ�� �ޯĽ�"};
	mondai mondai10 = {0, &mondai07, &mondai05, "�����޲ � �ް� � ���� �Ҽ��ֳ � �ӳ"};
	mondai mondai11 = {0, &gakki01 , &mondai08, "���ܾ�޶� �� ��׽� 10���ϴ � ��"};
	mondai mondai12 = {0, &mondai10, &mondai09, "ٽ������� � ү���ަ ���ɶ� ƶ��"};
	mondai mondai13 = {0, &mondai10, &mondai06, "�޼���Ĺ� � �ײ"};
	mondai mondai14 = {0, &mondai12, &mondai11, "����ذ� �� �������ި� � γ�� ��"};
	mondai mondai15 = {0, &mondai13, &mondai10, "ָ �� � �ֳ"};
	mondai mondai16 = {0, &mondai15, &mondai12, "�޿�ݽ���� �� ���޲Ħ ����� � �ӯ��Ķ� ��"};
	mondai mondai17 = {0, &gakki07 , &mondai16, "ճ�ޮ� � �² γ��� �ӳ"};
	mondai mondai18 = {0, &gakki11 , &mondai17, "�׿� �� �޲�ײ"};
	mondai mondai19 = {0, &mondai14, &mondai16, "���� � ���� � ��Ը � �ݼޮ��ƭ� �� �ٺĶ� ���"};
	mondai mondai20 = {0, &mondai18, &mondai17, "�ު�ĺ������ �޲��"};
	mondai mondai21 = {0, &mondai20, &mondai19, "TV����� ������ò� �������ަ �������"};
	mondai mondai22 = {0, &mondai03, &mondai21, "����ɺ� �ݾ�� ���ֳ�ަ ��¹���"};

	/* �J�n�n�_�ł̎���(��蕶)�̃|�C���^ */
	mondai *now = &mondai22;

	/* �L�[�{�[�h���͗p�ϐ� */
	char in;

	/* ����J�n */
	while(now->n == 0)
	{
		printf("����: %s\n", now->s);

		/* ���̓��[�v(y��n�ȊO�͓��͂���蒼��������) */
		do {
			printf("(y/n) ");
			in = getchar();
			while(getchar() != '\n');
		} while(in != 'y' && in != 'Y' && in != 'n' && in != 'N');

		/* ���̎���(�I�[)�Ɍ��݂̃|�C���^���ړ����� */
		if (in == 'y' || in == 'Y') now = now->yes;
		else                        now = now->no;

		printf("\n");
	}

	/* ����I��(�ԍ��Ɗy���\��) */
	printf("���: %d %s\n", now->n, now->s);

	/* �t�@�C�����쏈���������ɓ���炵���B */
	return;
}
