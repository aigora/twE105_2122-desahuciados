#include <stdio.h>
void imprimir_tablero(char matriz[10],int fila);

//void mover
int main (){
    int i,j;
    char laberintofacil[10]={
    {0,0,0,0,0,0,0,0,0,0},
    {0,2,1,1,0,0,1,1,1,0},
    {0,0,0,1,1,1,1,1,0,0},
    {0,1,1,1,1,1,0,1,0,1},
    {0,1,0,0,0,0,0,1,0,1},
    {0,1,1,0,0,1,1,1,0,0},
    {0,0,1,0,0,1,0,0,0,0},
    {0,0,1,1,0,1,0,0,0,0},
    {0,0,0,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0}};
    imprimir_tablero(laberintofacil,10);


}
void imprimir_tablero(char matriz[10],int fila){

   int i;
    for(i=0;i<fila;i++){


            printf("%d ",matriz[i]);

        }
        printf("\n");
    }


