#include <iostream>
#include <fstream>
/* 
	Programa que lee 2 matrices de enteros dadas por un archivo de texto y las multiplica (si es posible)
	f c
	m11 m12 ... m1f
	.    .       .
	.    .       .
	.    .       .
	mc1 mc2 ... mfc	
	f2 c2
	x11 x12 ... x2f2
	.    .       . 
	.    .       .
	.    .       .
	xc21 xc2 ... xf2c2
*/
using namespace std;

int **Asignar(int f, int c){
	int **mat = new int*[f];
	for(int i = 0; i < f; i++)
		mat[i] = new int[c];
	return mat;
}
void Imprimir(int **mat,int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

int **Multiplicar(int **m1,int **m2,int f1,int c1,int f2, int c2){
	int **mult = Asignar(f1,c2);
	for(int i = 0; i < f1; i++){
		for(int j = 0; j < c2; j++){
			mult[i][j] = 0;
			for(int m = 0; m < c1; m++){
				mult[i][j] += m1[i][m]*m2[m][j];
			}
		}
	}
	return mult;
}

int main(){
	int **m1,**m2,**mult,f1,c1,f2,c2;
	ifstream fe("matri2.txt");
	fe>>f1;
	fe>>c1;
	m1 = Asignar(f1,c1); //Primer matriz
	for(int i = 0; i < f1; i++){
		for(int j = 0; j < c1; j++){
			fe>>m1[i][j];
		}
	}
	fe>>f2;
	fe>>c2;
	m2 = Asignar(f2,c2);
	for(int i = 0; i < f2; i++){ //Segunda Matriz
		for(int j = 0; j < c2; j++){
			fe>>m2[i][j];
		}
	}
	if( c1 == f2){
		mult = Multiplicar(m1,m2,f1,c1,f2,c2);
		cout<<"Matriz 1: "<<endl;
		Imprimir(m1,f1,c1);
		cout<<"Matriz 2: "<<endl;
		Imprimir(m2,f2,c2);
		cout<<"Resultante: "<<endl;
		Imprimir(mult,f1,c2);
	}else{
		cout<<"no se puede multiplicar ";
	}
	
	return 0;
}
