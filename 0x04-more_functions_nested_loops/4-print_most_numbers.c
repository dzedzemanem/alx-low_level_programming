#include "main.h"

/**
 * print_most_numbers - print the numberes from zero to nine
 * exlcuding two and four
 *
 * Return: the numbers from zero to nine only
 */

void print_most_numbers(void)
{
int n = 0;
for (n >=0; n <= 9; n++)
{
if (n == 2 || n == 4)
{
continue;
}
else
{
_putchar(n + '0');
}
}
_putchar('\n');
}
