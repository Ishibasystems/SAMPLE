/* sample2.cpp */
/* NORMAL: �Ӗ����킩��₷�����邽�߂�for���͎g���Ă��܂���B */
/* 2012.03.13, 10RU004, �΋��ˑ� */

#include <iostream>
#include <cctype>
using namespace std;

void main(void)
{
	char str[256], moji;
	long count;

	cout << "���������͂��ĉ�����" << endl;
	cin >> str;

	count = 0;

	while(str[count] != '\0')	/* �����̏I�[�܂ŌJ��Ԃ� */
	{
		moji = str[count];	/* 1�o�C�g���o�� */

		if (isalpha(moji)) cout << moji << "\t" << (count + 1) << "�����ڂ̓A���t�@�x�b�g" << endl;

		else if (isdigit(moji)) cout << moji << "\t" << (count + 1) << "�����ڂ͐���" << endl;

		else cout << moji << "\t" << (count + 1) << "�����ڂ͔��ʏo���܂���ł���" << endl;

		count++;	/* �ǂݎ��ʒu�����̃o�C�g�Ɉړ� */
	}

	return;
}