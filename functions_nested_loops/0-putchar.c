#include "main.h"

/**
 * main - Entry point
 * prints the contents of the input[], followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char input[] = "_putchar";
	int length;
	char c;

	length = (int)(sizeof(input) / sizeof(input[0]));
	n = 0;
	while (n < length - 1)
	{
		c = input[n++];
		_putchar(c);
	}
	c = '\n';
	_putchar(c);
	return (0);
}
