/*
Leia e imprima um vetor de cinco posições inteiras.
Informe: maior valor, menor valor, soma, média.
*/

#include <iostream>
using namespace std;


void ler_vetor(int vet[],int tam){
    for(int i = 0; i<tam; i++){
        cout << "Digite um número para a posição " << i+1 << " do vetor: ";
        cin >> vet[i];
    }
}

void imprimir_vetor(int vet[], int tam){
    for(int i=0; i<tam; i++ ){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int maior(int vet[], int tam){
    int maior = vet[0];

    for(int i=1; i<tam; i++){
        if (vet[i]>maior){
            maior = vet[i];
        }
    }

    return maior;
}

int menor(int vet[], int tam){
    int menor = vet[0];

    for(int i=1; i<tam; i++){
        if(vet[i]<menor){
            menor = vet[i];
        }
    }

    return menor;
}

int soma(int vet[], int tam){
    int soma = 0;
    for(int i=0; i<tam; i++){
        soma += vet[i];
    }

    return soma;
}

double media(int vet[], int tam){
    double media = (double)soma(vet,tam)/tam;

    return media;
}

int main(){
    const int tam = 5;
    int vetor[tam];

    ler_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    cout << "Maior valor: " << maior(vetor, tam) << endl;
    cout << "Menor valor: " << menor(vetor, tam) << endl;
    cout << "Soma: " << soma(vetor, tam) << endl;
    cout << "Média: " << media(vetor,tam) << endl;

    return 0;
}