#include "main.h"
#include <stdio.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
return (0);
}
