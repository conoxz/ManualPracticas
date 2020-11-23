#include <iostream>

using namespace std;
int main(int argc, char *argv[]){
	//Programa que imprime los numeros pares hasta un numero dado
	int numero;
	cout<<"Leer numero: ";
	cin>>numero;
	for(int i = 1; i <= numero; i++){
		if(i%2 == 0){ //Es numero par
			cout<<"Numero par -> "<<i<<endl;
		}
	}
	return 0;
}
