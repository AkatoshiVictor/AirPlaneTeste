#ifndef SERVICOSADICIONAIS_H_INCLUDED
#define SERVICOSADICIONAIS_H_INCLUDED



class Servicos{

	private:

		float preco;
		int origem;
		int destino;
		float preco_final;
		string dia;
		string partida;
		string chegada;

	public:

		Servicos(float, int, int, float, string, string, string);

		void calc_preco(float);
		void set_origem(int);
		void set_destino(int);
		void calc_preco_final(float);

		float get_preco() const;
		int get_origem() const;
		int get_destino() const;
		float get_preco_final() const;
		string get_dia() const;
		string get_partida() const;
		string get_chegada() const;

		void imprime_dados_2();

		~Servicos();
};

#endif // SERVICOSADICIONAIS_H_INCLUDED
