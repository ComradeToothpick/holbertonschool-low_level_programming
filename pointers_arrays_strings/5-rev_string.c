#include "main.h"

/**
 * rev_string - Takes a string as input and reverses it in memory
 * @s: The char pointer at the beginning of the string to reverse
 */
void rev_string(char *s)
{
	int length;
	int i;
	char c;

	length = 0;
	c = '0';
	while (c != 0)
	{
		c = *(s + length);
		if (c != 0)
		{
			length++;
		}
	}
	i = 0;
	while (i <= length / 2)
	{
		c = *(s + i);
		*(s + i) = *(s + length - (i + 1));
		*(s + length - (i + 1)) = c;
		i++;
	}
}
