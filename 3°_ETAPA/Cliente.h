#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente:public Usuario{
    private:
        string seguro;
        string acompanhante;
        float orcamento;
        string necessidades_especiais;
        string metodo_de_pagamento;


    public:

        Cliente(string, string, float, string, string, string, string, string, string, string, string, string, string);

        void set_seguro(string);
        void set_acompanhante(string);
        void set_orcamento(float);
        void set_necessidades_especiais(string);
        void set_metodo_de_pagamento(string);

        string get_seguro() const;
        string get_acompanhante() const;
        float get_orcamento() const;
        string get_necessidades_especiais() const;
        string get_metodo_de_pagamento() const;

        void imprime_dados_2();
        ~Cliente();
};

#endif // CLIENTE_H_INCLUDED
