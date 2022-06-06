#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints alphabet in small letters
 *Return:Always 0 (success)
 */
int main(void)
{
char ltr;
for (ltr = 'a'; ltr <= 'z'; ltr++)
{
putchar(ltr);
}
putchar('\n');
return (0);
}
