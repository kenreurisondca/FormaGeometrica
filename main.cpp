#include <iostream>
#include "Ingresso.cpp"
#include "IngressoVip.cpp"

using namespace std;
int main(){
	Ingresso *i1 = new Ingresso(100.);
	Ingresso *i2 = new IngressoVip(100., 50.);
	
	cout << i1-> imprimirValor();
	cout << endl;
	cout << ((IngressoVip*) i2)-> imprimirValor();
}
