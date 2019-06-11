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
		NodeDuplo* busca(int);
		void showLista();
};

ListaDEncadeado::ListaDEncadeado(NodeDuplo* n){
	head = n;
}

ListaDEncadeado::ListaDEncadeado(int value){
	head->setAnt(new NodeDuplo());
	head->setProx(new NodeDuplo());
	head -> setInfo(value);
}

void ListaDEncadeado::addInfo(int value){
	if(head == 0) {
		head = new NodeDuplo(value);
	}else{
		if(value > head -> getInfo()) {
			ListaDEncadeado *l 
				= new ListaDEncadeado(head -> getProx());
			l -> addInfo(value); 
		}else if(value < head -> getInfo()){
			ListaDEncadeado *l 
				= new ListaDEncadeado(head -> getAnt());
			l -> addInfo(value); 
		}
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






