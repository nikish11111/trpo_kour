#include "random_fill.h"

#include <time.h>
#include <stdlib.h>

void random_fill(int arr[])
{
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        while (1) {
            int flag = 0;
            int num = rand() % 10;
            for (int j = 0; j < i; j++) {
                if (arr[j] == num) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                arr[i] = num;
                break;
            }
        }
    }
}
