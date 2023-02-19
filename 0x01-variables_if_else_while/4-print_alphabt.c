#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
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

	c = 'a';
	while (c != 'e' && c != 'q')
	{
		putchar(c);
		c++;
		if (c > 'z')
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
