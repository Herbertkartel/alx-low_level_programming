#include "main.h"

/**
 * main - prints _putchar, followed by new lines
 *
 */
int main(void)
{
char her[] = "_putchar";
int c;
for (c = 0; c < 8; c++)
{
_putchar(her[c]);
}
_putchar('\n');
return (0);
}
