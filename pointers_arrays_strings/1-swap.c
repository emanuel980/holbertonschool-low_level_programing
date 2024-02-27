#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 *@a: The first integer to be swaped.
 *@b: The second integer to be swaped.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

