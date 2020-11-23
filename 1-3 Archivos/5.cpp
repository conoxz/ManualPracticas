#include <iostream>
#include <fstream>
using namespace std;
/*
	Programa que lee una matriz dada por un archivo de texto e imprime su trapuesta
	f c
	m11 m12 ... m1f
	.    .       .
	.    .       .
	.    .       .
	mc1 mc2 ... mfc
*/
int **Asignar(int f, int c){
	int **mat = new int*[f];
	for(int i = 0; i < f; i++){
		mat[i] = new int[c];
	}
	return mat;
}
void Imprimir(int **mat, int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++ ){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int **Trapuesta(int **mat,int f, int c){
	int **tra = Asignar(f,c);
	for(int i = 0; i < f; i++){
			for(int j = 0; j < c; j++ ){
				tra[i][j] = mat[j][i];
			}
		}
	return tra;
}
int main(){
	ifstream fe("matriz.txt"); 
	int f,c,**mat,**tra;
	string cad;
	if(fe.is_open()){
		fe>>f;
		fe>>c;
		mat = Asignar(f,c);
		for(int i = 0; i < f; i++){
			for(int j = 0; j < c; j++ ){
				fe>>mat[i][j];
			}
		}
		cout<<"Matriz del Archivo "<<endl;
		Imprimir(mat,f,c);
		tra = Trapuesta(mat,c,f);
		cout<<"Trapuesta "<<endl;
		Imprimir(tra,c,f);
	}
	
	fe.close();
	return 0;
}
