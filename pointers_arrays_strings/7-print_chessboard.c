#include "main.h"

/**
 * print_chessboard - Prints the given chess board position
 * @a: an array of 8 strings representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	c = '0';
	while (i < 8)
	{
		while (j < 8)
		{
			c = (*(a + i))[j];
			j++;
			if (c != 0)
			{
				_putchar(c);
			}
			if (j == 8)
			{
				_putchar('\n');
			}
		}
		j = 0;
		i++;
	}
}
