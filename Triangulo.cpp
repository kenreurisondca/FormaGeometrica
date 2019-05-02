#include "FormaGeometrica.cpp"

class Triangulo : public FormaGeometrica {
	protected:
		float altura;
		float largura;
	public:
		Triangulo(char* s, float h, float l)
		 	: FormaGeometrica(s){
			altura = h;
			largura = l;	
		}
		
		float getAltura(){
			return altura;
		}
		float getLargura(){
			return largura;
		}
};
