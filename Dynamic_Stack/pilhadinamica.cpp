#include "pilhadinamica.h"
#include <iostream>
#include <cstddef>
typedef int TipoItem;
using namespace std;

    pilhadinamica::pilhadinamica()
    {
        NoTopo = NULL;
    }
    bool pilhadinamica::estacheio()
    {
        try
        {
            No* NovoNo;
            NovoNo = new No;
            delete NovoNo;
            return false;
        }
        catch(bad_alloc exception)
        {   
            return true;
        }
    }
    bool pilhadinamica::estavazio()
    {
        return(NoTopo==NULL);
    }
    void pilhadinamica::inserir(TipoItem item)
    {
        if(estacheio()){
            cout << "Impossivel inserir, nao possui mais memoria !";
        } else {
            No* NovoNo = new No;
            NovoNo -> valor = item;
            NovoNo -> proximo = NoTopo;
            NoTopo = NovoNo;
        }
    }
    void pilhadinamica::remover()
    {
        if(estavazio()){
            cout << "Impossivel remover, a fila ja esta vazia\n";
        } else {
            No* NoTemp = NoTopo;
            NoTopo = NoTopo -> proximo;
            delete NoTemp;
            cout << "Elemento removido !\n";
        }
    }
    void pilhadinamica::imprimir()
    {
        cout << "/\n";
        No* NoTemp = NoTopo;
        while(NoTemp != NULL) {
            cout << NoTemp -> valor << "\n";
            NoTemp = NoTemp->proximo;
        }
        cout << "/\n";
    }