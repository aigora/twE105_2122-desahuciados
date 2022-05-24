#include"funciones.h"
void imprimir_tablero(int matriz[][24],int fila,int columna){
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
void puede_mover(int tablero[][24],int*coord_x,int*coord_y,int fin){
    //El jugador puede moverse con las teclas  awsd AWSD.
    char tecla; //información que introduce el jugador por teclado
    if(tablero[*coord_x][*coord_y]!='#'){
           // Miro si ha llegado a la salida
            if(tablero[*coord_x+1][*coord_y]=='2');
           int fin=0;

    }
   else {
       do{
            scanf("%c",&tecla);
       }
        while((tecla != 'a' )&& (tecla != 'w') && (tecla != 's' )&& (tecla != 'd')&& (tecla != 'A')&&(tecla != 'W') && (tecla != 'S') && (tecla != 'D' ));

       if((tecla=='d')||(tecla=='D')) //moverse izquierda
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_x=*coord_x +1 ;
        //como se mueve a la derecha solo cambiamos x
          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_x=*coord_x +1 ;}
          }
   }}

//Movimiento derecha
//izquierda
//arriba
//abajo
  //  }
//}
//void partida(int tablero[][],int coord_x;coord_y,int final){
    //_Bool final;
    //do{
     //   imprimir_tablero//sacar por pantalla
        //puede mover???
        //refrescar el tablero
   // }while(final)
//}
//void refrescar_tablero(int tablero[][],int coord_x,int coord_y);
void posicion(int tablero[][16],int coord_x,int coord_y){
   tablero[coord_y][coord_x]='$'; //Lugar de donde empezamos el laberinto,y se vera con un $.
}

