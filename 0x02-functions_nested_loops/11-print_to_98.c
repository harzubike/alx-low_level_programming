#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - is a function that checks if character alphabet
  *
  * @n: takes in int c and checks
  *
  * Return: Always return 0 on success
  *
  */
void print_to_98(int n)
{
	int num_1;

	num_1 = n;
	if ((num_1 > 98) || (num_1 == 98))
	{
		while (num_1 >= 98)
		{
			if (num_1 == 98)
				printf("%d", num_1);
			else
				printf("%d, ", num_1);
			num_1--;
		}
	}
	else if ((num_1 < 98) || (num_1 == 98))
	{
		while (num_1 <= 98)
		{
			if (num_1 == 98)
				printf("%d", num_1);
			else
				printf("%d, ", num_1);
			num_1++;
		}
	}
	putchar(10);
}
