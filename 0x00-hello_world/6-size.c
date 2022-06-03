#include <stdio.h>
/**
 *main-Entry point
 *Return:Always 0 (success)
 */
int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;
printf("Size of a char: %zu byte\n", sizeof(acharacter));
printf("Size of an int: %zu bytes\n", sizeof(ainteger));
printf("Size of a long int: %zu bytes\n", sizeof(along));
printf("Size of a long long int: %zu bytes\n", sizeof(alonglong));
printf("Size of a float: %zu bytes\n", sizeof(afloat));
return (0);
}
