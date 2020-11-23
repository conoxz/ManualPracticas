#include <iostream>

using namespace std;
int main(int argc, char *argv[]){
	//Programa que imprime n numeros primos dado un numero de entrada
	int numero;
	cout<<"Leer numero: ";
	cin>>numero;
	for(int i = 1; i <= numero; i++){
		int cont = 0;
		for(int j = 1; j <= i; j++){
			if( i%j == 0){ //Modulo, un numero es primo si se divide entre 1 y si mismo
				cont++;
			}
		}
		if(cont == 2){ //Si se dividió solo dos veces es numero primo
			cout<<"Primo -> "<<i<<endl;
		}
	}
	
	return 0;
}
