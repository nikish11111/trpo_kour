#include <stdio.h>

#include "game.h"

void welcome_message()
{
    printf("Hello. This is game \"Bulls and Cows\".\n");
    printf("I conceived a 4-digit number.");
    printf("Your task is to guess it by entering numbers.\n");
    printf("If the number is the same, but it stands elsewhere - it's a cow,");
    printf(" if it's in the same place - it's a bull.\n\n");
}

int main()
{
    welcome_message();
    while (1) {
        game();
        printf("Try again? (0 = no, any key = yes)\n");
        char input[2];
        scanf("%s", input);
        if (input[0] == '0') {
            break;
        }
    }
}
