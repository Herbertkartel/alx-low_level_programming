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
int y;
int x;
for (x = 0; i <= 99; i++)
{
for (y = 0; y < 100; y++)
{
putchar('0' + x / 10);
putchar('0' + x % 10);
putchar(' ');
putchar(32);
putchar('0' + y / 10);
putchar('0' + y % 10);
if (x != 98 || y != 99)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
