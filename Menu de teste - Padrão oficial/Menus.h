class Menus{
    private:
        /*Vector de controle para a exibição de menus*/
        vector <string> Exibidor;
        vector <string> MensagemAmigavel;
    public:
        /*Método padrão para exibição de menus*/
        int const ExibidorDeMenus();

        /*Métodos para uso de menus*/
        int const MenuGeral();

        int const Funcionario();
        int const Cliente();
       
};