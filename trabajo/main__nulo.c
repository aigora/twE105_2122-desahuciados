#include <stdio.h>
#include<math.h>
#include<string.h>
#include "funciones.h"

typedef struct{
    char Nombre[50] ;
    int dificultad;
    char Comentario[50];
}Datosjugadores;
int main (){

       int i,j; //Variables para bucles
    //Coordenadas del jugador x e y para moverse por el tablero
     int coord_x=1;
     int coord_y=1;


     //Preguntamos al jugador su nombre y lo guardamos en un fichero.

     printf("Introduzca el nombre del jugador.\n");

     char Nombre[50];

FILE *f;
f= fopen("datosjugadores.txt","w");
if(f==NULL){
    printf("Error al abrir el fichero.\n", "w");
  return -1;
}
else {// Si ha funcionado, comienza escritura
fgets(Nombre,50,stdin);
fprintf(f,"El nombre introducido es :%s",Nombre);
fclose(f);
system("pause");

}

//Menu para seleccionar el nivel de dificultad
int op;
do{
            printf("Seleccione el nivel de dificultad del laberinto:\n");
            printf("1. Facil\n");
            printf("2. Medio\n");
            printf("3. Dificil\n");
            printf("4. Salir\n");


scanf("%i",&op);
    switch(op)
{


    //Le damos a los laterales del tablero el valor de 0 y  1 que serian el camino,


case 1:
printf("Dificultad Facil\n");
int Tablero_facil[10][10]={
    {0,0,0,0,0,0,0,0,0,'\0'},
    {0,1,1,1,0,0,1,1,1,'\0'},// empezaría en el primer uno, es decir en la posición (1,1)
    {0,0,0,1,1,1,1,1,0,'\0'},
    {0,1,1,1,1,0,0,1,0,'\0'},
    {0,1,0,0,0,0,0,1,0,'\0'},
    {0,1,1,0,0,0,0,1,0,'\0'},
    {0,0,1,0,0,0,0,1,0,'\0'},
    {0,0,1,1,1,0,0,1,2,'\0'},
    {0,0,0,0,0,0,0,0,0,'f'}};
    printf("\n");
    int coord_x= 1;
    int coord_y= 1;


    posicion(Tablero_facil,coord_x,coord_y);
    partida(Tablero_facil,coord_x,coord_y);


break;
case 2:
printf("Dificultad Media");
int Tablero_medio[16][16] = {
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'\0'},
       {0,0,0,1,0,0,0,1,1,0,0,0,1,0,1,'\0'},
       {0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,'\0'},
       {0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,'\0'},
       {0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,'\0'},
       {0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,'\0'},
       {0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,'\0'},
       {0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,'\0'},
       {0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,'\0'},
       {0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,'\0'},
       {0,1,1,1,1,1,1,1,0,1,1,0,1,1,1,'\0'},
       {0,1,0,0,0,0,0,0,0,1,0,0,1,0,1,'\0'},
       {0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,'\0'},
       {0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,'\0'},
       {0,1,1,1,1,1,1,1,1,1,1,1,1,0,2,'\0'},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'\0'}};
    printf("\n");
    int coord_x3= 1;
    int coord_y3= 1;


    imprimir_tablero(Tablero_facil,10,10);
    posicion(Tablero_facil,coord_x,coord_y);
    partida(Tablero_facil,coord_x,coord_y);

break;
case 3:
printf("Dificultad Dificil\n");
int Tablero_dificil[24][24] = {
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0},
    {0,1,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0},
    {0,1,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,0,1,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0},
    {1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0},
    {0,0,1,1,1,1,0,0,1,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0},
    {0,0,1,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0},
    {0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1},
    {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0},
    {0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,1,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,1,1,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,1,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
    {0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,2,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    };
     printf("\n");
     int coord_x2= 1;
     int coord_y2= 1;



    imprimir_tablero(Tablero_dificil,24,24);

break;
case 4:
printf("Salir");

break;
default:
printf("No ha seleccionado ningun nivel de dificultad, por favor reintentelo...\n");
break;
}

}

while((op!=4)&&(op!=3)&&(op!=2)&&(op!=1));

return 0;
}





