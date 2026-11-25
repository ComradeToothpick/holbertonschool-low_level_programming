#include "main.h"

int main(void)
{
	player_t p1;
	player_t p2;

	// Initialize players
	player_init(&p1, "Joe", 1, 100, 10, WARRIOR);
	player_init(&p2, "Adam", 1, 100, 10, WIZARD);
	//
	// Attack and level up logic
	
	p1.attack(&p1, &p2);
	/*
	level_up(&p1);
	p1.attack(&p1, &p2);
	level_up(&p1);
	p1.attack(&p1, &p2);
	level_up(&p1);
	p1.attack(&p1, &p2);
	*/
	return 0;
}
