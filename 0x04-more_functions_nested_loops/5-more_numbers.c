#include "main.h"

/**
  * more_numbers - function that prints the aphpabets
  *
  * Return: Always return 0 on success
  *
  */
void more_numbers(void)
{
	int i;
	char n, num;

	for (i = 1; i <= 10; i++)
	{
		num = 0;
		while (num <= 14)
		{
			n = num;
			if (n >= 10)
			{
				_putchar('1');
				n = n % 10;
			}
			_putchar('0' + n);
			num++;
		}
		_putchar(10);
	}
}
