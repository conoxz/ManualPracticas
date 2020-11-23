#include <fstream>
#include <iostream>
using namespace std;
/* 
	Programa que copia una imagen a otro archivo
*/
int main(){
	ifstream origen("foto.jpg",ios::binary);
	ofstream destino("copia.jpg",ios::binary);
	
	char byte;
	
	while( !origen.eof() && !origen.fail()){
		
		origen.read((char *) & byte,sizeof(char));
		if(origen.good()){
			destino.write((char*) & byte,sizeof(char));
		}
	}
	destino.close();
	origen.close();
	return 0;
}
