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
 * Return: "Always 0 (Success)"
 */

int main(void)
{
	char c;

	char d;

	d = '0';

	while (d <= '9')
	{
		putchar(d);
			d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{								putchar(c);
	}
	putchar('\n');
	return (0);
}
