#include "main.h"
/**
 *swap_int - swap to input values
 *@a: swapped value
 *@b: another swapped value
 * Return:0 or 1
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
