#include <stdio.h>

/**
 * main - Entry point
 * Prints each letter in the alphabet in lower case, followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 0;
	while (letter < 26)
	{
		putchar(97 + letter++);
	}
	putchar('\n');
	return (0);
}
