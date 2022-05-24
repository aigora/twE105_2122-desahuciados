#include"funciones.h"
void imprimir_tablero(char matriz[][24],int fila,int columna){


int i,j;
for(i = 0; i < fila; i++){
    for(j = 0; j < columna; j++){
    if (matriz[i][j]==0){
        matriz[i][j]='#';
    }
    if(matriz[i][j]==1){
        matriz[i][j]=' ';
    }
printf ("%c ",matriz[i][j]);
}
printf("\n");
}

}

