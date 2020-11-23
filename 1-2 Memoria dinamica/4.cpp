#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//Programa que multiplica dos matrices dinamicas (int)
	
int **llenar(int f, int c){
	srand(time(NULL));
	int **mat = new int *[f];
	for(int i = 0; i < f; i++){
		mat[i] = new int[c];
	}
	//llenar
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			mat[i][j] = 1 + rand() % (10-1);
		}
	}
	return mat;
}
void imprimir(int **mat, int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int **multiplicar_mat(int **m1, int **m2, int f1, int c1, int f2, int c2){
	int **res = new int*[f1];
	for(int i = 0; i < f1; i++){
		res[i] = new int[c2];
	}
	for(int i = 0; i < f1; i++){
		for(int j = 0; j < c2; j++){
			res[i][j] = 0;
			for(int m = 0; m < c1; m++){
				res[i][j] += m1[i][m] * m2[m][j];
			}
		}
	}
	return res;
}
int main(int argc, char *argv[]){ 
	int **matriz1,**matriz2,**resultante,f1,c1,f2,c2;
	cout<<"Matriz 1 --> "<<endl;
	cout<<"Leer filas de la matriz 1: ";
	cin>>f1;
	cout<<"Leer columnas de la matriz 1: ";
	cin>>c1;
	cout<<"Matriz 2 --> "<<endl;
	cout<<"Leer filas de la matriz 2: ";
	cin>>f2;
	cout<<"Leer columnas de la matriz 2: ";
	cin>>c2;
	if(c1 == f2){
		matriz1 = llenar(f1,c1);
		matriz2 = llenar(f2,c2);
		cout<<"Matriz 1: "<<endl;
		imprimir(matriz1,f1,c1);
		cout<<"Matriz 2: "<<endl;
		imprimir(matriz2,f2,c2);
		resultante = multiplicar_mat(matriz1,matriz2,f1,c1,f2,c2);
		cout<<" Matriz resultante: "<<endl;
		imprimir(resultante,f1,c2);
	}else{
		cout<<"No se pueden multiplicar las matrices "<<endl;
	}
	delete matriz1;
	delete matriz2;
	delete resultante;
	return 0;
}
