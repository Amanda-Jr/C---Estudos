#include <iostream>
using namespace std;

//3- Construa um programa que leia uma palavra e a reescreva de trás para frente

void ler_vetor(char vet[], char l){
    cout << "Escreva uma palavra de 5 letras."<<endl;
    int i = 0;
    while((l = getchar())!='\n'){  
        vet[i] = l;
        i++;
    }
}

void inverter(char vet[], char inv[], int tam){    
    int j=0;

    for(int i=tam; i>=0; i--){
        inv[j] = vet[i];
        j++;
    }

}

void imprimir(char vetor[], int tam){
    for(int i=0; i<=tam; i++){
        cout << vetor[i];
    }
    cout << endl;
}

int main(){
    int tam = 5;
    char palavra[tam];
    char invertida[tam];
    char l;

    ler_vetor(palavra, l);
    inverter(palavra, invertida, tam);

    cout << "Palavra original: " << endl;
    imprimir(palavra, tam);
    cout << "Palavra invetida: " << endl;
    imprimir(invertida, tam);



    return 0;
}
