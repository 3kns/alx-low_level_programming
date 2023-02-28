#include "main.h"
/**
 * *_strcpy - entry point
 * @dest: declared variable
 * @src: declared variable
 * Return: dest variable (success)
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[i++] = '\0';
	return (dest);
}
