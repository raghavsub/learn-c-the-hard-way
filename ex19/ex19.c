#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

#include "game.h"

extern Object MonsterProto;
extern Object RoomProto;
extern Object MapProto;

int process_input(Map *game);

int Map_init(void *self)
{
    assert(self != NULL);

    Map *map = self;

    // rooms
    Room *hall = NEW(Room, "The great hall");
    Room *throne = NEW(Room, "The throne room");
    Room *arena = NEW(Room, "THe arena, with the minotaur");
    Room *kitchen = NEW(Room, "Kitchen, you have the knife now");

    // monsters
    arena->bad_guy = NEW(Monster, "The evil minotaur");

    // map
    hall->north = throne;

    throne->west = arena;
    throne->east = kitchen;
    throne->south = hall;

    arena->east = throne;

    kitchen->west = throne;

    // initialize
    map->start = hall;
    map->location = hall;

    return 1;
}

int main(int argc, char *argv[])
{
    // simple way to set up the randomness
    srand(time(NULL));

    // make our map to work with
    Map *game = NEW(Map, "The Hall of the Minotaur");

    printf("You enter the ");
    game->location->_(describe)(game->location);

    while (process_input(game)) {}

    return 0;
}
