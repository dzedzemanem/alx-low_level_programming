#include "main.h"

/**
 * print_alphabet - Function prototype
 * Prints the letters of the alphabet in lowercase
 * Return: void
 **/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
