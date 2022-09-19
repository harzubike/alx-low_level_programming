#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, str_len, str_len1;

	str_len = 0;
	str_len1 = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	str_len1 = str_len - 1;

	for (i = 0; i < str_len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[str_len1];
		s[str_len1--] = tmp;
	}
}
