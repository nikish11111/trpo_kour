#include "game.h"
#include "random_fill.h"
#include "get_input.h"

void game()
{
    int generated[4], user_input[4];
    while(1) {
        random_fill(generated);
        get_input(user_input);
        break;
    }
}