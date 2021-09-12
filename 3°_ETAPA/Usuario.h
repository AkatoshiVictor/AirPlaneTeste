#ifndef Usuario_H_INCLUDED
#define Usuario_H_INCLUDED

class Usuario{

	private:
		float preco;

		string email;
		string senha;
		string nome_completo;
		string data_nascimento;
		string endereco;
		string telefone;
		string telefone_familiar;
		string documento;

	public:

		Usuario(string, string, string, string, string, string, string, string);

		void set_email(string);
		void set_senha(string);
		void set_nome_completo(string);
		void set_data_nascimento(string);
		void set_endereco(string);
		void set_telefone(string);
		void set_telefone_familiar(string);
		void set_seguro(string);
		void set_documento(string);

		string get_email() const;
		string get_senha() const;
		string get_nome_completo() const;
		string get_data_nascimento() const;
		string get_endereco() const;
		string get_telefone() const;
		string get_telefone_familiar() const;
		string get_documento() const;

		void imprime_dados();

		~Usuario();
};

#endif // Usuario_H_INCLUDED
