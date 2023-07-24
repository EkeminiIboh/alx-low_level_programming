#include "main.h"

/**
 * swap_int - swaps the value of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: return nothing on success
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
