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

	for (i = '0'; i <= '9'; n++)
	{
		for (n != i; n <= '9'; n++)
		{
			putchar(i);
			putchar(n);

			if (n != '9' && i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
