#include "main.h"
/**
 * *_strcpy - entry point
 * @dest: declared variable
 * @src: declared variable
 * Return: dest variable (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
