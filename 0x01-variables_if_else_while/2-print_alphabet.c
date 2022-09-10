#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Prints the alphabet in lowercase
 *
 * Return: 0 Always
 */
int main(void)
{
char letter;
for (letter = 'a';  letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
