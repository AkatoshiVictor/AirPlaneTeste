#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao:public Servicos{

	private:
		float a_taxa_primeira_classe;
		float a_taxa_executiva;
		float a_taxa_economica;


	public:

        Aviao(float, int, int, float, string, string, string, float, float, float);

        void set_a_taxa_primeira_classe(float);
        void set_a_taxa_executiva(float);
        void set_a_taxa_economica(float);

        float get_a_taxa_primeira_classe() const;
        float get_a_taxa_executiva() const;
        float get_a_taxa_economica() const;

        void imprime_dados();//método teste

        ~Aviao();

};

#endif // AVIAO_H_INCLUDED
