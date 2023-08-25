#include <iostream>
#define max 10
using namespace std;

/*
Faça um programa que leia um valor referente á ordem de uma matriz quadrada e gere a matriz identidade dessa ordem.
*/


void matriz_identidade(int mat[max][max], int ord){
    for(int i=0; i<ord; i++){
        for(int j=0; j<ord; j++){
            if(i==j){
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }
}

void imprimir(int mat[max][max], int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main(){
    int ordem;
    int mat[max][max];

    cout<<"Qual a ordem da matriz? ";
    cin >> ordem;

    matriz_identidade(mat, ordem);
    imprimir(mat, ordem, ordem);

    return 0;
}