#ifndef ECAPEROOM_H
#define ECAPEROOM_H

void imprimirConRetraso(const char *texto, int retraso);
void mostrarRoom(char room[30][30]);
void mostrarMapa(char map[53][60]);
void moverPersonaje(char map[53][60], int *posX, int *posY);
extern char map[53][60];

#endif