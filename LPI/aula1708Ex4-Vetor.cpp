#include <iostream>
using namespace std;

/*
Leia um vetor e verifique se há elementos repetidos
*/


void ler_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout << "Posição " << i+1 << ": ";
        cin >> vetor[i];
    }
}

string repetidos(int vet[], int tam){
    for(int i=0; i<tam; i++){
        for(int j=i+1; j<tam; j++){
            if (vet[i] == vet[j]){
                return "Há elementos repetidos";
            }
        }
    }
    return "Não há elementos repetidos";
}

int main(){
    const int tam = 7;
    int vet[tam];

    
    ler_vetor(vet, tam);
    cout<< repetidos(vet, tam)<<endl;


    return 0;
}