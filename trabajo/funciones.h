#include <stdio.h>
void imprimir_tablero(int matriz[][10],int fila,int columna); // Representa el tablero por pantalla
void partida(int tablero[][10],int coord_x,int coord_y); // Inicia la partida con un bucle hasta que llega al final
void puede_mover(int tablero[][10],int *fin,int*coord_x,int*coord_yl); //Recoge por teclado donde quiere mover el jugador y si puede mover o ha llegado al final
void refrescar_tablero(int tablero[][10],int coord_x,int coord_y);// Despues de cada movimiento refresca el tablero .
void posicion(int tablero[][10],int coord_x,int coord_y); // Indica la posición del jugador en el tablero.
