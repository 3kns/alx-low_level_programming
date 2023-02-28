#include "main.h"
/**
 * print_rev - function to print string in reverse
 * @s: the string character
 */
void print_rev(char *s)
{
	int count = 0;
	int a;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (a = count; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
