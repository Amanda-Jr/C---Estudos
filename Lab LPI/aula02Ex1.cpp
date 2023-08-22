#include <iostream>
using namespace std;

//1- crie uma função que receba um inetiro e verifique se é par. Função retorna 1 se par e 0 se ímpar

int paridade(int num){
    int p;

    if(num%2==0){
        p=1;
    } else {
        p=0;
    }
    
    return p;
}

int main(){
    int num;

    cout << "Digite um número: ";
    cin >> num;

    if(paridade(num)){
        cout << "O número é par" << endl;
    } else{
        cout << "O número é ímpar" << endl;
    }

    return 0;
}