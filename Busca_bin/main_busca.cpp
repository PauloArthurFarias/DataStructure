#include <iostream>

using namespace std;
const int tam = 6;
//pra vetores fornecidos ordenados
//testando buscando elemento 3
bool busca(int* vetor, int elemento)
{
    int esquerda = 0;
    int direita = tam - 1;
    

    while(esquerda < direita) {

        int meio = (esquerda + direita) / 2;

        if(elemento > vetor[meio]) {
            esquerda = meio + 1;
        } else if(elemento < vetor[meio]) {
            direita = meio - 1;
        } else {
            direita = esquerda = meio;
        }
       
    } 
     return(vetor[esquerda] == elemento);
}




int main() {

int* vetor = new int[tam];
cout << "digite os 6 elementos do vetor em ordem" << endl ;

for(int i = 0; i < tam; i++) {
    cin >> vetor[i];
}

if(busca(vetor, 3)) {
    cout << "elemento pertence ao conjunto";
} else {
    cout << "elemento nao pertence ao conjunto";
}
return 0;

}