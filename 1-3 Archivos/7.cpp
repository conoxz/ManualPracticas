#include <iostream>
#include <fstream>
using namespace std;
/* Programa que administra la información de un grupo de estudiantes, y guarda su nombre y promedio en un archivo de texto */
int main(){
	int alumnos,calificaciones;
	float promedio;
	string *estudiantes;
	ofstream es("estudiantes.txt");
	cout<<"Cuantos estudiante son: ";
	cin>>alumnos;
	cout<<"Cuantas calificaciones: ";
	cin>>calificaciones;
	estudiantes = new string[calificaciones];
	for(int i = 0; i < alumnos; i++){
		getchar();
		cout<<"Nombre del alumno: ";
		getline(cin,estudiantes[i]);
		float suma = 0,cali;
		for(int j = 0; j < calificaciones; j++){
			cout<<"Calificacion "<<(j+1)<<": ";
			cin>>cali;
			suma += cali;
		}
		promedio = suma / calificaciones;
		es<<estudiantes[i]<<" "<<promedio<<endl;
	}
	es.close();
}
