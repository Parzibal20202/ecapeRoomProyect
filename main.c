#include <stdio.h>
#include "escapeRoom.h"

int main() {
    char historia1[] = "Sam despierta en una oscura y fría habitación sin recordar cómo llegó allí...\nFrente a él, una pantalla parpadeante muestra un mensaje inquietante...\nBienvenido, Sam. El tiempo corre. Si quieres salir, resuelve los acertijos antes de que sea demasiado tarde...";
    imprimirConRetraso(historia1, 70000); 
    
        extern char map[53][60]; // Usamos `extern` porque el mapa está definido en `mapa.c`
        int posX = 1, posY = 1; // Posición inicial del personaje
    
        // Mostrar el mapa antes de empezar
        mostrarMapa(map);
    
        // Llamar a la función para mover al personaje
        moverPersonaje(map, &posX, &posY);
    
    return 0;
}