#include <iostream>
const int max_itens = 5;
typedef int TipoItem;
using namespace std;
//conjunto limitado para vetor desordenado

struct conjunto {
    int N = 0;
    TipoItem* vetor = new TipoItem[max_itens];
};

bool pertence(TipoItem elemento, conjunto &c)
{
    for(int i = 0; i < c.N; i++) {
       if(c.vetor[i] == elemento) {
        return true;
       }
    }
    return false;
}

bool vazio(conjunto &c)
{
    return(c.N == 0);
}

bool cheio(conjunto &c)
{
    return(c.N == max_itens);
}

void inserir(TipoItem elemento, conjunto &c)
{
    if(pertence(elemento, c)) {
        cout << "Nao eh possivel inserir, o elemento ja pertence ao conjunto";
    } else if(cheio(c)) {
        cout << "Nao eh possivel inserir, o conjunto esta cheio";
        } else {
        c.vetor[c.N] = elemento;
        c.N++;
    }
}

void remover(TipoItem elemento, conjunto &c)
{
    if((!pertence(elemento, c))){
        cout << "impossivel remover, o elemento nao pertence ao conjunto";
    } else {
        for(int i = 0; i < c.N; i++) {
            if(c.vetor[i] == elemento) {
                c.vetor[i] = c.vetor[c.N-1];
                c.N--;
            }
        }
    }
}


////////////////////////////////////////////////////

int main(){

    int option;
    conjunto conjunto1;

    do {
        cout << "SELECIONE A OPERACAO\n" << " Finalizar(0) Inserir(1)  Remover(2)  Pertence?(3)\n";
        cin >> option;
        if(option == 1){
            int elemento;
            cout << "Insira o elemento :\n";
            cin >> elemento;
            inserir(elemento, conjunto1);
        }
        else if(option == 2){
            int elemento;
            cout << "Digite o elemento a ser removido :\n";
            cin >> elemento;
            remover(elemento, conjunto1);
        }
        else if(option == 3){
            int elemento;
            cout << "Digite o elemento\n";
            cin >> elemento;
            if(pertence(elemento, conjunto1)) {
                cout << "O elemento " << elemento << " pertence ao conjunto\n";
            } else {
                cout << "O elemento " << elemento << " nao pertence ao conjunto\n";
            };
        }

    } while(option != 0);
}