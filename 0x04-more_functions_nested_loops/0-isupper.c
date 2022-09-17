#include "main.h"

/**
* _isupper - whatever you want
* @c: a parameter of the function
* @c: charater
* Return: void
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
