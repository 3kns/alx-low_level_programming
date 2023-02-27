#include "main.h"
/**
 * swap_int - function to swap integers
 * @a: "useless integer"
 * @b: "useless integer"
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
