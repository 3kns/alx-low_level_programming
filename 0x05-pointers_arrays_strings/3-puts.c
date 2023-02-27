#include "main.h"
#include <unistd.h>
/**
 * _puts - funtion to write a string
 * @str: "string in question"
 * return: "string returned"
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write("%c", str);
		str++;
	}
	return (*str);
}
