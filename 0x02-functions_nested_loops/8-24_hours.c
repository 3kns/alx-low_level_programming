#include "main.h"
/**
 * jack_bauer - entry point
 * @void: returns 0 value
 * Return: 0 always success
 */
void jack_bauer(void)
{
	int hours, minutes;

	hours = 0;
	while (hours < 24)
	{
		minutes = 60;
		while (minutes < 60)
		{_
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0';
			_putchar(':');
			_purchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');

			_putchar('\n');

			minutes++;
		}
		hours++;
	}
}
