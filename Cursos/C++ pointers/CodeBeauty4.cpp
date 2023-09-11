#include <iostream>
using namespace std;

//Retorne múltiplos valores de uma função usando ponteiros

void ReceberValores(int vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Valor " << i+1 <<": ";
        cin >> vet[i];
    }
}

void ValoresMinMax(int vet[], int tam, int *max, int *min){
    for(int i=1; i<tam; i++){
        if(*max < vet[i]){
            *max = vet[i];
        }
        if(*min > vet[i]){
            *min = vet[i];
        }
    }
}

int main(){
    int quant;
    int *valores;

    cout << "Quantos números deseja armazenar? ";
    cin >> quant;

    valores = new int [quant]; // new tipo -> aloca uma posição de memória dinamicamente e retorna seu endereço
    ReceberValores (valores, quant);

    int max = valores[0];
    int min = valores[0];

    ValoresMinMax(valores, quant, &max, &min);

    cout<< "O menor valor é "<< min << endl;
    cout << "O maior valore é " << max << endl;



    return 0;
}