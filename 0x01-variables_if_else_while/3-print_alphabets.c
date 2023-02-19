#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * main: "Entry point returns a value of 0"
 *
 * @void: "always return value 0"
 *
 * Description: "the program's description"
 *
 *Return: "Always 0 (Success)"
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		++c;
		if (c > 'z')
		{
			break;
		}
	}
	while (C <= 'Z')
	{
		putchar(C);
		++C;
		if (C > 'Z')
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
