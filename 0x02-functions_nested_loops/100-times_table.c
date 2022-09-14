#include "main.h"

/**
  * print_times_table - display times table
  *
  * @n: number parameter
  *
  *Return: Returns multiplicaation table starting from 0
  */
void print_times_table(int n)
{
	int res, max, a, b;

	if ((n >= 0) && (n <= 15))
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				res = a * b;
				_putchar(',');
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res % 10 + '0');
				}
				else if (res >= 100)
				{
					max = res / 10;
					_putchar(max / 10 + '0');
					_putchar(max % 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
			}
			_putchar(10);
		}
	}
}
