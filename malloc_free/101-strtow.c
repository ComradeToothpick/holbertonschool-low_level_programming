#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * strtow - Takes a string and seperates the contents into individual words
 * @str: The string to seperate into words
 * Return: An array of char * (strings), or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, word_count, word_primed;
	char c, **output;

	if (str == NULL || *str == '\0')
		return (NULL);
	init_vars(&i, &j, &k, &c, &word_primed, &word_count, str);
	if (word_count == 0)
		return (NULL);
	output = malloc(sizeof(char *) * (word_count + 1));
	if (output == NULL)
		return (NULL);
	while (c != 0)
	{
		c = *(str + i);
		if (c == ' ' && word_primed == 0)
		{
			output[j++][k] = '\0';
			k = 0;
			word_primed = 1;
		}
		else if (c != ' ' && c != 0 && word_primed == 1)
		{
			output[j] = word_len(str, i);
			if (output[j] == NULL)
			{
				error_free(j, output);
				return (NULL);
			}
			output[j][k++] = c;
			word_primed = 0;
		}
		else if (c != ' ' && c != 0)
		{
			output[j][k++] = c;
		}
		i++;
	}
	output[j + 1] = NULL;
	return (output);
}

/**
 * init_vars - Sets the values of the given variables to their required initial
 * values
 * @i: The address of int i
 * @j: The address of int j
 * @k: The address of int k
 * @c: The address of the char c
 * @w_p: The address of int word_primed
 * @w_c: The address of int word_count
 * @str: The string to get the word count from
 */
void init_vars(int *i, int *j, int *k, char *c, int *w_p, int *w_c, char *str)
{
	*i = 0;
	*j = 0;
	*k = 0;
	*c = '0';
	*w_p = 1;
	*w_c = count_words(str);
}

/**
 * error_free - frees the memory allocated to the given array,
 * then frees the memory allocated to the array
 * @count: The number of elements in the array to be freed
 * @array: the array itself
 */
void error_free(int count, char **array)
{
	int i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/**
 * count_words - Conts the number of valid words in a given string
 * @str: The string to count from
 * Return: The number of words found
 */
int count_words(char *str)
{
	int i, count;
	char c;
	bool word_primed;

	word_primed = true;
	i = 0;
	count = 0;
	c = '0';
	while (c != 0)
	{
		c = *(str + i);
		if (c == 0)
		{
			return (count);
		}
		if (c == ' ')
		{
			word_primed = true;
		}
		else if (word_primed)
		{
			word_primed = false;
			count++;
		}
		i++;
	}
	return (count);
}

/**
 * word_len - Returns the memory address with the correct length allocated
 * for the word starting at str + offset
 * Includes the space/null character in the length
 * @str: The starting address of the word
 * @offset: The offset from the atart of the string to measure from
 * Return: The length of the word
 */
char *word_len(char *str, int offset)
{
	int i;
	char c, *output;

	i = 0;
	c = '0';
	while (c != ' ' && c != 0)
	{
		c = *(str + offset + i);
		i++;
	}
	if (i > 0)
	{
		output = malloc(sizeof(char) * i);
		return (output);
	}
	return (NULL);
}
