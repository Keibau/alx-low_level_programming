#include "main.h"

/**
 * print_aphabet ->prints the lowercase alphabet
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		-putchar(j);
	}
	_putchar('\n');
}
