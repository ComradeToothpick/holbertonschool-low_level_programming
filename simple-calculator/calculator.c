#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Exit code, 0 for success
 */
int main(void)
{
	bool should_print_menu;
	bool running;
	char choice_c;
	int choice;

	running = true;
	should_print_menu = true;
	while (running)
	{
		print_menu(should_print_menu);
		printf("Choice: ");
		scanf("%c", &choice_c);
		clear_buffer();
		if (choice_c >= '0' && choice_c <= '4')
		{
			choice = choice_c - '0';
			should_print_menu = true;
			running = handle_choice(choice);
		}
		else
		{
			should_print_menu = false;
			printf("Invalid choice\n");
		}
	}
	printf("Bye!\n");
	return (0);
}

/**
 * print_menu - Prints the calculator menu
 * @should_print_menu: Skips printing the menu if this is false
 */
void print_menu(bool should_print_menu)
{
	if (should_print_menu)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
	}
}

/**
 * handle_choice - Takes the character input from the user and calls the
 * correct function and returns true, or returns false on input == '0'
 * Only meant to handle valid inputs
 * @input: The single character choice from user input
 * Return: false if input was '0', otherwise true
 */
bool handle_choice(int input)
{
	if (input == 0)
	{
		return (false);
	}
	if (input >= 1 && input <= 4)
	{
		opperate(input);
	}
	return (true);
}

/**
 * clear_buffer - clears the input buffer
 */
void clear_buffer(void)
{
	bool clearing;
	char dump;

	clearing = true;
	while (clearing)
	{
		scanf("%c", &dump);
		if (dump == '\n' || dump == '\0')
		{
			clearing = false;
		}
	}
}

/**
 * opperate - Collects input from user to determine values A & B,
 * then prints their:
 * sum if mode == 1,
 * difference if mode == 2,
 * product if mode == 3,
 * or ratio if mode == 4
 * @mode: the selected mode to print the output of
 */
void opperate(int mode)
{
	int a;
	int b;

	printf("A: ");
	scanf("%d", &a);
	clear_buffer();
	printf("B: ");
	scanf("%d", &b);
	clear_buffer();
	if (mode == 1)
	{
		printf("Result: %d\n", a + b);
	}
	else if (mode == 2)
	{
		printf("Result: %d\n", a - b);
	}
	else if (mode == 3)
	{
		printf("Result: %d\n", a * b);
	}
	else if (mode == 4)
	{
		printf("Result: %.2f\n", (float)a / (float)b);
	}
}
