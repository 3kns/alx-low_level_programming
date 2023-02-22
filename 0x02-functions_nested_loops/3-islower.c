#include "main.h"
/**
 * _islower - entry point
 * @c: the character to be checked
 * Return: Return 1 for lower case alphabet,returns 1 if otherwise
 */
int _islower(int c)
{
	c = 'a';

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
