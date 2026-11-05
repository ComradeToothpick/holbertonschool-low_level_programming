#include "main.h"

/**
 * _abs - takes an integer n and compute its absolute value
 * @n: The input value to take the absolute value of
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
