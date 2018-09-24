#include "get_input.h"

#include <stdio.h>

int check_input(char char_array[])
{
    if (char_array[4] != '\0') {
        return 1;
    }
    for (int i = 0; i < 4; i++) {
        if (char_array[i] < '0' || char_array[i] > '9') {
            return 1;
        }
    }
    return 0;
}

int check_repeats(char char_array[])
{
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (char_array[i] == char_array[j]) {
                return 1;
            }
        }
    }
    return 0;
}

void get_input(int get_input[])
{
    char char_array[5];
    while(1) {
        printf("input number\n");
        scanf("%s", char_array);
        if (check_input(char_array) || check_repeats(char_array)) {
            printf("wrong input, please try again\n\n");
        } else {
            break;
        }
    }
}