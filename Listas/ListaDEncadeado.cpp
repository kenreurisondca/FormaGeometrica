#ifndef LISTADENCADEADO_CPP
#define LISTADENCADEADO_CPP
#include "NodeDuplo.cpp"
#include <iostream>

using namespace std;

class ListaDEncadeado {
	private:
		NodeDuplo *head;
	public:
		ListaDEncadeado(){}
		ListaDEncadeado(NodeDuplo*);
		ListaDEncadeado(int);
		void addInfo(int);
		void remove(int);
		Node* busca(int);
		void showLista();
};

ListaDEncadeado::ListaDEncadeado(int value){
	head->setAnt(0);
	head->setProx(0);
	head -> setInfo(value);
}
void ListaDEncadeado::addInfo(int value){
	if(head == 0){
		head->setInfo(value);
	}else{
		NodeDuplo* n = head -> getProx();
		while( n -> getProx() != 0){
			n = n -> getProx();
		}
		n = new NodeDuplo(value);
	}
}

void ListaDEncadeado::showLista(){
	NodeDuplo * n = new NodeDuplo();
	cout << n -> getInfo();
	while(n != 0){
		n = n -> getProx();
		cout << n->getInfo();
	}
	cout << endl;
}
#endif






