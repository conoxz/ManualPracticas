#include <iostream>
using namespace std;
/*
};
Una interfaz es una clase abstracta pura ya que no tiene variables de clase ni métodos concretos, todos sus métodos son virtuales puros. 
Este tipo de clases son implementadas comunmente por los arquitectos y diseñadores de software, representan un contrato entre el diseñador
y el usuario o desarrollador final de cierta funcionalidad, es decir, en una interfaz el diseñador especifica el nombre del y posiblemente 
el tipo de retorno y los tipos de los parámetros de entrada del método pero deja a consideración del desarrollador la implementación interna
de la funcionalidad. El uso de interfaces es particularmente útil cuando se implementan algunos patrones de diseño de software que 
involucran clases polimórficas (tema que se trata en la próxima práctica), lo cual es muy común en "frameworks" de desarrollo de software, 
por ejemplo de interfaces gráficas de usuario (GUIs) donde la mayoría de objetos gráficos que se pueden integrar a la interfaz gráfica implementan
interfaces en común que declaran funcionalidades generales de todos los elementos gráficos pero que se implementan con distintas variaciones en
cada uno de los elementos gráficos. Ejemplo:
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
