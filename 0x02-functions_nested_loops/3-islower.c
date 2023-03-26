#include "main.h"
/**
 * _islower - prints lower case
 * @c: to be printed
 *
 * Return: 1mif it is lower case
 * and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
