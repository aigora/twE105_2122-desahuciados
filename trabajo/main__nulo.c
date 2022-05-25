#include <stdio.h>
#include<math.h>
#include<string.h>
#include "funciones.h"


typedef struct{
    char Dificultad[50];
    int coord_x;
    int coord_y;
    char Introduccion[50];
}DatosTablero;





int main (){
    DatosTablero TAB1,TAB2,TAB3;
    TAB1.coord_x =1;
    TAB1.coord_y =1;
    strcpy(TAB1.Dificultad,"Facil");

    TAB2.coord_x =1;
    TAB2.coord_y =2;
    strcpy(TAB1.Dificultad,"Medio");
    TAB3.coord_x =1;
    TAB3.coord_y =1;
    strcpy(TAB1.Dificultad,"Dificil");




    int i,j; //Variables para bucles

     //Preguntamos al jugador su nombre y lo guardamos en un fichero.

     printf("Introduzca el nombre del jugador.\n");

    char Nombre[50];

FILE *f;
f= fopen(".txt","w");
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
    {0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,0,0,1,1,1,0},// empezaría en el primer uno, es decir en la posición (1,1)
    {0,0,0,1,1,1,1,1,0,0},
    {0,1,1,1,1,0,0,1,0,0},
    {0,1,0,0,0,0,0,1,0,0},
    {0,1,1,0,0,0,0,1,0,0},
    {0,0,1,0,0,0,0,1,0,0},
    {0,0,1,1,1,0,0,1,2,0},
    {0,0,0,0,0,0,0,0,0,'f'}};
    printf("\n");
    //int coord_x= 1;       //Coordenadas del jugador x e y para moverse por el tablero
    //int coord_y= 1;


    posicion(Tablero_facil,TAB1.coord_x,TAB1.coord_y);
    partida(Tablero_facil,TAB1.coord_x,TAB1.coord_y);


break;
case 2:
printf("Dificultad Media");
int Tablero_medio[16][16] = {
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,1,0,0,0,1,1,0,0,0,1,0,1,0},
       {0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0},
       {0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0},
       {0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0},
       {0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,0},
       {0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0},
       {0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0},
       {0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0},
       {0,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0},
       {0,1,0,0,0,0,0,0,0,1,0,0,1,0,1,0},
       {0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,0},
       {0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0},
       {0,1,1,1,1,1,1,1,1,1,1,1,1,0,2,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'f'}};

    printf("\n");
   // int coord_x1= 1;    //Coordenadas del jugador x e y para moverse por el tablero
   // int coord_y1= 2;

    posicion2(Tablero_medio,TAB2.coord_x,TAB2.coord_y);
    partida2(Tablero_medio,TAB2.coord_x,TAB2.coord_y);

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
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'f'},
    };
     printf("\n");
    // int coord_x2= 1; //Coordenadas del jugador x e y para moverse por el tablero
    // int coord_y2= 1;

    posicion3(Tablero_dificil,TAB3.coord_x,TAB3.coord_y);
    partida3(Tablero_dificil,TAB3.coord_x,TAB3.coord_y);




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





