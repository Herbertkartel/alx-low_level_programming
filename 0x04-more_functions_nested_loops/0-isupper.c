#include "main.h"

/**
* _isupper - checks if parameter is uppercase character
* @c: character to be tested
* Return: 1 if c is uppercase.
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
