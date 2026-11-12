#include "main.h"

/**
 * _atoi - returns an integer that is retreived from the string at location s
 * including the sign of the highest amount of '+' or '-'
 * @s: The source string location
 * Return: The integer collected from the string at s
 */
int _atoi(char *s)
{
	char c;
	int length;
	int total;
	int place;
	int sign;

	c = '0';
	sign = 1;
	length = 0;
	total = 0;
	place = 0;
	while (place >= 0 && c != 0)
	{
		c = *(s + length++);
		if (c >= '0' && c <= '9')
		{
			total *= 10;
			if (sign == -1)
			{
				total -= ((int)(c - '0'));
			}
			else
			{
				total += ((int)(c - '0'));
			}
			place++;
		}
		else if (place > 0)
		{
			place = -1;
		}
		else if (c == '-')
		{
			sign *= -1;
		}
	}
	return (total);
}
