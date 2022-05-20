#include <stdio.h>
typedef struct{
    char Nombre[20] ;
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


 Menu para seleccionar el nivel de dificultad
int op;
do{
            printf("Seleccione el nivel de dificultad del laberinto:\n ");
            printf("1. Facil \n");
            printf("2. Medio \n");
            printf("3. Medio \n");
            printf("4. Medio \n");

scanf("%i",&op);
    switch(op)
{
case 1:
printf("Dificultad facil\n");

break;
case 2:
printf("Dificultad media");

break;
case 3:
printf("Dificultad facil\n");
break;
case 4:
printf("Salir");

break;
default:
printf("No ha seleccionado ningun nivel de dificultad, por favor reintentelo...\n");
break;
}

}
while(op!=4);

return 0;
}

