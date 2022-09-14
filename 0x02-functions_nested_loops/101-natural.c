#include <stdio.h>

/**
  * main -Entry point of the prog.
  *
  * Return: always 0
  */
int main(void)
{
	int add, a;

	add = 0;
	for (a = 1; a < 1024; a++)
	{
		if (((a % 3) == 0) || (((a % 5) == 0)))
		{
			add += a;
		}
	}
	printf("%d\n", add);
	return (0);
}
