#include <iostream>
using namespace std;

int ** criar_matriz(int lin, int col){
    int ** mat;
    mat = new int* [lin];
    for(int i=0; i<lin; i++){
        mat[i] = new int[col];
    }
    return mat;
}

void preencher_matriz(int **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout << "Matriz ["<<i+1<<", "<<j+1<<"]: ";
            cin >> mat[i][j];
        }
    }
}

void imprimir_matriz(int **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout <<endl;
    }
}

int main(){
    int lin, col;

    cout<<"Quantas linhas? ";
    cin >> lin;
    cout<<"Quantas colunas? ";
    cin >> col;

    int **mat = criar_matriz(lin,col);
    preencher_matriz(mat, lin, col);
    imprimir_matriz(mat, lin, col);

    return 0;
}