#include "main.h"

/**
  * print_line - function that prints line on the terminal
  *
  * @n: length of the line
  * Return: Always return 0 on success
  *
  */
void print_line(int n)
{
	int line;

	line = 0;
	if (n > 0)
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
	}
	_putchar(10);
}
