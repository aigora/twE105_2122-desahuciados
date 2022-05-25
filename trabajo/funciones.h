#include <stdio.h>
void imprimir_tablero(int matriz[][10],int fila,int columna); // Representa el tablero por pantalla
void partida(int tablero[][10],int coord_x,int coord_y); // Inicia la partida con un bucle hasta que llega al final
void puede_mover(int tablero[][10],int *fin,int*coord_x,int*coord_yl); //Recoge por teclado donde quiere mover el jugador y si puede mover o ha llegado al final
void refrescar_tablero(int tablero[][10],int coord_x,int coord_y);// Despues de cada movimiento refresca el tablero .
void posicion(int tablero[][10],int coord_x,int coord_y); // Indica la posición del jugador en el tablero


//Funciones para tablero de dificultad media. Para ponerle el 16 y que no nos de fallos al sacarlo por `pantalla, es pocco ortodoxo debido a la repeticion
// pero asi no tengo que utilizar variables globales ni matrices dinámicas porque no se hacerlas. A parte cambio los simbolos del laberinto para darle
// variedad y creatividad al juego.

void imprimir_tablero2(int matriz[][16],int fila,int columna);
void partida2(int tablero[][16],int coord_x,int coord_y);
void puede_mover2(int tablero[][16],int *fin,int*coord_x,int*coord_yl);
void refrescar_tablero2(int tablero[][16],int coord_x,int coord_y);
void posicion2(int tablero[][16],int coord_x,int coord_y);

//Funciones para tablero de didicultad dificil. (Hago lo mismo pero con 24 y otros simbolos).

void imprimir_tablero3(int matriz[][24],int fila,int columna);
void partida3(int tablero[][24],int coord_x,int coord_y);
void puede_mover3(int tablero[][24],int *fin,int*coord_x,int*coord_yl);
void refrescar_tablero3(int tablero[][24],int coord_x,int coord_y);
void posicion3(int tablero[][24],int coord_x,int coord_y);
