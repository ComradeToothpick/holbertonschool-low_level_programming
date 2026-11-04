#include <stdio.h>

/**
 * main - Entry point
 * Prints each single digit number, followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(48 + number++);
	}
	putchar('\n');
	return (0);
}
