#include "main.h"

/**
 * SWAP_int - swaps the values of the integers
 * @a: int a
 * @b: int b
 */
void SWAP_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
