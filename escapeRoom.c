#include "escapeRoom.h"
#include <stdio.h>
#include <unistd.h>

/*FUNCION DE MOSTRAR LAS HABITACIONES*/

void mostrarRoom(char room[30][30]){
    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            if (room[i][j] == '#') {
                printf("\033[33m%c\033[0m ", room[i][j]); 
            } else if (room[i][j] == '*') {
                printf("\033[33m%c\033[0m ", room[i][j]);
            } else if (room[i][j] == '|' || room[i][j] == '_') {
                printf("\033[36m%c\033[0m ", room[i][j]);
            } else if (room[i][j] == 'O') {
                printf("\033[35m%c\033[0m ", room[i][j]);
            } else if (room[i][j] == '+') {
                printf("\033[30m%c\033[0m ", room[i][j]);
            } else {
                printf("%c ", room[i][j]); 
            }
        }
        printf("\n");
    }
}

/*FUNCION DE MOSTRAR EL MAPA PRINCIPAL DEL JUEGO*/

void mostrarMapa(char map[53ls][60]){
    for(int i = 0; i < 53; i++){
        for(int j = 0; j < 60; j++){
            if (map[i][j] == '#') {
                printf("\033[33m%c\033[0m ", map[i][j]); 
            } else if (map[i][j] == '*') {
                printf("\033[33m%c\033[0m ", map[i][j]);
            } else if (map[i][j] == '|' || map[i][j] == '_') {
                printf("\033[36m%c\033[0m ", map[i][j]);
            } else if (map[i][j] == 'O') {
                printf("\033[35m%c\033[0m ", map[i][j]);
            } else if (map[i][j] == '+') {
                printf("\033[30m%c\033[0m ", map[i][j]);
            } else {
                printf("%c ", map[i][j]); 
            }
        }
        printf("\n");
    }
 
}

/*FUNCION DE IMPRIMIR EL TEXTO DE MANERA PROGRESIVA*/

void imprimirConRetraso(const char *texto, int retraso) {
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
        fflush(stdout);  
        usleep(retraso); 
    }
    printf("\n");
}

/*FUNCION DE MOVIMIENTO*/

void moverPersonaje(char map[53][60], int *posX, int *posY) {
    char tecla;

    while (1) {
        printf("Introduce un movimiento (W, A, S, D) y presiona Enter: ");
        scanf(" %c", &tecla); 
        
        map[*posX][*posY] = ' ';

        if (tecla == 'w' && *posX > 0) *posX -= 1; 
        if (tecla == 's' && *posX < 59) *posX += 1;
        if (tecla == 'a' && *posY > 0) *posY -= 1; 
        if (tecla == 'd' && *posY < 59) *posY += 1;

        
        map[*posX][*posY] = 'O'; 

       
        mostrarMapa(map);
    }
}