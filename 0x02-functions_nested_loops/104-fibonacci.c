#include <stdio.h>

/**
  * main - entry point for the prog
  *
  * Return: always 0.
  */
int main(void)
{
	unsigned long int prev, next, res;
	unsigned long int prev_1af, prev_2af, next_1af, next_2af;
	unsigned long int first_af, snd_af;
	int i;

	i = 1;
	prev = 1;
	next = 2;
	printf("%lu, %lu, ", prev, next);
	while (i <= 90)
	{
		res = prev + next;
		prev = next;
		next = res;
		printf("%lu, ", res);
		i++;
	}
	prev_1af = prev / 10000000000, next_1af = next / 10000000000;
	prev_2af = prev % 10000000000, next_2af = next % 10000000000;
	for (i = 91; i < 97; i++)
	{
		first_af = prev_1af + next_1af;
		snd_af = prev_2af + next_2af;
		if (snd_af > 9999999999)
		{
			first_af += 1;
			snd_af %= 10000000000;
		}
		printf("%lu%lu", first_af, snd_af);
		if (i != 96)
			printf(", ");
		prev_1af = next_1af;
		prev_2af = next_2af;
		next_1af = first_af;
		next_2af = snd_af;
	}
	printf("\n");
	return (0);
}
