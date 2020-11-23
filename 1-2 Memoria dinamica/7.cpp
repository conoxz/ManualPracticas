#include <iostream>

using namespace std;
/* 
	Traspuesta de una matriz dada por el usuario	
*/
int **Asignar(int f, int c){
	int **mat = new int*[f];
	for(int i = 0;  i < f; i++)
		mat[i] = new int[c];
	return mat;
}
int **Traspuesta(int **mat, int f, int c){
	int **tra = Asignar(c,f);
	for(int i = 0; i < c; i++){
		for(int j = 0; j < f; j++){
			tra[i][j] = mat[j][i];
		}
	}
	return tra;
}
void Imprimir(int **mat, int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(int argc, char *argv[]){
	int **mat,**tra,f,c;
	cout<<"Leer filas: ";
	cin>>f;
	cout<<"Leer columnas: ";
	cin>>c;
	mat = Asignar(f,c);
	//Leer numeros
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout<<"Leer numero: ";
			cin>>mat[i][j];
		}
	}
	tra = Traspuesta(mat,f,c);
	cout<<"Matriz dada: "<<endl;
	Imprimir(mat,f,c);
	cout<<"Traspuesta: "<<endl;
	Imprimir(tra,c,f);
}
