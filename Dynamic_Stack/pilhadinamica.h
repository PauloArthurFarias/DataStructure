typedef int TipoItem;

struct No
{
    TipoItem valor;
    No* proximo;
};

class pilhadinamica{
    private:
    No* NoTopo;

    public:
    pilhadinamica();
    bool estacheio();
    bool estavazio();
    void inserir(TipoItem);
    void remover();
    void imprimir();
};