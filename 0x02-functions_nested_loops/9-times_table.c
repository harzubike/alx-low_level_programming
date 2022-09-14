#include "main.h"

/**
  * times_table - display times table
  *
  *Return: Returns multiplicaation table starting from 0
  */
void times_table(void)
{
	int a;
	int b;
	int product;

	a = 0;
	while (a < 10)
	{

		_putchar(48);
		for (b = 1; b < 10; b++)
		{
			product = a * b;
			_putchar(',');
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
		a++;
	}
}
