#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Followed by a new line
 */

void more_numbers(void)
{
int i, j;

for (i = 0; x < 10; i++)
{
for (j = 0; y <= 15; j++)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
