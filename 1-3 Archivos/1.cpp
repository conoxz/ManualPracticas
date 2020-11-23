#include <iostream>
#include <fstream>
using namespace std;
/* 
Crear un fichero mediante un objeto de la clase ofstream, y posteriormente lo leeremos mediante un objeto de la clase ifstream:
from: http://c.conclase.net/curso/?cap=039
*/
int main() {
   char cadena[128];
   // Crea un fichero de salida
   ofstream fs("nombre.txt"); 

   // Enviamos una cadena al fichero de salida:
   fs << "Hola, mundo" << endl;
   // Cerrar el fichero, 
   // para luego poder abrirlo para lectura:
   fs.close();

   // Abre un fichero de entrada
   ifstream fe("nombre.txt"); 

   // Leeremos mediante getline, si lo hici�ramos 
   // mediante el operador << s�lo leer�amos 
   // parte de la cadena:
   fe.getline(cadena, 128);

   cout << cadena << endl;

   return 0;
}

