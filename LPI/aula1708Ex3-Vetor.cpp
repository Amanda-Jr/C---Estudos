#include <iostream>
using namespace std;

/*
Leia dois vetores, um de 4 e um de 5 posições. 
Gere um terceiro vetor com a soma dos outros dois
*/

void ler_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout << "Posição " << i+1 << ": ";
        cin >> vetor[i];
    }
}

void concat(int v1[], int v2[], int vc[], int t1, int t2){
    for(int i = 0; i<t1; i++){
        vc[i] = v1[i];
    }
    for(int i=0; i<t2; i++){
        vc[i+t1] = v2[i];
    }
}

void imprimir_vetor(int vet[], int tam){
    for(int i=0; i<tam; i++ ){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main(){

    const int tam1 = 4;
    const int tam2 = 5;
    int vet1[tam1];
    int vet2[tam2];
    int vetc[tam1+tam2];

    ler_vetor(vet1, tam1);
    ler_vetor(vet2, tam2);
    concat(vet1, vet2, vetc, tam1, tam2);

    imprimir_vetor(vet1, tam1);
    imprimir_vetor(vet2, tam2);
    imprimir_vetor(vetc, tam1+tam2);


    return 0;
}