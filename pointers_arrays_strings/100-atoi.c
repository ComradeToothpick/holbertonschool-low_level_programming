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
	int sign_count;
	int length;
	int total;
	int place;

	sign_count = 0;
	c = '0';
	length = 0;
	total = 0;
	place = 0;
	while (place >= 0 && c != 0)
	{
		c = *(s + length++);
		if (c >= 48 && c <= 57)
		{
			total *= 10;
			total += ((int)(c - 48));
			place++;
		}
		else if (place > 0)
		{
			place = -1;
		}
		else if (c == '+')
		{
			sign_count++;
		}
		else if (c == '-')
		{
			sign_count--;
		}
	}
	if (sign_count < 0)
	{
		total = total * -1;
	}
	return (total);
}
