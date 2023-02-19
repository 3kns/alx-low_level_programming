#include <stdio.h>
#include <stdlib.h>
 /**
  * main - Entry point
  *
  * Description: "printing alphabets in lower and uoper cases"
  *
  * Return - Always 0 (Success)
  */
int main(void)
{
	char c, C;
	while (c <= 'z')
	{
		putchar(c);
		++c;
		if (c == 'z')
		{
			break;
		}
	}
	while (C <= 'Z')
	{
		putchar(C);
		++C;
		if (C == 'Z')
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
