#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints alphabet backwards
 *Return:Always 0 (success)
 */
int main(void)
{
char ltr;
for (ltr = 'z'; ltr >= 'a'; ltr--)
{
putchar(ltr);
}
putchar('\n');
return (0);
}
