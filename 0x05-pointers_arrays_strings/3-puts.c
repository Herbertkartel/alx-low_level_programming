#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Description: prints a string
 * Return: void
 */

void _puts(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar(10);
}
