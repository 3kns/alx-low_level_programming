#include "main.h"
/**
 * puts_half - entrt point
 * @str: string in qhestion
 */
void puts_half(char *str)
{
	int count = 0;
	int a, n;

	for (a = 0; str[a] != '\0'; a++)
		count++;

	n = (count / 2);

	if ((count % 2) == 1)
		n = ((count + 1) / 2);
	for (a = n; str[a] != 0; a++)
		_putchar(str[a]);
	_putchar('\n');
}
