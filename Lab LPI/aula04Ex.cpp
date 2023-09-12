#include <iostream>
using namespace std;

//Crie um programa que recebe números até que o usuário digite 0. Guarde os valores num vetor dinâmico e imprima na tela

int main(){
    int tam = 0;
    int *vet = new int[tam];

    int i = 0;
    int num;
    do{
        cout << "Digite um valor para ser guardado ou 0 para encerrar: ";
        cin >> num;

        vet[i] = num;

        i++;
        tam++;
    } while(num!=0);

    for(int i=0; i<tam-1; i++){
        cout<< vet[i] <<" ";
    }

    delete[]vet;
    vet = NULL;

    return 0;
}