#include "main.h"
/**
 * _strlen - a funtion to check the le th of a string
 * @s: "the string in question"
 * Return: "count value (success)"
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
