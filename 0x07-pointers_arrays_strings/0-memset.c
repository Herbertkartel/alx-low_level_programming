#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 *  @s: pointer to memory area to fill
 *  @n: the number of bytes to fill
 *  @b: bytes of the memory area to be filled
 *
 *  Return: the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}

return (s);
}
