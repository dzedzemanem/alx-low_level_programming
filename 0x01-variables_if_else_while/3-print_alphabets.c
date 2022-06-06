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
char caps;
for (ltr = 'a'; ltr <= 'z'; ltr++)
{
putchar(ltr);
}
for (caps = 'A'; caps <= 'Z'; caps++)
{
putchar(caps);
}
putchar('\n');
return (0);
}
