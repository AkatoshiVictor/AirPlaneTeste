class Menus{
    private:
        string Senha_de_creditos;
    public:
        Menus();

        /*Get dos créditos*/

        string get_creditos();
        void const Creditos();

        void const MenuPrincipal();
        void const menu_cliente_criarLogin();
        void const menu_cliente_acessarLogin();
        void const menu_cliente_principal();
        void const menu_cliente_comprar_passagens();
};
