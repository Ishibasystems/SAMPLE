/* sample2.cpp */
/* NORMAL: 意味をわかりやすくするためにfor文は使っていません。 */
/* 2012.03.13, 10RU004, 石橋祥太 */

#include <iostream>
#include <cctype>
using namespace std;

void main(void)
{
	char str[256], moji;
	long count;

	cout << "文字列を入力して下さい" << endl;
	cin >> str;

	count = 0;

	while(str[count] != '\0')	/* 文字の終端まで繰り返す */
	{
		moji = str[count];	/* 1バイト取り出す */

		if (isalpha(moji)) cout << moji << "\t" << (count + 1) << "文字目はアルファベット" << endl;

		else if (isdigit(moji)) cout << moji << "\t" << (count + 1) << "文字目は数字" << endl;

		else cout << moji << "\t" << (count + 1) << "文字目は判別出来ませんでした" << endl;

		count++;	/* 読み取り位置を次のバイトに移動 */
	}

	return;
}