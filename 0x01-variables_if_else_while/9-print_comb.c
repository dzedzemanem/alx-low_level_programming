#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints alphabet in small letters
 *Return:Always 0 (success)
 */
int main(void)
{
int n = 48;
int com = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(com);
putchar(32);
}
n += 1;
}
putchar('\n');
return (0);
}
