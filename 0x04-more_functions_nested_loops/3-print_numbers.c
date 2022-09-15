#include "main.h"

/**
  * print_numbers - function that prints the aphpabets
  *
  * Return: Always return 0 on success
  *
  */
void print_numbers(void)
{
	char num;

	num = 48;
	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar(10);
}
