#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Exit code, 0 for success
 */
int main(void)
{
	bool input_clear;
	bool running;
	char choice;
	char dump;

	running = true;
	while (running)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		scanf("%c", &choice);
		input_clear = true;
		while (input_clear)
		{
			scanf("%c", &dump);
			if (dump == '\n')
			{
				input_clear = false;
			}
		}
		if (choice == '0')
		{
			running = false;
		}
	}
	printf("Bye!\n");
	return (0);
}
