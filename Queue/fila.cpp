#include <iostream>
#include "fila.h"
using namespace std;


    fila::fila()
    {
        primeiro = 0;
        ultimo = 0;
        estrutura = new TipoItem[max_itens];

    }

    fila::~fila()
    {
        delete [] estrutura;
    }

    bool fila::estavazio()
    {
        return(primeiro == ultimo);
    }
    
    bool fila::estacheio()
    {
        return(ultimo - primeiro == max_itens); 
    }   
    
    void fila::enfilar(TipoItem item)
    {
        if(estacheio()) {
            cout << "não é possível enfilar, a fila está cheia\n";
        } else {
            estrutura[ultimo % max_itens] = item;
            ultimo++;
        }
    }
    
    TipoItem fila::desenfilar()
    {
        if(estavazio()) {
            cout << "não é possível desenfilar, a fila está vazia\n";
            return 0;
        } else {
            primeiro++;
            return estrutura[(primeiro - 1) % ultimo];
        }
    }
    
    void fila::imprimir()
    {
        cout << "[";
        for(int i = primeiro; i < ultimo; i++) {
            cout << estrutura[i % max_itens] << " ";    
        }
        cout << "]";
    }