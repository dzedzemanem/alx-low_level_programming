#include "main.h"
/**
 * print_most_numbers - print the numberes from zero to nine
 * exlcuding two and four
 *
 * Return: the numbers from zero to nine only
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if ((n == 2) || (n == 4))
{
continue;
}
_putchar('0' + n);
}
_putchar('\n');
}
