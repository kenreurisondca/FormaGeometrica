#include "NodeDuplo.cpp"
#include "ListaDEncadeado.cpp"
#include<iostream>
using namespace std;
int main(){
	
	ListaDEncadeado * l = 
		new ListaDEncadeado(new NodeDuplo(1));
	l -> addInfo(12);	
	l -> addInfo(20);
	l -> addInfo(21);
	l -> addInfo(8);
	l -> addInfo(7);
	l -> showInfo();
}
