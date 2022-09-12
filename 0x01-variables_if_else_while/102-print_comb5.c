 */

#include <stdio.h>

 /**
  * main - Prints all possible combinations of two two-digit numbers,
  *        ranging from 0-99, separated by a comma followed by a space.
  *
  * Return: Always 0.
  */
int main(void)
{
int a, b, c, d;
int i, j;
for (i = 0; i <= 99 i++)
{
for (j = 1; j <= 99 j++)
{
a = (i / 10) + '0';
b = (i % 10) + '0';
c = (j / 10) + '0';
d = (j % 10) + '0';
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (i != 98)
{
putchar(',);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
