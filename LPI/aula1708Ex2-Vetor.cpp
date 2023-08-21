#include <iostream>
using namespace std;

/*
Faça um programa que leia dois vetores de mesmo tamanho. 
Gere um terceiro vetor com a soma dos elementos dos outros dois, posição a posição
*/

void ler_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout << "Posição "<< i+i<< ": ";
        cin >> vetor[i];
    }
    cout<<endl;
}

void somar_vetor(int vs[], int v1[], int v2[], int tam){
    for(int i =0; i<tam; i++){
        vs[i] = v1[i] + v2[i];
    }
}

void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout << vetor[i] << " ";
    }
    cout <<endl;
}

int main(){
    const int tam = 3;
    int vetor1[tam];
    int vetor2[tam];
    int vetorSoma[tam];

    ler_vetor(vetor1, tam);
    ler_vetor(vetor2, tam);

    somar_vetor(vetorSoma, vetor1, vetor2, tam);

    cout << "Vetor 1: ";
    imprimir_vetor(vetor1, tam);

    cout << "Vetor 2: ";
    imprimir_vetor(vetor2, tam);

    cout << "Vetor Soma: ";
    imprimir_vetor(vetorSoma, tam);


    return 0;
}