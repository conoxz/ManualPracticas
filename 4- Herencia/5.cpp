#include <iostream>
using namespace std;
/* 
Como el comentario en main() indica, este programa simplemente construye y 
destruye un objeto llamado obj, el cual es de la clase 'derivada'. 
*/
class base {

public:
 base() { cout << "Construyendo base\n"; }
 ~base() { cout << "Destruyendo base\n"; }
};


class derivada : public base {
public:
  derivada() { cout << "Construyendo derivada\n"; }
  ~derivada() { cout << "Destruyendo derivada\n"; }
};

int main()
{
  derivada obj;

  // no hacer nada mas que construir y destruir obj

return 0;
}
