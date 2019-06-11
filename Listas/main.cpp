#include "NodeDuplo.cpp"
#include "ListaDEncadeado.cpp"
#include<iostream>
using namespace std;
int main(){
	
	ListaDEncadeado * l = 
		new ListaDEncadeado(new NodeDuplo(12));
	
	NodeDuplo *h = l -> getHead();
	
	l -> addInfo(20);
	l -> addInfo(21);
	l -> addInfo(8);
	l -> addInfo(7);
	
	cout << h->getProx()->getInfo();
	
}
