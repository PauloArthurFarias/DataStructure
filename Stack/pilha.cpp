#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha()
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_item];
}
bool pilha:: estacheia()
{
    return(ultimo - primeiro == max_item);
}
bool pilha:: estavazia()
{
    return(ultimo == primeiro);
}
void pilha:: empilhar(TipoItem item)
{
    if(estacheia()){
        cout << "\nnao eh possivel empilhar, ja esta cheia\n";
    } else {
        estrutura[ultimo] = item;
        ultimo++;
    }
}
TipoItem pilha::desempilhar()
{
    if(estavazia()){
        cout << "\nnao eh possivel desempilhar, ja esta vazia\n";
        return 0;
    } else {
        ultimo--;
        return (estrutura[ultimo]);
    }
}
void pilha::imprimir()
{
    cout << "_";
    cout << endl;
    for(int i = (ultimo - 1); i>=primeiro; i--) {
        cout << estrutura[i] << "\n";
    }
    cout << "_";
}
int pilha::tamanho()
{
 return (ultimo - primeiro);
}