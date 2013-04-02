/* kame.cpp */
/* NORMAL: かめねこ様が望んでいたsscanfの挙動イメージ(1文字だけ取り出し) */
/* 2012.03.19, 10RU004, 石橋祥太 */

#include <iostream>
#include <cstdio>

int kame_sscanf(char *s)
{
	char c = s[0];

	for (long count = 0; s[count++] != '\0'; s[count - 1] = s[count]);

	return c;
}

void main(void)
{
	char c, s[256];

	std::cout << "文字列を入力して下さい" << std::endl;
	std::cin >> s;

	c = kame_sscanf(s);

	printf("\n%c\n", c);

	std::cout << s << std::endl;

	return;
}