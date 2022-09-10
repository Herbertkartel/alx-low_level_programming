/*
 * File: 10-print_combo2.c
 * Auth: Herbert
 */

#include <stdio.h>
/**
 * main -  Prints the numbers from 00 to 99, numbers separated 
 *
 * Return: Always 0.
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = 0; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if (gigit1 == 9 && digit2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putcar('\n');
return (0);
}

