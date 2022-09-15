#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largest = 0;

	while (num != 1)
	{
		if ((num % divisor) == 0)
		{
			num = num / divisor;
			largest = divisor;
		}
		divisor = divisor + 1;
	}
	printf("%ld\n", largest);
	return (0);
}
