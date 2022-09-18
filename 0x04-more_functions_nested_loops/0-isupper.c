#include "main.h"

/**
* _isupper - checks if parameter is uppercase character
* @x: character to be tested
* Return: 1 if c is uppercase, otherwise 0
*/

int _isupper(int x)
{
if (x >= 65 && x <= 90)
{
return (1);	
}

return (0);
}
