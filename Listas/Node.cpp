#ifndef NODE_CPP
#define NODE_CPP
class Node {
	private:
		int info;
		Node* prox;
	public:
		Node();
		Node(int);
		Node(Node*);
		Node* getProx();
		int getInfo();
		void setProx(Node*);
};
Node::Node(){}
Node::Node(int value){
	info = value;
	prox = 0;
}
int Node::getInfo(){
	return info;
}
Node::Node(Node *n){
	info = n->info;
	prox = n->prox;
}
Node* Node::getProx(){
	return prox;
}

void Node::setProx(Node *n){
	prox = n;
}
#endif


