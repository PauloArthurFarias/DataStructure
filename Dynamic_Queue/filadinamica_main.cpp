#include <iostream>
#include "filadinamica.h"
using namespace std;

int main() {
    filadinamica pilha1;
    TipoItem item;
    int option;
    cout << "Programa Gerador de Fila: \n";
    
    do {
        cout << "Digite 0 para parar o programa !\n";
        cout << "Digite 1 para inserir um elemento !\n";
        cout << "Digite 2 para remover um elemento !\n";
        cout << "Digite 3 para printar a fila !\n";
        cin >> option;

        if(option == 1){
            cout << "Digite o elemento a ser inserido: \n";
            cin >> item;
            pilha1.inserir(item);
            cout << "Elemento inserido com sucesso !\n";
        }

        if(option == 2){
            pilha1.remover();
        }

        if(option == 3){
            pilha1.imprimir();
        }

    } while(option != 0);

    cout << "Programa Finalizado !";

}