#include "main.h"

/**
* print_alphabet - print alphabets in lowercase,followed by new line
*
* return: void
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
