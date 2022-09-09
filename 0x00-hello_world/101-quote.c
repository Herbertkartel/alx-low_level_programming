#include <stdio.h>
 #include <unistd.h>

/**
 * main - Prints exactly "and that peice of art is useful" - Dora Korpar, 2015-10-19",
 * Followed by a new line, to the standard error.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
