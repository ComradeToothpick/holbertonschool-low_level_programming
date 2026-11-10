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
	char choice;

	running = true;
	should_print_menu = true;
	while (running)
	{
		if (should_print_menu)
		{
			print_menu();
		}
		printf("Choice: ");
		scanf("%c", &choice);
		clear_buffer();
		if (choice >= '0' && choice <= '4')
		{
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
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

/**
 * handle_choice - Takes the character input from the user and calls the
 * correct function and returns true, or returns false on input == '0'
 * Only meant to handle valid inputs
 * @input: The single character choice from user input
 * Return: false if input was '0', otherwise true
 */
bool handle_choice(char input)
{
	if (input == '0')
	{
		return (false);
	}
	if (input == '1')
	{
		add();
		return (true);
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
		if (dump == '\n')
		{
			clearing = false;
		}
	}
}

/**
 * add - Collects input from user to determine values A & B,
 * then prints their sum
 */
void add(void)
{
	int a;
	int b;

	printf("A: ");
	scanf("%d", &a);
	clear_buffer();
	printf("B: ");
	scanf("%d", &b);
	clear_buffer();
	printf("Result: %d\n", a + b);
}
