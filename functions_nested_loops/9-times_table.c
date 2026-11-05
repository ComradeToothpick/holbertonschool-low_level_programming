#include "main.h"

/**
 * times_table - Prints the times tables up to and including the 9 times tables
 */
void times_table(void)
{
	int n1;
	int n2;
	int product10s;
	int product;

	n1 = 0;
	n2 = 0;
	while (n1 <= 9)
	{
		while (n2 <= 9)
		{
			product = n1 * n2;
			product10s = (product - (product % 10)) / 10;
			if (product10s >= 1)
			{
				_putchar(' ');
				_putchar('0' + product10s);
			}
			else if (n2 > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('0' + (product % 10));
			if (n2++ != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
		n2 = 0;
		n1++;
	}
}
