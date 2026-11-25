#include "main.h"

void player_init(player_t *p, char *name, unsigned int level, unsigned int hp, unsigned int damage, unsigned int class)
{
	int i;
	player_class_t classes[] = {
		{0, "WARRIOR"},
		{1, "ROGUE"},
		{2, "WIZARD"}
	};
	// Implement player initialisation logic
	p->name = name;
	p->level = level;
	p->hp = hp;
	p->damage = damage;
	p->class = class;

	printf("PLAYER %s CREATED\n", (*p).name);
	printf("player name: %s\n", p->name);
	i = 0;
	while (i < 3)
	{
		if (p->class == classes[i].class_number)
		{
			printf("player class: %s\n", classes[i].class_name);
			i = 3;
		}
		i++;
	}
	printf("Player level: %d\n", p->level);
	printf("Player hp: %d\n", p->hp);
}
		//
		// void repr_warrior(player_t *p)
		// {
		// 	// Represent warrior
		// }
		//
		// void repr_rogue(player_t *p)
		// {
		// 	// Represent rogue
		// }
		//
		// void repr_wizard(player_t *p)
		// {
		// 	// Represent wizard
		// }
		//
		// void level_up(player_t *player)
		// {
		// 	// Implement level up functionality
		// }
		//
	void attack_1(player_t *p1, player_t *p2)
	{
		// Attack at level 1
	}
		//
	void attack_2(player_t *p1, player_t *p2)
	{
		// Attack at level 2
	}
		//
	void attack_3(player_t *p1, player_t *p2)
	{
		// Attack at level 3
	}
		//
