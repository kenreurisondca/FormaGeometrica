#ifndef LISTAORDENADA_CPP
#define LISTAORDENADA_CPP
#include "Lista.cpp"
class ListaOrdenada : Lista {
	private:
	public:
		ListaOrdenada();
		ListaOrdenada(Node*);
		ListaOrdenada(int);
		void addInfo(int);
};

ListaOrdenada::ListaOrdenada() : Lista(){}
ListaOrdenada::ListaOrdenada(Node *n) : Lista(n){}
ListaOrdenada::ListaOrdenada(int value) : Lista(value){}

void ListaOrdenada::addInfo(int value){
	Node *atual    = head;
	Node *proximo  = head->getProx();
	if(proximo = 0){
		proximo = new Node(value);
	}else{
		while(!((atual.getInfo() < value || proximo->getInfo() > value)){
			atual = atual -> getProx();
			proximo = proximo -> getProx();
		}
		...
	}
}

#endif
