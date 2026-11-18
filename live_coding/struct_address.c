#include <stdio.h>
#include <stdlib.h>

typedef struct cat_s {
	char c;
	char d;
} cat_t;

typedef struct dog_s {
	int i;
	char c;
} dog_t;

typedef struct bird_s {
	int i;
	int j;
} bird_t;

typedef struct mouse_s {
	char c;
	int i;
} mouse_t;

typedef struct snake_s {
	char c;
	double d;
} snake_t;

int main() {
	bird_t bird;
	dog_t dog;
	cat_t cat;
	mouse_t mouse;
	snake_t snake;

	bird = (bird_t) {0, 0};
	cat = (cat_t) {'0', '0'};
	dog = (dog_t) {0, '0'};
	mouse = (mouse_t) {'0', 0};
	snake = (snake_t) {'0', (double) 1};

	printf("bird struct address: %p\n"
		"bird var 'i' address: %p\n"
		"bird var 'j' address: %p\n\n", &bird, &bird.i, &bird.j);
	printf("cat struct address: %p\n"
		"cat var 'c' address: %p\n"
		"cat var 'd' address: %p\n\n", &cat, &cat.c, &cat.d);
	printf("dog struct address: %p\n"
		"dog var 'i' address: %p\n"
		"dog var 'c' address: %p\n\n", &dog, &dog.i, &dog.c);
	printf("snake struct address: %p\n"
		"snake var 'c' address: %p\n"
		"snake var 'd' address: %p\n\n", &snake, &snake.c, &snake.d);
	printf("mouse struct address: %p\n"
		"mouse var 'c' address: %p\n"
		"mouse var 'i' address: %p\n\n", &mouse, &mouse.c, &mouse.i);
	// Display the address of the struct, and the fields inside them
	return (0);
}
