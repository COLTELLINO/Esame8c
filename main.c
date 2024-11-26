#include <stdio.h>
#include "topolino.h"

int main() {
    int Q[N][N] = {
        {10, 11, 12, 13, 14},
        { 9,  8,  7,  6, 15},
        { 2,  3,  4,  5, 16},
        { 1,  0,  1,  2, 17},
        { 2,  1,  2,  3, 18}
    };

    int startX = 2;
    int startY = 2;

    simulateMouseMovement(Q, startX, startY);

    return 0;
}
