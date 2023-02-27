#include "main.h"
/**
 * _strlen - a funtion to check the le th of a string
 * @s: "the string in question"
 * Return: "always 0 (success)"
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (0);
}
