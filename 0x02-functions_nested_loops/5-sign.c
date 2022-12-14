#include "main.h"

/**
 * print_sign - prints the sign of a number
 * auth: Neo767
 * @n: num to be checked
 * Return: 1 if pos -1 if neg otherwise 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
