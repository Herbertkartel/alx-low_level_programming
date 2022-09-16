#include "main.h"
#include <stdio.h>

/*
 * _isupper - Test case
 * @c: Integer c
 *
 * Description: Case of Alphabet is tested
 * Return: if true return 1, else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	} else {
		return (0);
	}
}
