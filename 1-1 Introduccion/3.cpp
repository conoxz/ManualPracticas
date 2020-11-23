#include <iostream>

using namespace std;
int main(int argc, char *argv[]){
	//Programa que calcula el area de un trinagulo dado los datos de entrada
	float base,altura,area;
	cout<<"Leer base del triangulo: ";
	cin>>base;
	cout<<"Leer altura del trinagulo: ";
	cin>>altura;
	area = (base * altura) / 2;  //Formula del trinagulo
	cout<<"El area del trinagulo es: "<<area;
	return 0;
}
