#ifndef NODEDUPLO_CPP
#define NODEDUPLO_CPP

class NodeDuplo {
	private:
		NodeDuplo *ant;
		NodeDuplo *prox;
		int info;
	public:
		NodeDuplo(){
			ant = 0;
			prox = 0;
		}
		NodeDuplo(int);
		void setInfo(int v){
			info = v;
		}
		NodeDuplo* getProx(){
			return prox;
		}
		NodeDuplo* getAnt(){
			return ant;
		}
		int getInfo(){
			return info;
		}
		void setProx(NodeDuplo *p){
			prox = p;
		}
		void setAnt(NodeDuplo* a){
			ant = a;
		}
};

NodeDuplo::NodeDuplo(int value){
	ant = 0;
	prox = 0;
	info = value;
}
#endif
