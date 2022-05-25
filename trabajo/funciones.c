#include"funciones.h"
void imprimir_tablero(int matriz[][10],int fila,int columna){
system("cls");
int i,j;
for(i = 0; i < fila; i++){
    for(j = 0; j < columna; j++){
    if (matriz[i][j]==0){
        matriz[i][j]='#';
    }
    if(matriz[i][j]==1){
        matriz[i][j]=' ';
    }
    if(matriz[i][j]==2){
        matriz[i][j]='€';
    }
printf ("%c ",matriz[i][j]);
}
printf("\n");

}

}
void puede_mover(int tablero[][10],int *fin,int*coord_x,int*coord_y){
    //El jugador puede moverse con las teclas  awsd AWSD.
    char movimiento; //información que introduce el jugador por teclado
    if(tablero[*coord_y][*coord_x]!='#'){
           // Miro si ha llegado a la salida
            if(tablero[*coord_y+1][*coord_x+1]=='f'){//El dos representaría la salida.                  /// Problema
                *fin = 1;
    }
   else {
       do{
            scanf("%c",&movimiento);

       }
        while((movimiento != 'a' )&& (movimiento != 'w') && (movimiento != 's' )&& (movimiento != 'd')&& (movimiento != 'A')&&(movimiento != 'W') && (movimiento != 'S') && (movimiento != 'D' ));
//moverse arriba W
        if((movimiento=='w')||(movimiento=='W'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_y=*coord_y -1 ;
          //como se mueve arriba solo cambiamos y

          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_y=*coord_y +1 ;}
          }
//Moverse abajo S
        if((movimiento=='s')||(movimiento=='S'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_y=*coord_y +1 ;
          //como se mueve abajo solo cambiamos y

          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_y=*coord_y -1 ;}
   }
//moverse derecha  D
       if((movimiento=='d')||(movimiento=='D')){
           if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] =' ';             //ojo

          } *coord_x= *coord_x +1 ;

        //como se mueve a la derecha solo cambiamos x



          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes        //ojo
                  *coord_x=*coord_x -1 ;}
          }
//Moverse izquierda A
        if((movimiento=='a')||(movimiento=='A'))
          { if(tablero[*coord_y][*coord_x] == '$'){
                  tablero[*coord_y][*coord_x] = ' ';
          } *coord_x=*coord_x -1 ;
          //como se mueve a la izquierda solo cambiamos x


          if(tablero[*coord_y][*coord_x] == '#'){ //si encuentra un # vuelve donde antes
                  *coord_x=*coord_x +1 ;}
}}}}
void partida(int tablero[][10],int coord_x,int coord_y){
    //_Bool final;
    int fin;
    fin= 0;
    do{
     //  imprimir_tablero//sacar por pantalla
     imprimir_tablero(tablero,10,10);
        //puede mover??? y cambia simbolos del tablero
    puede_mover(tablero,&fin,&coord_x,&coord_y);
        //refrescar el tablero
        refrescar_tablero(tablero,coord_x,coord_y);
   }while(fin ==0);
}
void refrescar_tablero(int tablero[][10],int coord_x,int coord_y){
posicion(tablero,coord_x,coord_y);
}
void posicion(int tablero[][10],int coord_x,int coord_y){
   tablero[coord_y][coord_x]='$'; //Lugar de donde empezamos el laberinto,y se vera con un $.
}

