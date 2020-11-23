#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 
//Programa que llena una matriz dinamica con f filas y c columnas y la llena de numeros aleatorios e imprimirla con funciones 
int **llenar_matriz(int f, int c){
	srand(time(NULL));
	//Asignar memoria
	int **mat = new int *[f];
	for(int i = 0; i < f; i++){
		mat[i] = new int[c];
	}
	//Llenar matriz
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			mat[i][j] = 1 + rand() % (101-1); //de 1 a 100
		}
	}
	return mat;
}

void imprimir(int **mat,int f, int c){ //imprime la matriz
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(int argc, char *argv[]){
	int **mat,f,c;
	cout<<"Leer filas: ";
	cin>>f;
	cout<<"Leer columnas: ";
	cin>>c;
	mat = llenar_matriz(f,c); //Asignacion de la memoria por medio de la funcion llamada
	imprimir(mat,f,c);
	delete mat;
	return 0;
}
