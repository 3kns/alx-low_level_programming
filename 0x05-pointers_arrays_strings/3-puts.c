#include "main.h"
/**
 * _puts - funtion to write a string
 * @str: "string in question"
 * return: "string returned"
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
