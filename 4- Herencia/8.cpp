#include <iostream>
using namespace std;
/*
 Se refleja el acceso a las propiedades y métodos definidas en la clase padre, así como un ejemplo para sobrescribir métodos.
 */

class Persona {
 private:
  std::string nombre;
  int edad;

  void metodoPrivado() {
    std::cout << "Solo puedo ser llamado desde dentro de la clase";
  }

 public:
  // Constructor sin argumentos
  Persona() {
    std::cout << "Se llama al constructor";
    this->metodoPrivado();
  }
  // Constructor con nombre y edad
  Persona(std::string nombre, int edad) {
    this->edad = edad;
    this->nombre = nombre;
  }

  int getEdad() { return this->edad; }

  void setEdad(int edad) { this->edad = edad; }

  std::string getNombre() { return this->nombre; }

  void setNombre(std::string nombre) { this->nombre = nombre; }

  void saludar() {
    std::cout << "Hola, me llamo " << this->nombre << " y mi edad es "
              << this->edad << "\n";
  }
  // Definido virtual para que se pueda sobrescribir ;)
  virtual void saludarAmigo(std::string nombre) {
    std::cout << "Hola " << nombre << ", me llamo " << this->nombre
              << " y mi edad es " << this->edad << "\n";
  }
};

class Estudiante : public Persona {
 public:
  // Constructor vacío
  Estudiante(std::string nombre, int edad, std::string escuela)
      : Persona(nombre, edad) {}

  // Definir propios métodos
  void estudiar() { std::cout << "*estudia*\n"; }
  // Sobrescribir otros
  void saludarAmigo(std::string nombre) override {
    // Usamos getEdad y getNombre porque es una subclase
    // y las variables son privadas
    std::cout << "Qué onda " << nombre << ", me llamo " << this->getNombre()
              << " y mi edad es " << this->getEdad() << "\n";
  }
};

int main() {
  Persona p1("Luis", 21);
  p1.saludar();
  Persona p2;
  p2.setEdad(1);
  p2.setNombre("John Galt");
  p2.saludar();
  Estudiante e1("Luis", 3, "Ninguna");
  e1.saludar();
  e1.saludarAmigo("Pedro");
  e1.estudiar();
}
