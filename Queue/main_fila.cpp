#include <iostream>
#include "fila.h"

using namespace std;

int main() {
fila fila1;
int option;
TipoItem elemento;

cout << "GERADOR DE FILAS\n";

do
{
    cout << "\ndigite 0 pra finalizar\n";
    cout << "digite 1 pra inserir elemento\n";
    cout << "digite 2 pra remover elemento\n";
    cout << "digite 3 pra imprimir a fila\n";
    cin >> option;
    if(option == 1){
        cout << "Digite o elemento a ser inserido\n";
        cin >> elemento;
        fila1.enfilar(elemento);
    }
    else if(option == 2){
        cout << "Elemento removido: \n";
        fila1.desenfilar();
    }
    else if(option == 3){
        cout << "IMPRIMINDO FILA\n";
        fila1.imprimir();
    }
} while (option != 0);

}