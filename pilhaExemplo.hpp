const int max_itens = 100;

int typedef TipoItem;

class pilha{
    private:
        int tamanho;
        TipoItem* estrutura;

    public:
        pilha();
        ~pilha();
        bool estacheia(); //verifica se a pilha ta cheia
        bool estavazia(); //verifica se a pilha ta vazia
        void inserir(TipoItem item); //push
        TipoItem remover(); //pop
        void imprimir(); //print
        int qualtamanho(); //lenght

};