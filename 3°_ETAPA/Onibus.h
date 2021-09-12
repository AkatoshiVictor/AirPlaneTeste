#ifndef ONIBUS_H_INCLUDED
#define ONIBUS_H_INCLUDED

class Onibus:public Servicos{

	private:
		float o_taxa_executiva;
		float o_taxa_economica;

	public:

        Onibus(float, int, int, float, string, string, string, float, float);

        void set_o_taxa_executiva(float);
        void set_o_taxa_economica(float);

        float get_o_taxa_executiva() const;
        float get_o_taxa_economica() const;

        void imprime_dados_3();//método teste

        ~Onibus();

};

#endif // ONIBUS_H_INCLUDED
