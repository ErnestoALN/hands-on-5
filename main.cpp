/*
Autor: Ernesto Alonso Flores Nuño
Fecha: ultima actualización: 12/10/2021
profesor: José Antonio Aviña Méndez
Programa: Hands-on 4
*/

#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926536
using namespace std;

void translacion_2D (char x1, char x2, char y1, char y2){
	cout << "R => (" << x1+x2 << "," << y1+y2 << ")" << endl; 
}

void rotacion_2D (char x1, char a, char y1){
	float rad, cs, sn, x, y;
	if (a < 0){
	rad = a*PI/180;
	cs = cos(rad);
	sn = sin(rad);
	x = x1 * cs - y1 * sn; 
	y = x1 * sn + y1 * cs;
	cout <<" x = " << x << endl;
	cout <<" y = " << y  << endl;
cout << "R => (" << x << "," << y << ")" << endl;
	}else{
	rad = a*PI/180;
	cs = cos(rad);
	sn = sin(rad);
	x = x1 * cs - y1 * sn; 
	y = x1 * sn + y1 * cs;
	cout <<" x = " << x << endl;
	cout <<" y = " << y  << endl;
cout << "R => (" << x << "," << y << ")" << endl;
	}
}

void info (){
	cout << "Autor: Ernesto Alonso Flores Nuño" << endl;
	cout << "Clase: Calculo vectorial " << endl;
	cout << "Maestro: Jose Antonio Aviña Mendez " << endl;
}


//menú de opciones
int main(int argc, char *argv[]){ 

//agrc: obtiene el número de argumentos que se escribieron en la linea
//agrv: es un array con todos los argumentos que se escribieron en la linea

int oper = atoi(argv[1]);
  cout << "---------------------------------------" << endl;
  cout << "- ¿Que operacion desea realizar?      -" << endl;
  cout << "- Traslacion de un punto y/o vector 1 -" << endl;
  cout << "- Rotación de un punto y/o vector   2 -" << endl;
  cout << "- informacion extra                 3 -" << endl;
  cout << "---------------------------------------" << endl;
  
 switch(oper) {
    case 1: {
    cout << " " << endl;
  	float x1,y1,x2,y2;
  		x1 = atoi(argv[3]);
 	 	x2 = atoi(argv[8]);
  		y1 = atoi(argv[5]);
  		y2 = atoi(argv[10]);
  	cout << "Translacion de vectores 2D" << endl;
  	cout << "Translacion: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;
    translacion_2D(atoi(argv[3]), atoi(argv[8]), atoi(argv[5]) , atoi(argv[10]));
}
   break;
      case 2:{
    cout << " " << endl;
	float x1,y1,a;
  		x1 = atoi(argv[3]);
 	 	a = atoi(argv[8]);
  		y1 = atoi(argv[5]);
	
  	cout << "Rotacion de vectores 2D" << endl;
  	cout << "Rotacion: " << endl;
  	cout <<	"(" << x1 << ") ( Cos " << a << " -Sen " << a << ") " << endl;
	cout <<	"(" << y1 << ") ( Sen " << a << "  Cos " << a <<") " << endl;
    rotacion_2D(atoi(argv[3]), atoi(argv[8]),  atoi(argv[5]) );
}
    break;
    case 3:{
    cout << " " << endl;
	info();
	}
    break;
}
}