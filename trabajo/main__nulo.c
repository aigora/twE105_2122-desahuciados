#include <stdio.h>
void tablero(int matriz[][24],int fila,int columna);
typedef struct{
    char Nombre[50] ;
    int dificultad;
    int tiempo;
}Datosjugadores;
int main (){
     //Preguntamos al jugador su nombre y lo guardamos en un fichero.
     printf("Introduzca el nombre del jugador.\n");
     char Nombre[50];
//FILE *f;
//f= fopen("datosjugadores.txt","w");
//if(f==NULL){
    //printf("Error al abrir el fichero.\n", "w");
    //return -1;
//}
//else {// Si ha funcionado, comienza escritura
//fprintf(f,"%s", Nombre [50]);
//fclose(f);
//return 0;
//}

//Menu para seleccionar el nivel de dificultad
int op;
do{
            printf("Seleccione el nivel de dificultad del laberinto:\n");
            printf("1. Facil\n");
            printf("2. Medio\n");
            printf("3. Dificil\n");
            printf("4. Salir\n");
//Stashed changes

scanf("%i",&op);
    switch(op)
{
case 1:
printf("Dificultad Facil\n");

break;
case 2:
printf("Dificultad Media");

break;
case 3:
printf("Dificultad Dificil\n");
break;
case 4:
printf("Salir");

break;
default:
printf("No ha seleccionado ningun nivel de dificultad, por favor reintentelo...\n");
break;
}

}
//Updated upstream
while((op!=4)&&(op!=3)&&(op!=2)&&(op!=1));
//
    while ((op!=1)&&(op!=2)&&(op!=3)&&(op!=4));
//Stashed changes

return 0;
}


void tablero(int matriz[][24],int fila,int columna){

int i,j;
_Bool esblanca;//1 es casilla blanca,0 es casilla negra

    int Tablero[9][9]=
    {{0,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,0,0,1,1,1,0,0},
    {0,0,0,1,1,1,1,0,0,0,0},
    {0,1,1,1,1,1,0,1,0,1,0},
    {0,1,0,0,0,0,0,1,0,1,0},
    {0,1,1,0,0,0,0,1,0,0,0},
    {0,0,1,0,0,0,0,1,0,0,0},
    {0,0,1,1,0,0,0,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0}};

for(i = 0; i < 9; i++){
    for(j = 0; j < 9; j++){
    if (j == 0)
printf ("|\t");
else
printf("%d\t " ,Tablero[i][j]);
}
printf("| \n");
}
    int matriz[16][16] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,1,1,0,0,0,1,0,1,0},
        {1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0},
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
        {0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        };
    int filas, columnas;
    // Se recorre como un bucle anidado
    for(filas = 0;filas < 16; filas++){
        for(columnas = 0; columnas < 16; columnas++)
            printf("%d\t", matriz[filas][columnas]);
        printf("\n\n");
    }
}

//Le damos a los laterales del tablero el valor de un booleano 1 que serian las casillas negras, las casillas de la matriz
// con un valor de bool 0 es que la casilla es blanca

