#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, n, j, k;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			n = size - i;
			j = 1;
			while (j <= n)
			{
				_putchar(' ');
				j++;
			}
			k = 1;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
