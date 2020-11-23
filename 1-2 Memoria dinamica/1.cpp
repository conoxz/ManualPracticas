#include <iostream>
#include <ctime>
#include <cstdlib>
//Programa que ingresa n numeros al azar entre 1 y 100 y los mete en un array dinamico y los imprime con función

using namespace std; 
int *meter_numeros(int n){ //función que mete numeros aleatorios
	srand(time(NULL));
	int *v = new int[n]; //Declaración de array dinamico con n casillas
	for(int i = 0; i < n; i++){
		v[i] = 1 + rand() % (101-1);
	}
	return v;
}
void imprimir(int n, int *v){ //Imprime un array dinamico
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}
}
int main(int argc, char *argv[]){
	int *v,n; 
	cout<<"Cuantos numeros: ";
	cin>>n;
	v = meter_numeros(n); //Asigna la memoria desde la función llamada
	imprimir(n,v);
	delete v; //Destruye el array
	return 0;
}
