#include "main.h"

/**
* _isupper - checks if parameter is uppercase character
* @c: character to be tested
*
* Return: 1 if c is uppercase.
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
