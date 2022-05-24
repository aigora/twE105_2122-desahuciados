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
//void puede_mover(int [][],int*coord_x,int*coord_y,_bool final){
    //El jugador puede moverse con las teclas  awsd AWSD.
    //char tecla; //información que introduce el jugador por teclado
   // if(tablero[*coord_x][*coord_y]!='#'){
            //Miro si ha llegado a la salida
          //  if(tablero[*coord_x+1][*coord_y]=='2')
           // _Bool final;

  //  }
  //  else {
      //  do{
       //     scanf("%c",&tecla);
      //  } while(tecla != 'a' && tecla != 'w' && tecla != 's' && tecla != 'd'&& tecla != 'A'tecla != 'W' && tecla != 'S' && tecla != 'D' )
//Movimiento derecha
//izquierda
//arriba
//abajo
  //  }
//}
//void partida(int tablero[][],int coord_x;coord_y,bool final){
    //_Bool final;
    //do{
     //   imprimir_tablero//sacar por pantalla
        //puede mover???
        //refrescar el tablero
   // }while(final)
//}
//void refrescar_tablero(int tablero[][],int coord_x,int coord_y);

