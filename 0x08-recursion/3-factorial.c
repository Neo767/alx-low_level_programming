#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: unsigned int
 * Return: int
 */

unsigned int factorial(unsigned int n)
{
	int x;

	if (n <= 1)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
