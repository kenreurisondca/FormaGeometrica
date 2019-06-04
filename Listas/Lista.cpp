#ifndef LISTA_CPP
#define LISTA_CPP
#include "Node.cpp"
class Lista {
	protected:
		Node* head;
	public:
		Lista();
		Lista(Node*);
		Lista(int);
		void addInfo(int);
};

Lista::Lista(){}
Lista::Lista(Node *n){
	head = n;
}
Lista::Lista(int value){
	head = new Node(value);
}

void Lista::addInfo(int value){
	if(head == 0) {
		head = new Node(value);
	}else{
		Node *n = head;
		while(n -> getProx() != 0){
			n = n->getProx();
		}
		n->setProx(new Node(value));
	}
}
#endif





