#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]){
	//Programa que dada una cadena la imprime al reves
	string cadena,aux = "";
	cout<<"Leer cadena: ";
	cin>>cadena;
	for(int i = 0; i < cadena.length(); i++){
		aux += cadena[(cadena.length()-1) - i]; //Reversa 
	}
	cout<<"Cadena al reves: "<<aux;
	return 0;
}
