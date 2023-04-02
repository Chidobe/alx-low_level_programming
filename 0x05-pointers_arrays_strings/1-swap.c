#include "main.h"

/**
 *swap_int - swaps values
 *@a: parameter
 *@b: parameter
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
