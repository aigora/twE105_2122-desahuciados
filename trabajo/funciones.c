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
void puede_mover(int tablero[][24],int *fin,int*coord_x,int*coord_y){
    //El jugador puede moverse con las teclas  awsd AWSD.
    char tecla; //información que introduce el jugador por teclado
    if(tablero[*coord_x][*coord_y]!='#'){
           // Miro si ha llegado a la salida
            if(tablero[*coord_y+1][*coord_x+1]=='2');
           *fin=0;

    }
   else {
       do{
            scanf("%c",&tecla);
       }
        while((tecla != 'a' )&& (tecla != 'w') && (tecla != 's' )&& (tecla != 'd')&& (tecla != 'A')&&(tecla != 'W') && (tecla != 'S') && (tecla != 'D' ));
//moverse arriba W
        if((tecla=='w')||(tecla=='W'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_y=*coord_y -1 ;
          //como se mueve arriba solo cambiamos y

          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_y=*coord_y +1 ;}
          }
//Moverse abajo S
        if((tecla=='s')||(tecla=='S'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_y=*coord_y +1 ;
          //como se mueve abajo solo cambiamos y

          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_y=*coord_y -1 ;}
   }
//moverse derecha  D
       if((tecla=='d')||(tecla=='D'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';

          } *coord_x= *coord_x +1 ;

        //como se mueve a la derecha solo cambiamos x

          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_x=*coord_x -1 ;}
          }
//Moverse izquierda A
        if((tecla=='a')||(tecla=='A'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_x=*coord_x -1 ;
          //como se mueve a la izquierda solo cambiamos x


          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_x=*coord_x +1 ;}
}}}
//void partida(int tablero[][],int coord_x;coord_y,int final){
    //_Bool final;
    //do{
     //   imprimir_tablero//sacar por pantalla
        //puede mover???
        //refrescar el tablero
   // }while(final)
//}
void refrescar_tablero(int tablero[][24],int coord_x,int coord_y){
posicion(tablero,coord_x,coord_y);
}
void posicion(int tablero[][16],int coord_x,int coord_y){
   tablero[coord_y][coord_x]='$'; //Lugar de donde empezamos el laberinto,y se vera con un $.
}

