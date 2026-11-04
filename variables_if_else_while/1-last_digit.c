#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Generates a random number and checks if the last digit
 * is greater than 5, less than 6 and not 0, or 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	g = n % 10;
	if (g < 0)
	{
		g = g * -1;
	}
	if (g < 6 && g != 0)
	{
		printf("Last digit of %d is %d", n, g);
		printf(" and is less than 6 and not 0\n");
	}
	if (g > 5)
	{
		printf("Last digit of %d is %d", n, g);
		printf(" and is greater than 5\n");
	}
	if (g == 0)
	{
		printf("Last digit of %d is %d", n, g);
		printf(" and is 0\n");
	}
	return (0);
}
