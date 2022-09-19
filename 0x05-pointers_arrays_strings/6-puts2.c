#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 **/

void puts2(char *str)
{
	int lent, i;

	lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}

	for (i = 0; i < lent; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
