#include <iostream>
using namespace std;
/*
};
Una interfaz es una clase abstracta pura ya que no tiene variables de clase ni m�todos concretos, todos sus m�todos son virtuales puros. 
Este tipo de clases son implementadas comunmente por los arquitectos y dise�adores de software, representan un contrato entre el dise�ador
y el usuario o desarrollador final de cierta funcionalidad, es decir, en una interfaz el dise�ador especifica el nombre del y posiblemente 
el tipo de retorno y los tipos de los par�metros de entrada del m�todo pero deja a consideraci�n del desarrollador la implementaci�n interna
de la funcionalidad. El uso de interfaces es particularmente �til cuando se implementan algunos patrones de dise�o de software que 
involucran clases polim�rficas (tema que se trata en la pr�xima pr�ctica), lo cual es muy com�n en "frameworks" de desarrollo de software, 
por ejemplo de interfaces gr�ficas de usuario (GUIs) donde la mayor�a de objetos gr�ficos que se pueden integrar a la interfaz gr�fica implementan
interfaces en com�n que declaran funcionalidades generales de todos los elementos gr�ficos pero que se implementan con distintas variaciones en
cada uno de los elementos gr�ficos. Ejemplo:
 */
class Interfaz1
{
	public:
    virtual void metodoVirtualPuro() const = 0;
};

class Interfaz2
{
	public:
    virtual void metodoVirtualPuro() const = 0;
};

class Concreta: public Interfaz1, public Interfaz2
{
	public:
    void metodoVirtualPuro() const{cout<<"Metodo Virtual Puro Redefinido"<<endl;}
};

int main()
{
	Concreta miObj;
	miObj.metodoVirtualPuro();
	return 0;
}
