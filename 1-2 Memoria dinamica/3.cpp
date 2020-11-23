#include <iostream>
 
using namespace std;
int main(int argc, char *argv[]){ //Programa que recibe argumentos en main y los imprime
	for(int i = 0; i < argc; i++){
		cout<<"Argumento "<<(i+1)<<" --> "<<argv[i]<<endl;
	}
	
	return 0;
}
