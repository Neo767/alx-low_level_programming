#include "main.h"

/**
 *  * _isalpha - checks for alphabetic character
 *   * auth: Neo767
 *    * @c: the char to check
 *     * Return: 1 if lowercase otherwise 0
 *      */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
