#include "Node.cpp"
#include "Lista.cpp"
#include<iostream>
using namespace std;
int main(){
	Node *a = new Node(5);
	Node *b = new Node(7);
	Node *c = new Node(2);
	a->setProx(b);
	b->setProx(c);
	Node *n = a;
	while(n != 0){
		cout << n->getInfo();
		n = n->getProx();
	}
	Lista *l = new Lista(a);
}
