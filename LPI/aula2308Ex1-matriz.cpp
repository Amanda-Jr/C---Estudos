#include <iostream>
#define max 10
#define linfor for(int i=0; i<lin; i++)
#define colfor for(int j=0; j<col; j++)
using namespace std;

/*
Dadas duas matrizes de mesma dimensão. definida pelo usuário (com limite máximo de 10 linhas e colunas), realize a soma das matrizes
*/

//sem define
void ler_matriz(int mat[max][max], int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout << "M[" << i+1 << "," << j+1 << "] : ";
            cin >> mat[i][j];
        }
    }
}

//com define
void somar_matriz(int matS[max][max], int m1[max][max], int m2[max][max], int lin, int col){
    linfor{
        colfor{
            matS[i][j] = m1[i][j]+m2[i][j];
        }
    }
}

void imprimir(int mat[max][max], int lin, int col){
    linfor{
        colfor{
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int l, c;
    int m1[max][max], m2[max][max], mS[max][max];

    cout<<"Quantas linhas? ";
    cin >> l;
    cout << "Quantas colunas? ";
    cin >> c;

    cout<<"Matriz 1: "<< endl;
    ler_matriz(m1,l,c);
    cout<<"Matriz 2: "<< endl;
    ler_matriz(m2,l,c);

    somar_matriz(mS, m1,m2,l,c);

    cout<<"Matriz 1: "<< endl;
    imprimir(m1,l,c);
    cout<<"Matriz 2: "<< endl;
    imprimir(m2,l,c);
    cout<<"Matriz soma: "<< endl;
    imprimir(mS,l,c);

    return 0;
}

