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
		for (n = '1'; n <= '9'; n++)
		{
			if (i < n)
			{
				putchar(i);
				putchar(n);
			}
			if (i != '8' || (i == '8' && n != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
