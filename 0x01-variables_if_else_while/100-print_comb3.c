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
	int n, i;

	for (i = 48; i <= 56; n++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
			}
			if (i != 56 || n != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
