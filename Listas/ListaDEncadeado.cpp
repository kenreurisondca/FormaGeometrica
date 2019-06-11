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
		void showPreordem();
		NodeDuplo* getHead();
};

NodeDuplo* ListaDEncadeado::getHead(){
	return head;
}
ListaDEncadeado::ListaDEncadeado(NodeDuplo* n){
	head = n;
}

ListaDEncadeado::ListaDEncadeado(int value){
	head->setAnt(new NodeDuplo());
	head->setProx(new NodeDuplo());
	head -> setInfo(value);
}

void ListaDEncadeado::addInfo(int value){
	if(this -> head == 0) {
		this -> head = new NodeDuplo(value);
		
	}else{
		if(value > head -> getInfo()) {
			ListaDEncadeado *le 
				= new ListaDEncadeado(head -> getProx());
			le -> addInfo(value); 
			cout << value << " ";
		}else if(value < head -> getInfo()){
			ListaDEncadeado *lr
				= new ListaDEncadeado(head -> getAnt());
			lr -> addInfo(value); 
			cout << value << " ";
		}
	}
}

void ListaDEncadeado::showPreordem() {
	cout << head -> getInfo();
	if(head->getAnt() != 0) {	
		ListaDEncadeado *esq 
			=  new ListaDEncadeado(head->getAnt());
		esq -> showPreordem();
	}
	if(head->getProx() != 0) {
		ListaDEncadeado *dir 
			=  new ListaDEncadeado(head->getProx());
		dir -> showPreordem();
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






