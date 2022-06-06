#include <stdio.h>
#include <stlib.h>
#include <time.h>
/**
 *main - Prints all single digit numbers
 *Return:Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num ++)
{
putchar((num % 10 + '0'));
}
putchar('\n')
return (0);
}
