#include <iostream>
#include "Triangulo.cpp"

using namespace std;


int main(){
	FormaGeometrica *F = new Triangulo("Reto", 3., 4.);
	FormaGeometrica *G = new FormaGeometrica("Poligono");
	cout << F->getNome();
}
