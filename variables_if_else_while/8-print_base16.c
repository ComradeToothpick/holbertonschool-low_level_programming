#include <stdio.h>

/**
 * main - Entry point
 * Prints each single digit number in base 16, followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 16)
	{
		if (number < 10)
		{
			putchar(48 + number++);
		}
		else
		{
			putchar(87 + number++);
		}
	}
	putchar('\n');
	return (0);
}
