#include <iostream>

const int tam = 10;
using namespace std;

int BuscaRecursiva(int vetor[], int inicio, int fim, int elemento) {
    if(inicio > fim) {
            return -1;
        } else {
            int meio = (inicio + fim) / 2;
            if(vetor[meio] == elemento){
                return meio;
            } else if(elemento > vetor[meio]) {
                BuscaRecursiva(vetor, meio + 1, fim, elemento);
            } else {
                BuscaRecursiva(vetor, inicio, meio - 1, elemento);
            }
        }
}


int main() {

int* vetor = new int[tam];
int elemento;
cout << "insira os 10 elementos do vetor: \n";
for(int i = 0; i < tam; i ++){
    cin >> vetor[i];
}

cout << "insira o elemento a ser buscado no vetor: \n";
cin >> elemento;

if(BuscaRecursiva(vetor, 0, tam-1, elemento) == -1){
    cout << "O elemento nao pertence ao vetor";
} else {
    cout << "O elemento pertence ao vetor";
}

}
