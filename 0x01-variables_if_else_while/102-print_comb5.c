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
int a = 0;
int b = 0;
while (a <= 99)
{
b = (a + )1;
while (b <= 99)
{
putchar('0' + a / 10);
putchar('0' + a % 10);
putchar(' ');
putchar('0' + b / 10);
putchar('0' + b % 10);
if (a < 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
b++;
}
a++;
}
return (0);
}

