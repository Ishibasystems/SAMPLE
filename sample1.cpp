/* sample1.cpp */
/* NORMAL: �͂��߂�1�̐��l����́A���̂��Ƃ̘A������10�̐��𑫂��Ă��̓������o�� */
/* 2012.02.12, 10RU004, �΋��ˑ� */

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	char pad = 2, str1[10], str2[10], str3[10], cnt;
	long int1, int2, i, sum = 0, base = 1;

	cout << "���l����͂��ĉ�����" << endl;
	cin >> int1;

	cout << "���l����͂��ĉ�����" << endl;
	cin >> int2;

	cout << endl;

	sprintf(str1, "%ld", int1);	/* ���l1�𕶎���1�ɂ��� */
	sprintf(str2, "%ld", int2);	/* ���l1�𕶎���1�ɂ��� */

	pad = strlen(str1) + strlen(str2) - 2 - (int1 < int2 ? strlen(str2) : strlen(str1));

	for (char count = 0; count < pad; count++)
		cout << " ";

	if (int1 < int2)
		for (char count = 0; count < strlen(str2) - strlen(str1); count++)
			cout << " ";

	cout << "  " << str1 << endl;	/* ���l1(������1�E�|�����鐔)����s�ڂɏo�� */

	for (char count = 0; count < pad; count++)
		cout << " ";

	cout << "X ";

	if (int1 > int2)
		for (char count = 0; count < strlen(str1) - strlen(str2); count++)
			cout << " ";

	cout << str2 << endl;	/* ���l2(������2�E�|���鐔)����s�ڂɏo�� */

	for (char count = 0; count < strlen(str1) + strlen(str2); count++)
		cout << "-";

	cout << endl;

	for (char count = 0; count < strlen(str2); count++)
	{
		i = atol(str1) * (str2[strlen(str2) - 1 - count] - '0');

		sprintf(str3, "%ld", i);

		for (cnt = 0; cnt < strlen(str1) + strlen(str2) - strlen(str3) - count; cnt++)
			cout << " ";

		cout << i << endl;

		sum += i * base;

		base *= 10;
	}

	sprintf(str3, "%ld", sum);

	for (char count = 0; count < strlen(str1) + strlen(str2); count++)
		cout << "-";

	cout << endl << (strlen(str1) + strlen(str2) > strlen(str3) ? " " : "") << str3 << endl;
	return 0;
}