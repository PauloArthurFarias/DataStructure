typedef int TipoItem;

struct No{
    TipoItem valor;
    No* proximo;
};

class filadinamica{
    private:
        No* primeiro;
        No* ultimo;

    public:
        filadinamica();
        ~filadinamica();
        bool estacheio();
        bool estavazio();
        void inserir(TipoItem);
        TipoItem remover();
        void imprimir();
};