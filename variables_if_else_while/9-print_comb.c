#include <stdio.h>

/**
 * main - Entry point
 * Prints each single digit number seperated by ', ',
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(48 + number++);
		if (number < 10)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
