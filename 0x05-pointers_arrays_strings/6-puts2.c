#include "main.h"
/**
 * puts2 - funtion for printing only one character
 * @str: string involved
 */
void puts2(char *str)
{
	int count = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		count++;
	}
	t = count - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
