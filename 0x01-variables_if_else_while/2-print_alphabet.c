#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point returns a value of 0
 *
 * Description: "the program's description"
 *
 * Return - Always 0 (Success)
 *
 */
void main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');

	return (0);
}
