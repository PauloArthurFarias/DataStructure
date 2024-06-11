#include <iostream>
#include "filadinamica.h"
#include <cstddef>
#include <new>

using namespace std;

    filadinamica::filadinamica() // Constructor
    {
        primeiro = NULL;
        ultimo = NULL;
    }

    filadinamica::~filadinamica() // Destrutor
    {
        No* temp;
        while (primeiro != NULL){
            temp = primeiro;
            primeiro = primeiro->proximo;
            delete temp;
        }
        ultimo = NULL;
    }

    bool filadinamica::estavazio() //isEmpty
    {
        return (primeiro == NULL);
    }

    bool filadinamica::estacheio() //isFull
    {
        No* temp;
        try{
            temp = new No;
            delete temp;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }

    void filadinamica::inserir(TipoItem item) //enqueue //push
    {
        if (estacheio()){
            cout << "A Fila esta cheia!\n";
            cout << "Nao foi possivel inserir este elemento!\n";
        } else{
            No* NovoNo = new No;
            NovoNo -> valor = item;
            NovoNo -> proximo = NULL;
            if(primeiro == NULL){
                primeiro = NovoNo;
            }else{
                ultimo -> proximo = NovoNo;
            }
            ultimo = NovoNo;
        }
    }

    TipoItem filadinamica::remover() //dequeue //pop
    {
        if (estavazio()){
            cout << "A fila esta vazia!\n";
            cout << "Nao tem elemento a ser removido!\n";
            return 0;
        } else{
            No* NoTemp = primeiro;
            TipoItem item = NoTemp -> valor;
            primeiro = primeiro -> proximo;
            if(primeiro == NULL){
                ultimo = NULL;
            }
            delete NoTemp;
            return item;
        }
    }

    void filadinamica::imprimir() //print
    {
        No* temp = primeiro;
        cout << "Fila= [ ";
        while (temp != NULL){
            cout << temp->valor << " ";
            temp = temp->proximo;
        }
        cout << "]\n";
    }