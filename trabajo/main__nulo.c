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
typedef struct{
    char Nombre[50];
    char Dificultad[50];
}Datosjugadores;





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






//Menu para seleccionar el nivel de dificultad
int op;

do {
            printf("Seleccione el nivel de dificultad del laberinto:\n");
            printf("1. Facil\n");
            printf("2. Medio\n");
            printf("3. Dificil\n");
            printf("4. Salir\n");
            printf("5. Jugadores anteriores\n");

scanf("%i",&op);
    switch(op)
{


    //Le damos a los laterales del tablero el valor de 0 y  1 que serian el camino,


case 1:
printf("Dificultad Facil\n");
int Tablero_facil[10][10]={
    {0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,0,0,1,1,1,0},// empezar�a en el primer uno, es decir en la posici�n (1,1)
    {0,0,0,1,1,1,1,1,0,0},
    {0,1,1,1,1,0,0,1,0,0},
    {0,1,0,0,0,0,0,1,0,0},
    {0,1,1,0,0,0,0,1,0,0},
    {0,0,1,0,0,0,0,1,0,0},
    {0,0,1,1,1,0,0,1,2,0},
    {0,0,0,0,0,0,0,0,0,'f'}};
    printf("\n");
    //int coord_x1= 1;       //Coordenadas del jugador x e y para moverse por el tablero
    //int coord_y1= 1;


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
   // int coord_x2= 1;    //Coordenadas del jugador x e y para moverse por el tablero
   // int coord_y2= 2;

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
    // int coord_x3= 1; //Coordenadas del jugador x e y para moverse por el tablero
    // int coord_y3= 1;

    posicion3(Tablero_dificil,TAB3.coord_x,TAB3.coord_y);
    partida3(Tablero_dificil,TAB3.coord_x,TAB3.coord_y);




break;
case 4:
printf("Salir");

break;
case 5:
printf("Jugadores de partidas anteriores:\n");

break;
default:
printf("No ha seleccionado ningun nivel de dificultad, por favor reintentelo...\n");
break;
}

}

while((op!=5)&&(op!=4)&&(op!=3)&&(op!=2)&&(op!=1));



Datosjugadores Datosjug;
    int n=0;
    char aux;
    int i,j; //Variables para bucles
    fgets(Datosjug.Nombre,50,stdin);
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
        fgets(Datosjug.Nombre,50,stdin);
fprintf(Datosjug.Nombre,50,stdin);
if(op=1){
    fprintf(TAB1.Dificultad,50,stdin);
}
if(op=2){
    fprintf(TAB2.Dificultad,50,stdin);
}
if(op=3){
    fprintf(TAB3.Dificultad,50,stdin);
}


fclose(f);
//system("pause");





return 0;
}
}




