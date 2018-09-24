#include "random_fill.h"

#include <time.h>
#include <stdlib.h>

void random_fill(int b[], int N)
{
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        while (1) {
            int flag = 0;
            int num = rand() % 10;
            for (int j = 0; j < i; j++) {
                if (b[j] == num) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                b[i] = num;
                break;
            }
        }
    }
}
