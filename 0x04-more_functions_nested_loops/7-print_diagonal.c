#include "main.h"

/**
  * print_diagonal - function that prints diagonal line on the terminal
  * @n: length of the line
  * Return: Always return 0 on success
  *
  */
void print_diagonal(int n)
{
	int l1, l2;

	if (n > 0)
	{
		l1 = 0;
		while (l1 < n)
		{
			l2 = 0;
			while (l2 < l1)
			{
				_putchar(' ');
				l2++;
			}
			_putchar('\\');
			_putchar(10);
			l1++;
		}
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
}
