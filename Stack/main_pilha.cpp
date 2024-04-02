#include <iostream>
#include "pilha.h"

using namespace std;

int main() {

    pilha pilha1;
    int option;
    TipoItem item;
    do{
        cout << "\ndigite 0 para finalizar\n" << "digite 1 para empilhar\n" << "digite 2 para desempilhar\n" << "digite 3 para imprimir e dizer o tamanho\n";
        cin >> option;

        if(option == 1){
            cout << "\nDigite o Elemento a ser empilhado\n";
            cin >> item;
            pilha1.empilhar(item);
        } else if(option == 2){
            cout << "\nElemento removido : " << pilha1.desempilhar();
        } else if(option == 3) {
            pilha1.imprimir();
            cout << "\nTamanho da pilha: " << pilha1.tamanho() << endl;
        }

    }while(option != 0);

    return 0;
}