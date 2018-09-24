#include "game.h"
#include "random_fill.h"
#include "get_input.h"
#include "bulls_and_cows.h"

void game()
{
    int generated[4], user_input[4];
    while(1) {
        random_fill(generated);
        get_input(user_input);
        int bools_n = bulls(generated, user_input);
        int cows_n = cows(generated, user_input);
        break;
    }
}