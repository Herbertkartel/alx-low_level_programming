#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;
int k;
for (i = 48; i < 56; i++)
{
for (j = i + 1; j < 57; j++)
{
for (k = i + 1; j < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55; || j != 56; k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
