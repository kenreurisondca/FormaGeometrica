#include "Node.cpp"
#include "Lista.cpp"
#include "ListaDEncadeado.cpp"
#include<iostream>
using namespace std;
int main(){
	/*
	Lista *l = new Lista(1);
	l->addInfo(2);
	l->addInfo(3);
	l->addInfo(4);
	l->addInfo(5);
	l->showLista();
	//l->remove(1);
	l->showLista();
	Node *n = l->busca(5);
	Lista *l2 = new Lista(n);
	l2 -> showLista();
	*/
	ListaDEncadeado * l = new ListaDEncadeado(1);
	l -> addInfo(2);
	l -> addInfo(3);
	l -> addInfo(5);
	l -> addInfo(6);
	l -> showLista();
}
