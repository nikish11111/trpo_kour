#include "game.h"
#include "random_fill.h"
#include "get_input.h"
#include "bulls_and_cows.h"
#include <stdio.h>

void game()
{
    int generated[4], user_input[4];
    random_fill(generated);
    while (1) {
        get_input(user_input);
        int bools_n = bulls(generated, user_input);
        int cows_n = cows(generated, user_input);
        printf("\nnumber of bulls: %d\n", bools_n);
        printf("number of cows: %d\n", cows_n);
        if (bools_n == 4) {
            printf("\nYOU WIN!\n");
            break;
        }
    }
}