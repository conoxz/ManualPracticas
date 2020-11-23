#include <iostream>

using namespace std;
int main(int argc, char *argv[]){
	//Programa que calcula la serie de fibonacci n veces (numero dado)
	int numero,aux;
	int primero = 0;
	int segundo = 1;
	cout<<"Leer numero: ";
	cin>>numero;
	cout<<primero<<" "<<segundo<<" ";
	for(int i = 0; i < numero-2; i++){
		aux = primero + segundo;
		cout<<aux<<" ";
		primero = segundo;
		segundo = aux;
	}
	return 0;
}
