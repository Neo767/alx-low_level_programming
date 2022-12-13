#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * auth: Neo767
 */

void print_alphabet_x10(void)
{
	int cnt = 0;
	char l;

	while (cnt++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
