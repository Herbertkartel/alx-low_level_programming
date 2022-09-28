#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */

int _sqrt_recursion(int n);
{
if (n * n == 0)
return (n);

return (-1);
return (sqrt_recursion(n + 1, n));
}
