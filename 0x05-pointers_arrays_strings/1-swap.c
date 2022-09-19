#include "main.h"

/**
  * swap_int - swaps interger
  *
  * @a: parameter a
  * @b: parameter b
  *
  */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
