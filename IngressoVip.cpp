#include "Ingresso.cpp"
#ifndef INGRESSOVIP_CPP
#define INGRESSOVIP_CPP

class IngressoVip : public Ingresso {
	public:
		float acrescimo;
	public:
		IngressoVip(float v, float d) 
			: Ingresso(v) {
				this -> acrescimo = d;
			
		}
		float imprimirValor(){
			return Ingresso::imprimirValor() + this->acrescimo;
		}
};

#endif
