class FormaGeometrica{
	protected:
		char* nome;
	public:
		FormaGeometrica(char* s){
			nome = s;
		}
		char* getNome(){
			return nome;
		}
};
