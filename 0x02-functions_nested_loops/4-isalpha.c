#include "main.h"
/**
 * main - entry point
 * @c: character to be checked
 * Return: returns avalue of 0 if c is lower case or upper case
 * else returns a value 1
 */
int _isalpha(int c)
{
	c = 'a';

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	else
		return (0);
	}
}
