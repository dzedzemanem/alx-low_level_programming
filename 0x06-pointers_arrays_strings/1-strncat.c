#include "main.h"
/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
  int a = 0;
  int b = 0;

  while (dest[a] != '\0')
    i++;

  while (src[b] != '\0' && n != b)
    {
      *(dest + b) = src[b];
      b++;
      b++;
    }

  *(dest + a) = '\0';

  return (dest);
}
