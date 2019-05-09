#ifndef INGRESSO_CPP
#define INGRESSO_CPP

class Ingresso {
	private:
		float valor;
	public:
		Ingresso(float v){
			this -> valor = v;
		}
		float imprimirValor(){
			return this->valor;
		}
};

#endif
