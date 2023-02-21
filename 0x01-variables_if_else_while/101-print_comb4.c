#include <stdio.h>
#include <unistd.h>
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
int main (void)
{
	int i, n, m;

	for (i = 48; i < 58; i++)
	{
		for (n = 49; n < 58; n++)
		{
			for (m = 50; m < 58; m++)
			{
				putchar(i);
				putchar(n);
				putchar(m);

				if (i != 55 || n != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
