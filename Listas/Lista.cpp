#ifndef LISTA_CPP
#define LISTA_CPP
#include <iostream>
#include "Node.cpp"

using namespace std;

class Lista {
	protected:
		Node* head;
	public:
		Lista();
		Lista(Node*);
		Lista(int);
		void addInfo(int);
		void showLista();
		void remove(int);
		Node* busca(int);
};

Node* Lista::busca(int value){
	Node *p = head -> getProx();
	if(head == 0) {
		return 0;
	}else if(head->getInfo() == value){
		return head;
	}else{
		while( p != 0 ){
			if(p -> getInfo() != value){
				p  = p -> getProx();
			}else{
				return p;
			}
		}
		return p;
	}
}

void Lista::remove(int value){
	
	Node *n = head;
	Node *p = head->getProx();
	
	if(head == 0) {
		return;
	}else if(head->getInfo() == value){
		head = head->getProx();	
	}else{
		while( p != 0 ){
			if(p -> getInfo() == value){
				n -> setProx(p->getProx());
				return;
			}else{
				n = n -> getProx();
				p = p -> getProx();
			}
		}
	}
}

void Lista::showLista(){
	Node *n = this -> head;
	cout << n -> getInfo();
	while(n -> getProx() != 0){
		n = n -> getProx();
		cout << n -> getInfo();
	}
	cout << endl;
}

Lista::Lista(){}
Lista::Lista(Node *n){
	head = n;
}
Lista::Lista(int value){
	head = new Node(value);
}

void Lista::addInfo(int value){
	if(head == 0){
		head = new Node(value);
	}else{
		Node *n = head;
		while(n -> getProx() != 0){
			n = n -> getProx();	
		}
		n -> setProx(new Node(value));
	}
}
#endif





