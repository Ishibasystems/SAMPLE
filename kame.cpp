/* kame.cpp */
/* NORMAL: ���߂˂��l���]��ł���sscanf�̋����C���[�W(1�����������o��) */
/* 2012.03.19, 10RU004, �΋��ˑ� */

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

	std::cout << "���������͂��ĉ�����" << std::endl;
	std::cin >> s;

	c = kame_sscanf(s);

	printf("\n%c\n", c);

	std::cout << s << std::endl;

	return;
}