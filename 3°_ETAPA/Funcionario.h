#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

class Funcionario:public Usuario{

    private:
        float salario;
        string classe_do_funcionario;
        string plano_de_saude;
        string regiao_de_atuacao;
        int score_vendas;

    public:

        Funcionario(string, string, string, string, string, string,
                    string, string, float, string, string, string, int);

        void set_classe_do_funcionario(string);
        void set_plano_de_saude(string);
        void set_regiao_de_atuacao(string);
        void set_score_vendas(int);

        string get_classe_do_funcionario()const;
        string get_plano_de_saude()const;
        string get_regiao_de_atuacao()const;
        int get_score_vendas()const;

        void imprime_dados_1();

};



#endif // FUNCIONARIO_H_INCLUDED
