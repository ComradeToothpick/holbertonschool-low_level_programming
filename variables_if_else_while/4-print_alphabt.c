#include <stdio.h>

/**
 * main - Entry point
 * Prints each letter in the alphabet except q & e in lower case,
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 0;
	while (letter < 26)
	{
		if (letter != 4 && letter != 16)
		{
			putchar(97 + letter++);
		}
		else
		{
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
