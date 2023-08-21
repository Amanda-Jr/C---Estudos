#include <iostream>
using namespace std;

//Faça um programa que leia um vetor de 10 posições inteiras. 
//Em seguida solicite um valor e informe quantas vezes o valor aparece no vetor

void ler_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout << "Posição "<< i+1 << ": ";
        cin >> vetor[i];
    }
}

int contar_repeticao(int vetor[], int tam, int valor){
    int rep = 0;
    for(int i=0; i<tam; i++){
        if (valor == vetor[i]){
            rep += 1;
        }
    }

    return rep;
}

int main(){
    const int tam = 10;
    int vetor[tam];
    int valor;

    ler_vetor(vetor, tam);
    
    cout<< "De qual valor deseja saber a quantidade de ocorrências? ";
    cin >> valor;

    cout << "O valor "<< valor << " tem " << contar_repeticao(vetor, tam, valor) << " ocorrências no vetor.";

}

