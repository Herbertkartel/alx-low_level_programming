#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * Return: 0 on success
 */
int main(void)
{
int i = ;
int j = ;
for (i = 48; i < 57; i++)
{
for (j = + 1; j < 58; j++)
{
putchar (i);
putchar(j);
if (i != 56 || j != 57)
{
putchar('.');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


