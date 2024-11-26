#include <stdio.h>
#include "topolino.h"

#define N 5 // Dimensione della matrice

int isValid(int x, int y) {
    return (x >= 0 && x < N&& y >= 0 && y < N);
}

void nextMove(int Q[N][N], int x, int y, int* nextX, int* nextY) {
    int maxAltitude = Q[x][y];
    *nextX = x;
    *nextY = y;

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int newX = x + dx;
            int newY = y + dy;

            if (isValid(newX, newY) && Q[newX][newY] > maxAltitude) {
                maxAltitude = Q[newX][newY];
                *nextX = newX;
                *nextY = newY;
            }
        }
    }
}

void simulateMouseMovement(int Q[N][N], int startX, int startY) {
    int currentX = startX;
    int currentY = startY;
    printf("Percorso del topolino:\n");
    printf("(%d, %d)\n", currentX, currentY);

    while (1) {
        int nextX, nextY;
        nextMove(Q, currentX, currentY, &nextX, &nextY);

        if (nextX == currentX && nextY == currentY) {
            printf("Il topolino si ferma.\n");
            break;
        }

        currentX = nextX;
        currentY = nextY;
        printf("(%d, %d)\n", currentX, currentY);
    }
}