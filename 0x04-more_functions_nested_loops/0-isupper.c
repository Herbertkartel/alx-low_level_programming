#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters.
 * *@c: character being tested
 *  Return: Always 0.
 */
int _issuper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
