#ifndef TOPOLINO_H
#define TOPOLINO_H

#define N 5 // Definizione della dimensione della matrice

int isValid(int x, int y);

void nextMove(int Q[N][N], int x, int y, int* nextX, int* nextY);

void simulateMouseMovement(int Q[N][N], int startX, int startY);


#endif
