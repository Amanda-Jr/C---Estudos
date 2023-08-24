#include <iostream>
#define max 10
using namespace std;

/*
Leia uma matriz e dois valores referentes a duas linhas da matriz. Realize a troca de posição dos valores dessas linhas.
*/

void ler_matriz(int mat[max][max], int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout << "M[" << i+1 << "," << j+1 << "] : ";
            cin >> mat[i][j];
        }
    }
}

void trocarLinha(int mat[max][max], int col, int l1, int l2){
    for (int j=0; j<col; j++){

        int aux = mat[l1-1][j];

        mat[l1-1][j]=mat[l2-1][j];
        mat[l2-1][j]=aux;
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
    int lin, col,l1,l2;
    int m[max][max];

    cout<<"Quantas linhas? ";
    cin >> lin;
    cout << "Quantas colunas? ";
    cin >> col;

    ler_matriz(m,lin,col);
    imprimir(m,lin,col);

    cout<<"Qual linha deseja trocar? ";
    cin>>l1;
    cout<<"Por qual? ";
    cin>>l2;

    trocarLinha(m,col,l1,l2);
    imprimir(m,lin,col);

    return 0;
}