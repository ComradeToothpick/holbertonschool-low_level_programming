#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array of strings of each argument passed
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, total, collected_value;

	i = 1;
	total = 0;
	while (i < argc)
	{
		collected_value = _atoi(argv[i]);
		if (collected_value == 0)
		{
			printf("Error\n");
			return (1);
		}
		total += collected_value;
		i++;
	}
	printf("%d\n", total);
	return (0);
}

/**
 * _atoi - returns an integer that is retreived from the string at location s
 * including the sign of '-' if included
 * @s: The source string location
 * Return: The integer collected from the string at s
 */
int _atoi(char *s)
{
	char c;
	int length, total, place, sign;

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
		else if (c == '-' && place == 0)
		{
			sign *= -1;
		}
		else if (c != 0)
		{
			return (0);
		}
	}
	return (total);
}
