#include <stdio.h>

/**
  * main -Entry point of the program
  *
  * Return: Always 0
  */
int main(void)
{
	long int i, back, next, res;

	back = 1;
	next = 1;
	res = back + next;
	printf("%ld, %ld, ", next, res);
	for (i = 1; i <= 48; i++)
	{
		back = next;
		next = res;
		res = back + next;
		if (i == 48)
			printf("%ld\n", res);
		else
			printf("%ld, ", res);
	}
	return (0);
}
