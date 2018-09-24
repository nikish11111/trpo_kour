#include "bulls_and_cows.h"

int bulls(int generated[], int user_input[])
{
    int bulls = 0;
    for (int i = 0; i < 4; i++) {
        if (generated[i] == user_input[i]) {
            bulls++;
        }
    }
    return bulls;
}

int cows(int generated[], int user_input[])
{
    int cows = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0;j < 4; j++) {
            if (generated[i] == user_input[j] && i != j)
                cows++;
        }
    }
    return cows;
}
